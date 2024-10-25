using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerScript : MonoBehaviour
{
    public float Speed;
    public Vector2 inputValue;
    public ScannerScript Scan;
    Rigidbody2D Rigid2D;
    SpriteRenderer SpriteRen;
    Animator Anim;

    private void Awake()
    {
        Rigid2D = GetComponent<Rigidbody2D>();
        SpriteRen = GetComponent<SpriteRenderer>();
        Anim = GetComponent<Animator>();
        Scan = GetComponent<ScannerScript>();
    }

    void Start()
    {
        
    }


    void FixedUpdate()
    {
        Vector2 NewVector2 = inputValue * Speed * Time.deltaTime;
        Rigid2D.MovePosition(Rigid2D.position + NewVector2);
    }

    void OnMove(InputValue Value)
    {
        inputValue = Value.Get<Vector2>(); 
    }

    void LateUpdate()
    {
        if(inputValue.x != 0) 
        {
            SpriteRen.flipX = inputValue.x < 0;
        }

        Anim.SetFloat("PlayerSpeed", inputValue.magnitude);
    }
}
