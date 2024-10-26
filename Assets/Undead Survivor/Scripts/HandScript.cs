using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandScript : MonoBehaviour
{
    public bool IsRight;
    public SpriteRenderer Sprite;
    SpriteRenderer PlayerSprite;

    Vector3 LeftPos = new Vector3(0.3f, -0.1f, 0.0f);
    Vector3 LeftPosReverse = new Vector3(0.0f, -0.1f, 0.0f);

    Vector3 RightPos = new Vector3(0.15f, -0.4f, 0.0f);
    Vector3 RightPosReverse = new Vector3(-0.25f, -0.4f, 0.0f);

    void Awake()
    {
        PlayerSprite = GetComponentsInParent<SpriteRenderer>()[1];
    }

    void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (IsRight)
        {
            transform.localPosition = PlayerSprite.flipX ? RightPosReverse : RightPos;
            Sprite.flipX = PlayerSprite.flipX;
            Sprite.sortingOrder = PlayerSprite.flipX ? 4 : 6;
        }
        else 
        {
            transform.localPosition = PlayerSprite.flipX ? LeftPosReverse : LeftPos;
            Sprite.flipX = PlayerSprite.flipX;
            Sprite.sortingOrder = PlayerSprite.flipX ? 6 : 4;
        }
        
    }


}
