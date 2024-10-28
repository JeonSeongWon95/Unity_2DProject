using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

public class AchieveManager : MonoBehaviour
{
    enum Achieve
    {
        UnlockCharacter2,
        UnlockCharacter3
    }

    public GameObject[] LockCharacter;
    public GameObject[] UnlockCharacter;
    public GameObject Notice;
    WaitForSecondsRealtime Wait;
    Achieve[] Achieves;

    void Awake()
    {
        Achieves = (Achieve[])Enum.GetValues(typeof(Achieve));
        Wait = new WaitForSecondsRealtime(5);

        if (PlayerPrefs.GetInt("Init") == 0)
        {
            Init();
        }
    }

    void Start()
    {
        foreach (Achieve achieve in Achieves)
        {
            UnlockAchieve(achieve);
        }

    }

    void Init()
    {
        PlayerPrefs.SetInt("Init", 1);

        foreach (Achieve achieve in Achieves)
        {
            PlayerPrefs.SetInt(achieve.ToString(), 0);
        }

    }

    void LateUpdate()
    {
        foreach (Achieve achieve in Achieves)
        {
            CheckAchieved(achieve);
        }
    }

    void UnlockAchieve(Achieve achieve)
    {
        string AchieveName = achieve.ToString();
        bool IsAchieved = PlayerPrefs.GetInt(AchieveName) == 1;

        if (!IsAchieved)
            return;

        switch (achieve) 
        {
            case Achieve.UnlockCharacter2:
            case Achieve.UnlockCharacter3:
                LockCharacter[(int)achieve].SetActive(!IsAchieved);
                UnlockCharacter[(int)achieve].SetActive(IsAchieved);
                break;
            default:
                break;
        }

    }

    void CheckAchieved(Achieve achieve)
    {
        bool IsAchieve = false;

        switch (achieve)
        {
            case Achieve.UnlockCharacter2:

                if (GameManager.Instance.Kill >= 10)
                {
                    IsAchieve = true;
                }
                break;

            case Achieve.UnlockCharacter3:
                if (GameManager.Instance.GameTime >= GameManager.Instance.MaxGameTime)
                {
                    IsAchieve = true;
                }

                break;
            default:
                break;
        }

        if (IsAchieve && PlayerPrefs.GetInt(achieve.ToString()) == 0)
        {
            PlayerPrefs.SetInt(achieve.ToString(), 1);

            for (int i = 0; i < Notice.transform.childCount; i++)
            {
                bool IsActive = i == (int)achieve;
                Notice.transform.GetChild(i).gameObject.SetActive(IsActive);
                
            }

            StartCoroutine(ShowNotice());
        }

    }

    IEnumerator ShowNotice() 
    {
        Notice.SetActive(true);
        AudioManager.instance.PlaySFX(AudioManager.SFX.LevelUp);
        yield return Wait;

        Notice.SetActive(false);
    }
}
