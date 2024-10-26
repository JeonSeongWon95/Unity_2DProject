using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemButtonScript : MonoBehaviour
{
    public ItemDataScriptableObject item;
    public WeaponScript weapon;
    public GearScript gear;
    public int Level;

    Text Level_Text;
    Text Name_Text;
    Text Desc_Text;
    Image ButtonImage;

    void Awake()
    {
        ButtonImage = GetComponentsInChildren<Image>()[1];
        ButtonImage.sprite = item.ItemIcon;

        Text[] texts = GetComponentsInChildren<Text>();
        Level_Text = texts[0];
        Name_Text = texts[1];
        Desc_Text = texts[2];

        Name_Text.text = item.ItemName;
    }

    private void OnEnable()
    {
        Level_Text.text = "Lv." + Level;

        switch (item.Type)
        {
            case ItemDataScriptableObject.ItemType.Melee:
            case ItemDataScriptableObject.ItemType.Range:
                Desc_Text.text = string.Format(item.ItemDesc, item.Damages[Level] * 100, item.Counts[Level]);
                break;
            case ItemDataScriptableObject.ItemType.Glove:
            case ItemDataScriptableObject.ItemType.shoe:
                Desc_Text.text = string.Format(item.ItemDesc, item.Damages[Level] * 100);
                break;
            case ItemDataScriptableObject.ItemType.Heal:
                Desc_Text.text = item.ItemDesc;
                break;

        }
    }

    public void Onclicked() 
    {
        switch (item.Type)
        {
            case ItemDataScriptableObject.ItemType.Melee:
            case ItemDataScriptableObject.ItemType.Range:
                if(Level <= 0) 
                {
                    GameObject NewGameObject = new GameObject();
                    weapon = NewGameObject.AddComponent<WeaponScript>();
                    weapon.Init(item);
                }
                else 
                {
                    float NewDamage = item.Damages[Level];
                    int NewCount = item.Counts[Level];
                    weapon.LevelUp(NewDamage, NewCount);
                }
                break;

            case ItemDataScriptableObject.ItemType.Glove:
            case ItemDataScriptableObject.ItemType.shoe:
                if (Level <= 0)
                {
                    GameObject NewGameObject = new GameObject();
                    gear = NewGameObject.AddComponent<GearScript>();
                    gear.Init(item);
                }
                else
                {
                    float NewDamage = item.Damages[Level];
                    gear.LevelUp(NewDamage);
                }
                break;

            case ItemDataScriptableObject.ItemType.Heal:
                GameManager.Instance.Health = GameManager.Instance.MaxHealth;
                break;
            default:
                break;
        }

        Level++;

        if(Level >= item.Damages.Length) 
        {
            GetComponent<Button>().interactable = false;
        }
    }

}
