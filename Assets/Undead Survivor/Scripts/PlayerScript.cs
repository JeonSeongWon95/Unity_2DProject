using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerScript : MonoBehaviour
{
    public float Speed;
    public Vector2 inputValue;
    public ScannerScript Scan;
    public RuntimeAnimatorController[] RuntimeAnimC;

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

    private void OnEnable()
    {
        Anim.runtimeAnimatorController = RuntimeAnimC[GameManager.Instance.PlayerID];
        Speed *= CharacterScript.Speed;
    }


    void FixedUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        Vector2 NewVector2 = inputValue * Speed * Time.deltaTime;
        Rigid2D.MovePosition(Rigid2D.position + NewVector2);
    }

    void OnMove(InputValue Value)
    {
        inputValue = Value.Get<Vector2>(); 
    }

    void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (inputValue.x != 0) 
        {
            SpriteRen.flipX = inputValue.x < 0;
        }

        Anim.SetFloat("PlayerSpeed", inputValue.magnitude);
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (GameManager.Instance.IsPause)
            return;

        if (collision.gameObject.CompareTag("Enemy"))
        {
            GameManager.Instance.Health -= Time.deltaTime * 10.0f;

            if (GameManager.Instance.Health <= 0)
            {
                Transform[] transforms = GetComponentsInChildren<Transform>();

                for (int i = 2; i < transform.childCount; i++)
                {
                   transform.GetChild(i).gameObject.SetActive(false);
                }

                GameManager.Instance.GameOver();
                Anim.SetTrigger("PlayerDead");
            }
        }
    }
}
