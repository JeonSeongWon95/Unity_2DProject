using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    
    public Rigidbody2D target;
    public float Speed;
    public float Health;
    public float MaxHealth;
    public RuntimeAnimatorController[] RunTimeAC;

    WaitForFixedUpdate wait;
    bool IsLive;
    Rigidbody2D Rigid;
    SpriteRenderer Sprite;
    Animator Anim;
    Collider2D Coll;

    void Awake()
    {
        Rigid = GetComponent<Rigidbody2D>();
        Sprite = GetComponent<SpriteRenderer>();
        Anim = GetComponent<Animator>();
        Coll = GetComponent<Collider2D>();
        wait = new WaitForFixedUpdate();
    }

    void FixedUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (!(IsLive) || Anim.GetCurrentAnimatorStateInfo(0).IsName("Hit"))
            return;

        Vector2 Direction = target.position - Rigid.position;
        Vector2 TargetLocation = Direction.normalized * Speed * Time.fixedDeltaTime;
        Rigid.MovePosition(Rigid.position + TargetLocation);
        Rigid.velocity = Vector2.zero;
    }

    private void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (!(IsLive))
            return;

        Sprite.flipX = target.position.x < Rigid.position.x;
    }

    void SetTarget() 
    {
        target = GameManager.Instance.Player.gameObject.GetComponent<Rigidbody2D>();
    }

    void OnEnable()
    {
        SetTarget();
        IsLive = true;
        Health = MaxHealth;
        Coll.enabled = true;
        Rigid.simulated = true;
        Sprite.sortingOrder = 2;
        Anim.SetBool("Dead", false);
    }

    public void Init(SpawnData NewData) 
    {
        Speed = NewData.Speed;
        MaxHealth = NewData.Health;
        Anim.runtimeAnimatorController = RunTimeAC[NewData.MonsterType];
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (!collision.CompareTag("Bullet") || !IsLive)
            return;

        Health -= collision.gameObject.GetComponent<BulletScript>().Damage;

        StartCoroutine(Knockback());

        if (Health <= 0.0f)
        {
            IsLive = false;
            Coll.enabled = false;
            Rigid.simulated = false;
            Sprite.sortingOrder = 1;
            Anim.SetBool("Dead", true);
            GameManager.Instance.Kill++;
            GameManager.Instance.AddExp();

            if (!GameManager.Instance.IsPause)
            {
                AudioManager.instance.PlaySFX(AudioManager.SFX.Dead);
            }
        }
        else 
        {
            Anim.SetTrigger("Hit");
            AudioManager.instance.PlaySFX(AudioManager.SFX.Hit);
        }
    }

    IEnumerator Knockback() 
    {
        yield return wait;
        Vector3 PlayerPosition = GameManager.Instance.Player.transform.position;
        Vector3 Dir = transform.position - PlayerPosition;
        Rigid.AddForce(Dir.normalized * 5, ForceMode2D.Impulse);
    }

    void DoDeath() 
    {
        gameObject.SetActive(false);
    }
}
