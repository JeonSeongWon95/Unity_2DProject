using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public PlayerScript Player;
    public EnemyPoolScript EnemyPool;

    private void Awake()
    {
        Instance = this;
    }

}
