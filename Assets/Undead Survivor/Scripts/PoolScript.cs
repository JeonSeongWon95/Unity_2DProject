using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolScript : MonoBehaviour
{
    public GameObject[] Prefabs;
    List<GameObject>[] Pools;

    void Awake()
    {
        Pools = new List<GameObject>[Prefabs.Length];

        for(int i = 0; i < Pools.Length; i++) 
        {
            Pools[i] = new List<GameObject> ();
        }

    }

    public GameObject GetPoolsData(int index) 
    {
        GameObject SelectedEnemy = null;

        foreach (GameObject item in Pools[index])
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
            SelectedEnemy = Instantiate(Prefabs[index]);
            Pools[index].Add(SelectedEnemy);
        }

        return SelectedEnemy;
    }
}
