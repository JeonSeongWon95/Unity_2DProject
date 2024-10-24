using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyPoolScript : MonoBehaviour
{
    public GameObject[] EnemyPrefabs;
    List<GameObject>[] EnemyPools;

    void Awake()
    {
        EnemyPools = new List<GameObject>[EnemyPrefabs.Length];

        for(int i = 0; i < EnemyPools.Length; i++) 
        {
            EnemyPools[i] = new List<GameObject> ();
        }

    }

    public GameObject GetEnemy(int index) 
    {
        GameObject SelectedEnemy = null;

        foreach (GameObject item in EnemyPools[index])
        {
            if (!item.activeSelf) 
            {
                SelectedEnemy = item;
                SelectedEnemy.SetActive(true);
                break;
            }
        }

        if(SelectedEnemy == null) 
        {
            SelectedEnemy = Instantiate(EnemyPrefabs[index]);
            EnemyPools[index].Add(SelectedEnemy);
        }

        return SelectedEnemy;
    }
}
