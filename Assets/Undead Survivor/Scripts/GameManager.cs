using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [Header("#Game Info")]
    public float GameTime = 0.0f;
    public float MaxGameTime = 40.0f;

    [Header("#Game Object")]
    public static GameManager Instance;
    public PlayerScript Player;
    public PoolScript Pool;

    [Header("#Player State")]
    public int Level;
    public int Exp;
    public int Kill;
    public int[] NextExp = { 3, 5, 8, 12, 17, 23, 30, 38, 47, 57 };
    
    private void Awake()
    {
        Instance = this;
    }

    private void Update()
    {
        GameTime += Time.deltaTime;
    }

    public void AddExp() 
    {
        Exp++;

        if (Exp >= NextExp[Level])
        {
            Level++;
            Exp = 0;
        }
    }

}
