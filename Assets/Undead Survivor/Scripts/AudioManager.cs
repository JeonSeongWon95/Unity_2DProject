using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    [Header("#BGM")]
    public AudioClip BGMClip;
    public float BGMVolume;
    public AudioSource BGMSource;
    AudioHighPassFilter BGMFilter;

    [Header("#SFX")]
    public AudioClip[] SFXClips;
    public AudioSource[] SFXSources;
    public float SFXVolume;
    public int Channels;
    public int Index;

    public enum SFX
    {
        Dead,
        Hit,
        LevelUp = 3,
        Lose,
        Melee,
        Range = 7,
        Select,
        Win
    }

    private void Awake()
    {
        instance = this;
        Init();
    }

    void Init() 
    {
        GameObject BGMObject = new GameObject("BGMObejct");
        BGMObject.transform.parent = transform;
        BGMSource = BGMObject.AddComponent<AudioSource>();
        BGMSource.playOnAwake = false;
        BGMSource.volume = BGMVolume;
        BGMSource.clip = BGMClip;
        BGMSource.loop = true;

        GameObject SFXObject = new GameObject("SFXObject");
        SFXObject.transform.parent = transform;

        SFXSources = new AudioSource[Channels];

        for(int i = 0; i < SFXSources.Length; i++) 
        {
            SFXSources[i] = SFXObject.AddComponent<AudioSource>();
            SFXSources[i].playOnAwake = false;
            SFXSources[i].volume = SFXVolume;
            SFXSources[i].bypassListenerEffects = true;
        }

        BGMFilter = Camera.main.GetComponent<AudioHighPassFilter>();

    }

    public void PlayBGM(bool IsPlaying) 
    {
        if (IsPlaying) 
        {
            BGMSource.Play();
        }
        else 
        {
            BGMSource.Stop();
        }

    }

    public void AddEffects(bool IsPlaying)
    {
        BGMFilter.enabled = IsPlaying;
    }

    public void PlaySFX(SFX sfx) 
    {
        for(int i = 0; i < SFXSources.Length; i++) 
        {
            int LoopIndex = (i + Index) % SFXSources.Length;

            if (SFXSources[LoopIndex].isPlaying)
                continue;

            int RendomIndex = 0;

            switch (sfx) 
            {
                case SFX.Hit:
                case SFX.Melee:
                    RendomIndex = Random.Range(0, 2);
                    break;
                default:
                    break;
            }

            Index = LoopIndex;
            SFXSources[LoopIndex].clip = SFXClips[(int)sfx + RendomIndex];
            SFXSources[LoopIndex].Play();
            break;
        }
    }
}
