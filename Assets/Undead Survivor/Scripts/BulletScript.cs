using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{

    public float Damage;
    public int Per;

    Rigidbody2D Rigid;

    private void Awake()
    {
        Rigid = GetComponent<Rigidbody2D>();
    }

    public void Init(float NewDamage, int NewPer, Vector3 Dir = default)
    {
        this.Damage = NewDamage;
        this.Per = NewPer;

        if(Per >= 0) 
        {
            Rigid.velocity = Dir * 15f;
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {

        if (Per == -100 || !collision.CompareTag("Enemy"))
            return;

        Per--;

        if(Per >= -1) 
        {
            Rigid.velocity = Vector3.zero;
            gameObject.SetActive(false);
        }
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        if (!collision.CompareTag("Area") || Per == -100)
            return;

        gameObject.SetActive(false);
    }

}
