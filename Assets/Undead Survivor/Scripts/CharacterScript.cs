using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterScript : MonoBehaviour
{
    public static float Speed 
    {
        get { return GameManager.Instance.PlayerID == 0 ? 1.1f : 1.0f; }
    }
    public static float WeaponRate
    {
        get { return GameManager.Instance.PlayerID == 1 ? 1.1f : 1.0f; }
    }
    public static float WeaponSpeed
    {
        get { return GameManager.Instance.PlayerID == 1 ? 0.9f : 1.0f; }
    }
    public static float Damage
    {
        get { return GameManager.Instance.PlayerID == 2 ? 1.1f : 1.0f; }
    }
    public static int Count
    {
        get { return GameManager.Instance.PlayerID == 3 ? 1 : 0; }
    }
}
