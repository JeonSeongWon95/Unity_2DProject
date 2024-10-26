using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Item", menuName = "Scriptable Object/ItemData")]
public class ItemDataScriptableObject : ScriptableObject
{
    public enum ItemType
    {
        Melee,
        Range,
        Glove,
        shoe,
        Heal

    }

    [Header("# Main info")]
    public ItemType Type;
    public int ItemId;
    public Sprite ItemIcon;
    public string ItemName;
    [TextArea]
    public string ItemDesc;

    [Header("# Level Data")]
    public float BaseDamage;
    public int BaseCount;
    public float[] Damages;
    public int[] Counts;

    [Header("# Weapon")]
    public GameObject Projectile;
    public Sprite HandSprite;
}
