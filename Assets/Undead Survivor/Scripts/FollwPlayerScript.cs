using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollwPlayerScript : MonoBehaviour
{
    RectTransform RectTr;

    void Awake()
    {
        RectTr = GetComponent<RectTransform>();
    }

    void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        RectTr.position = Camera.main.WorldToScreenPoint(GameManager.Instance.Player.transform.position);   
    }
}
