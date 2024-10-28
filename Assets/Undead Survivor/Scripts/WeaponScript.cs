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
        Player = GameManager.Instance.Player;
    }

    public void LevelUp(float NewDamage, int NewCount) 
    {
        Damage = NewDamage * CharacterScript.Damage;
        Count = NewCount + CharacterScript.Count;

        if (Id == 0)
        {
            Batch();
        }

        Player.BroadcastMessage("ApplyGear", SendMessageOptions.DontRequireReceiver);
    }

    void Update()
    {
        if (GameManager.Instance.IsPause)
            return;

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
    }

    public void Init(ItemDataScriptableObject Data)
    {
        name = "Weapon " + Data.ItemId;
        transform.parent = Player.transform;
        transform.localPosition = Vector3.zero;

        Id = Data.ItemId;
        Damage = Data.BaseDamage * CharacterScript.Damage;
        Count = Data.BaseCount + CharacterScript.Count;

        for (int i = 0; i < GameManager.Instance.Pool.Prefabs.Length; i++)
        {
            if(Data.Projectile == GameManager.Instance.Pool.Prefabs[i]) 
            {
                PrefabsId = i;
                break;
            }
        }

        switch (Id) 
        {
            case 0:
                Speed = 150 * CharacterScript.WeaponRate;
                Batch();
                break;
            case 1:
                Speed = 0.5f * CharacterScript.WeaponSpeed;
                break;
            default:
                break;
        }

        HandScript Hand = Player.GetComponentsInChildren<HandScript>(true)[(int)Data.Type];
        Hand.gameObject.SetActive(true);
        Hand.Sprite.sprite = Data.HandSprite;

        Player.BroadcastMessage("ApplyGear",SendMessageOptions.DontRequireReceiver);
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
            SeletedTransform.GetComponent<BulletScript>().Init(Damage, -100); // -100은 관통이 무한임을 나타냄
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

        AudioManager.instance.PlaySFX(AudioManager.SFX.Range);
    }
}
