using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponScript : MonoBehaviour
{
    public int Id;
    public int PrefabsId;
    public int Count;
    public float Damage;
    public float Speed;

    float Timer;
    PlayerScript Player;

    void Awake()
    {
        Player = GetComponentInParent<PlayerScript>();
    }
    void Start()
    {
        Init();
    }

    public void LevelUp(float NewDamage, int NewCount) 
    {
        Damage += NewDamage;
        Count += NewCount;

        if (Id == 0)
        {
            Batch();
        }
    }

    void Update()
    {
        switch (Id)
        {
            case 0:
                transform.Rotate(Vector3.back * Speed * Time.deltaTime);
                break;

            case 1:

                Timer += Time.deltaTime;

                if(Timer > Speed) 
                {
                    Timer = 0;
                    Fire();
                }

                break;
            default:
                break;
        }

        if (Input.GetKeyDown(KeyCode.Space)) 
        {
            LevelUp(10, 2);
        }
    }

    public void Init() 
    {
        switch (Id) 
        {
            case 0:
                Speed = 150;
                Batch();
                break;
            case 1:
                Speed = 0.3f;
                break;
            default:
                break;
        }
    }

    void Batch() 
    {
        for (int i = 0; i < Count; i++)
        {
            Transform SeletedTransform;

            if (i  < transform.childCount) 
            {
                SeletedTransform = transform.GetChild(i);
            }
            else 
            {
                SeletedTransform = GameManager.Instance.Pool.GetPoolsData(PrefabsId).transform;
                SeletedTransform.parent = transform;
            }

            SeletedTransform.localPosition = Vector3.zero;
            SeletedTransform.localRotation = Quaternion.identity;

            SeletedTransform.Rotate(Vector3.forward * 360 * i / Count);
            SeletedTransform.Translate(SeletedTransform.up * 1.5f, Space.World);
            SeletedTransform.GetComponent<BulletScript>().Init(Damage, -1); // -1�� ������ �������� ��Ÿ��
        }

    }

    void Fire() 
    {
        if (Player.Scan.Target == null)
            return;

        Vector3 Dir = Player.Scan.Target.position - transform.position;
        Dir = Dir.normalized;

        Transform SeletedTransform = GameManager.Instance.Pool.GetPoolsData(PrefabsId).transform;
        SeletedTransform.position = transform.position;
        SeletedTransform.rotation = Quaternion.FromToRotation(Vector3.up, Dir);
        SeletedTransform.GetComponent<BulletScript>().Init(Damage, Count, Dir);
    }
}