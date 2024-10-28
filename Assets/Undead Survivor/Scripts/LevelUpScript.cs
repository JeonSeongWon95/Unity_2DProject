using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class LevelUpScript : MonoBehaviour
{

    RectTransform RectTr;
    ItemButtonScript[] ItemButtons;

    void Awake()
    {
        RectTr = GetComponent<RectTransform>();
        ItemButtons = GetComponentsInChildren<ItemButtonScript>(true);
    }

    public void SeletItem(int Index) 
    {
        ItemButtons[Index].Onclicked();
    }

    public void Open() 
    {
        if (ChoseItems())
        {
            RectTr.localScale = Vector3.one;
            GameManager.Instance.Pasue();
            AudioManager.instance.AddEffects(true);
        }
    }
    public void Close()
    {
        RectTr.localScale = Vector3.zero;
        GameManager.Instance.Resume();
        AudioManager.instance.PlaySFX(AudioManager.SFX.Select);
        AudioManager.instance.AddEffects(false);
    }

    public bool ChoseItems() 
    {
        List<ItemButtonScript> SelecteItems = new List<ItemButtonScript>();
        int MasterItem = 0;
        int PossibleSelect = 0;

        for (int i = 0; i < ItemButtons.Length; i++)
        {
            ItemButtons[i].gameObject.SetActive(false);

            if (ItemButtons[i].Level >= ItemButtons[i].item.Damages.Length) 
            {
                MasterItem++;
            }
        }

        PossibleSelect = ItemButtons.Length - MasterItem >= 3 ? 3 : ItemButtons.Length - MasterItem;

        if(PossibleSelect <= 0) 
        {
            return false;
        }

        while (true) 
        {
            int RandomNumber = Random.Range(0, ItemButtons.Length);

            if (SelecteItems.Contains(ItemButtons[RandomNumber]))
                continue;

            if (ItemButtons[RandomNumber].Level >= ItemButtons[RandomNumber].item.Damages.Length)
                continue;

            SelecteItems.Add(ItemButtons[RandomNumber]);

            if(SelecteItems.Count >= PossibleSelect) 
            {
                foreach (ItemButtonScript item in SelecteItems)
                {
                    item.gameObject.SetActive(true);
                }

                break;
            }
        }

        return true;
    }
}
