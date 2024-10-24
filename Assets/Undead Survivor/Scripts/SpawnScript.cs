using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnScript : MonoBehaviour
{

    public float Timer;
    public Transform[] SpawnPoints;

    void Awake()
    {
        SpawnPoints = GetComponentsInChildren<Transform>();
    }

    void Update()
    {
        Timer += Time.deltaTime;

        if(Timer > 1.0f) 
        {
            Timer = 0.0f;
            Spawn();
        }
    }

    void Spawn() 
    {
        GameObject SpawnEnemy = GameManager.Instance.EnemyPool.GetEnemy(Random.Range(0, 2));
        SpawnEnemy.transform.position = SpawnPoints[Random.Range(1, SpawnPoints.Length)].position;
    }

}
