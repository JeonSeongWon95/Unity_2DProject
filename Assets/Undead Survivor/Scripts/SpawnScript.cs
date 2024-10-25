using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnScript : MonoBehaviour
{

    public float Timer;
    public int Level;
    public Transform[] SpawnPoints;
    public SpawnData[] SpawnDatas;

    void Awake()
    {
        SpawnPoints = GetComponentsInChildren<Transform>();
    }

    void Update()
    {
        Timer += Time.deltaTime;
        Level = Mathf.FloorToInt(GameManager.Instance.GameTime / 10.0f);

        if(Timer > SpawnDatas[Level].SpawnTime) 
        {
            Timer = 0.0f;
            Spawn();
        }
    }

    void Spawn() 
    {
        GameObject SpawnEnemy = GameManager.Instance.Pool.GetPoolsData(0);
        SpawnEnemy.transform.position = SpawnPoints[Random.Range(1, SpawnPoints.Length)].position;
        SpawnEnemy.GetComponent<EnemyScript>().Init(SpawnDatas[Level]);
    }

}

[System.Serializable]
public class SpawnData
{
    public int MonsterType;
    public int Health;
    public float SpawnTime;
    public float Speed;
}
