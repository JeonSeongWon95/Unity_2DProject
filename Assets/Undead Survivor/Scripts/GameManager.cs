using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [Header("#Game Info")]
    public float GameTime;
    public float MaxGameTime;
    public bool IsPause;

    [Header("#Game Object")]
    public static GameManager Instance;
    public PlayerScript Player;
    public PoolScript Pool;
    public LevelUpScript LevelUp;
    public GameEndUIScript EndUI;
    public GameObject EnemyCleaner;
    public Transform JoyUI;

    [Header("#Player State")]
    public int PlayerID;
    public int Level;
    public int Exp;
    public int Kill;
    public float Health;
    public float MaxHealth = 100;
    public int[] NextExp = { 3, 5, 8, 12, 17, 23, 30, 38, 47, 57 };
    
    private void Awake()
    {
        Instance = this;
        Application.targetFrameRate = 60;
    }

    public void GameStart(int NewPlayerID)
    {
        PlayerID = NewPlayerID;
        Player.gameObject.SetActive(true);
        Resume();
        Health = MaxHealth;
        LevelUp.SeletItem(PlayerID % 2);
        AudioManager.instance.PlaySFX(AudioManager.SFX.Select);
        AudioManager.instance.PlayBGM(true);
    }

    public void GameOver() 
    {
        StartCoroutine(GameOverRoutine());
    }

    IEnumerator GameOverRoutine() 
    {
        IsPause = true;
        
        yield return new WaitForSeconds(0.5f);
        EndUI.gameObject.SetActive(true);
        EndUI.Lose();
        AudioManager.instance.PlaySFX(AudioManager.SFX.Lose);
        AudioManager.instance.PlayBGM(false);
        Pasue();
    }
    public void GameWin()
    {
        StartCoroutine(GameWinRoutine());
    }

    IEnumerator GameWinRoutine()
    {
        IsPause = true;
        EnemyCleaner.SetActive(true);

        yield return new WaitForSeconds(0.5f);

        AudioManager.instance.PlaySFX(AudioManager.SFX.Win);
        EndUI.gameObject.SetActive(true);
        AudioManager.instance.PlayBGM(false);
        EndUI.Win();
        Pasue();
    }

    public void GameRestart() 
    {
        SceneManager.LoadScene(0);
    }

    public void GameQuit()
    {
        Application.Quit();
    }

    private void Update()
    {
        if (IsPause)
            return;

        GameTime += Time.deltaTime;

        if(GameTime >= MaxGameTime) 
        {
            GameWin();
        }
    }

    public void AddExp() 
    {
        if (IsPause)
            return;

        Exp++;

        if (Exp >= NextExp[Mathf.Clamp(Level, 0, NextExp.Length - 1)])
        {
            Level++;
            LevelUp.Open();
            Exp = 0;
            AudioManager.instance.PlaySFX(AudioManager.SFX.LevelUp);
        }
    }

    public void Pasue() 
    {
        IsPause = true;
        Time.timeScale = 0;
        JoyUI.localScale = Vector3.zero;
    }
    public void Resume() 
    {
        IsPause = false;
        Time.timeScale = 1;
        JoyUI.localScale = Vector3.one;
    }

}
