using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerScript : MonoBehaviour
{
    public float Speed;
    public Vector2 inputValue;
    Rigidbody2D rb;
    SpriteRenderer sr;
    Animator at;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
        at = GetComponent<Animator>();
    }

    void Start()
    {
        
    }


    void FixedUpdate()
    {
        Vector2 NewVector2 = inputValue * Speed * Time.deltaTime;
        rb.MovePosition(rb.position + NewVector2);
    }

    void OnMove(InputValue Value)
    {
        inputValue = Value.Get<Vector2>(); 
    }

    void LateUpdate()
    {
        if(inputValue.x != 0) 
        {
            sr.flipX = inputValue.x < 0;
        }

        at.SetFloat("PlayerSpeed", inputValue.magnitude);
    }
}
