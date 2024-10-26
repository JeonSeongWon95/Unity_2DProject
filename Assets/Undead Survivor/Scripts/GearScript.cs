using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GearScript : MonoBehaviour
{
    public ItemDataScriptableObject.ItemType Type;
    public float Rate;

    public void LevelUp(float NewRate)
    {
        Rate = NewRate;
        ApplyGear();
    }

    public void Init(ItemDataScriptableObject Data)
    {
        name = "Weapon " + Data.ItemId;
        transform.parent = GameManager.Instance.Player.transform;
        transform.localScale = Vector3.zero;

        Type = Data.Type;
        Rate = Data.Damages[0];

        ApplyGear();
    }

    public void ApplyGear()
    {
        switch (Type)
        {
            case ItemDataScriptableObject.ItemType.Glove:
                RateUp();
                break;

            case ItemDataScriptableObject.ItemType.shoe:
                SpeedUp();
                break;

            default:
                break;
        }
    }

    void RateUp()
    {
        WeaponScript[] Weapons = transform.parent.GetComponentsInChildren<WeaponScript>();

        for (int i = 0; i < Weapons.Length; i++)
        {
            switch (Weapons[i].Id)
            {
                case 0:
                    Weapons[i].Speed = 150 + (150 * Rate);
                    break;
                case 1:
                    Weapons[i].Speed = 0.5f * (1.0f - Rate);
                    break;
                default:
                    break;

            }
        }

    }

    void SpeedUp()
    {
        GameManager.Instance.Player.Speed = Rate;
    }
}
