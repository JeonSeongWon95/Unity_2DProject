using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEndUIScript : MonoBehaviour
{
    public GameObject[] gameObjects;

    public void Lose() 
    {
        gameObjects[0].SetActive(true);
    }
    public void Win() 
    {
        gameObjects[1].SetActive(true);
    }
}
