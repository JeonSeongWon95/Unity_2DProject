using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUDScript : MonoBehaviour
{
    public enum HUDType
    {
        Exp,
        Level,
        Time,
        Kill,
        Health
    }

    public HUDType Type;
    Text HUDText;
    Slider HUDSlider;

    void Awake()
    {
        HUDText = GetComponent<Text>();
        HUDSlider = GetComponent<Slider>();
    }

    void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        switch (Type)
        {
            case HUDType.Exp:
                float PresentExp = GameManager.Instance.Exp;
                float NextExp = GameManager.Instance.NextExp[Mathf.Clamp(GameManager.Instance.Level, 0
                    , GameManager.Instance.NextExp.Length -1)];
                HUDSlider.value = PresentExp / NextExp;
                break;

            case HUDType.Level:
                HUDText.text = string.Format("Lv.{0:F0}",GameManager.Instance.Level);
                break;

            case HUDType.Time:
                int min = Mathf.FloorToInt(GameManager.Instance.GameTime / 60);
                int sec = Mathf.FloorToInt(GameManager.Instance.GameTime % 60);
                HUDText.text = string.Format("{0:D2}:{1:D2}", min, sec);
                break;

            case HUDType.Kill:
                HUDText.text = string.Format("{0:F0}", GameManager.Instance.Kill);
                break;

            case HUDType.Health:
                float PresentHealth = GameManager.Instance.Health;
                float MaxHealth = GameManager.Instance.MaxHealth;
                HUDSlider.value = PresentHealth / MaxHealth;
                break;
            default:
                break;
        }
    }

}
