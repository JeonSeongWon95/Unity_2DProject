using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    
    public Rigidbody2D target;
    public float Speed;
    bool IsLive = true;
    Rigidbody2D rb;
    SpriteRenderer sr;

    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
    }

    void FixedUpdate()
    {
        if (!(IsLive))
            return;

        Vector2 Direction = target.position - rb.position;
        Vector2 TargetLocation = Direction.normalized * Speed * Time.fixedDeltaTime;
        rb.MovePosition(rb.position + TargetLocation);
        rb.velocity = Vector2.zero;
    }

    private void LateUpdate()
    {
        if (!(IsLive))
            return;

        sr.flipX = target.position.x < rb.position.x;
    }

    void SetTarget() 
    {
        target = GameManager.Instance.Player.gameObject.GetComponent<Rigidbody2D>();
    }

    void OnEnable()
    {
        SetTarget();
    }
}
