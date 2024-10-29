# 프로젝트개요
본 프로젝트는 유니티 엔진을 활용한 뱀파이어 서바이얼 모작입니다.

프로젝트 기간은 약 15일정도 소요되었으며, 모바일 타겟으로 빌드 및 실행까지 테스트 완료하였습니다.

개발 인원은 1인입니다.

[플레이 영상](https://youtu.be/ZRY83zVaT-g?si=Bk9w0vvdJv18PfyT, "Youtube")


# 구현한 기능

토글을 열어 보다 **자세한 코드**를 확인하실 수 있습니다.


### 1. GameManager : 게임 승리, 패배, 종료, 일시정지, 캐릭터의 상태(경험치, 체력, 레벨 등) 관리

<details>
  <summary>코드설명</summary>
   
+ 접근성
```cpp
   public static GameManager Instance;
   
       private void Awake()
       {
           Instance = this;
           Application.targetFrameRate = 60;
       }

```

싱글톤 패턴까지 사용하진 않아도 된다고 판단하여 싱글톤 패턴까지 구현하진 않았으며, 대신에 어느 곳에서나 편하게 접근할 수 있도록 조금 변형하여 Instacne를 정적 변수로 선언하였습니다.


+ 게임 패배, 승리
```cpp
    public void GameOver() 
    {
        StartCoroutine(GameOverRoutine());
    }

    IEnumerator GameOverRoutine() 
       {
           IsPause = true;
           
           yield return new WaitForSeconds(0.5f);
           EndUI.gameObject.SetActive(true);
           EndUI.Lose();
           AudioManager.instance.PlaySFX(AudioManager.SFX.Lose);
           AudioManager.instance.PlayBGM(false);
           Pasue();
       }
       public void GameWin()
       {
           StartCoroutine(GameWinRoutine());
       }
   
       IEnumerator GameWinRoutine()
       {
           IsPause = true;
           EnemyCleaner.SetActive(true);
   
           yield return new WaitForSeconds(0.5f);
   
           AudioManager.instance.PlaySFX(AudioManager.SFX.Win);
           EndUI.gameObject.SetActive(true);
           AudioManager.instance.PlayBGM(false);
           EndUI.Win();
           Pasue();
       }
   
       public void GameRestart() 
       {
           SceneManager.LoadScene(0);
       }
   
       public void GameQuit()
       {
           Application.Quit();
       }
   
   ```
   
게임 패배, 승리 시 해당 조건에 맞는 UI 및 애니메이션, 사운드 등이 출력되어야 하기 때문에 코루틴을 사용하여 일정 시간 뒤 실행되도록 설정하였습니다.
승리 시 존재하는 모든 몬스터가 죽도록 맵 전체를 덮는 EnemyClear Object가 활성화되어 Collision 안에 존재하는 모든 Enemy를 죽이며 이때는 경험치가 들어오지 않도록 예외처리하였습니다.
   
   
+ 게임 일시정지, 일시정지해제, 종료, 재시작
```cpp
       public void Pasue() 
       {
           IsPause = true;
           Time.timeScale = 0;
           JoyUI.localScale = Vector3.zero;
       }
       public void Resume() 
       {
           IsPause = false;
           Time.timeScale = 1;
           JoyUI.localScale = Vector3.one;
       }
       public void GameRestart() 
       {
           SceneManager.LoadScene(0);
       }
   
       public void GameQuit()
       {
           Application.Quit();
       }  
 ```
 게임 일시정지는 timeScale을 조정하고, IsPause를 이용하여 모든 Object의 업데이트 문에서 예외를 넣어 처리하였습니다.
 이때 화면의 조이스틱이 가리지 않도록 Scale을 조절하여 없어지도록 하였습니다.
   
   
+ 게임 시간 및 캐릭터 상태 관리
   
```cpp
       [Header("#Player State")]
       public int PlayerID;
       public int Level;
       public int Exp;
       public int Kill;
       public float Health;
       public float MaxHealth = 100;
       public int[] NextExp = { 3, 5, 8, 12, 17, 23, 30, 38, 47, 57 };
   
       private void Update()
       {
           if (IsPause)
               return;
   
           GameTime += Time.deltaTime;
   
           if(GameTime >= MaxGameTime) 
           {
               GameWin();
           }
       }
   
       public void AddExp() 
       {
           if (IsPause)
               return;
   
           Exp++;
   
           if (Exp >= NextExp[Mathf.Clamp(Level, 0, NextExp.Length - 1)])
           {
               Level++;
               LevelUp.Open();
               Exp = 0;
               AudioManager.instance.PlaySFX(AudioManager.SFX.LevelUp);
           }
       }
   ```
   
GameManager에 캐릭터의 체력, 레벨, 경험치. 게임 시간, 킬수를 변수로 선언하여 다른 Object에서 해당 상태의 값을 변경할 수 있도록 구현하였습니다.
Update에서 게임의 시간을 확인하며 MaxGameTime에 도달하면 게임 승리가 되도록 하였습니다.
   
경험치 증가 및 레벨업 처리도 GameManager에서 처리하였으며, 레벨이 오르면 현재 경험치를 0으로 바꾸고 다음 경험치 목표량을 경험치 배열에서 값을 가져오도록 하였습니다.
</details>


### 2. PoolManager : 총알, 적, 근접무기 Object 활성화 및 비활성화 관리.

<details>
  <summary>코드설명</summary>

+ 초기화 및 설정
```cpp
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
 ```
Awake 함수에서 미리 지정한 Prefabs의 수만큼의 크기를 갖는 List 배열을 하나 생성하며, 생성된 List 배열 안에서 각 element 마다 List를 하나씩 생성해주도록 하였습니다.
   
+ 객체 생성 및 관리
```cpp
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
   ```
생성 또는 꺼내온 GameObject를 반환하도록 함수의 반환형을 GameObject로 하였으며, List 배열 중 몇 번째 List에 아이템인지 미리 인덱스를 받아와 찾을 수 있도록 인자로 Index를 받습니다.
pools 배열의 Index에 해당하는 List를 가져와서 List 내부를 탐색하며 Active가 비활성화 되어 있는 객체를 가져와 활성화 및 반환합니다.
   
없는 경우 Prefabs 내 Prefabs를 바탕으로 새로운 객체를 생성하며, 생성한 객체를 반환 및 Pools의 배열 안에 해당하는 List에 넣어 관리하도록 하였습니다.

</details>

### 3. AchieveManager : 업적 관리(캐릭터 해금)

<details>
  <summary>코드설명</summary>

+ 초기화 및 설정
```cpp
       enum Achieve
       {
           UnlockCharacter2,
           UnlockCharacter3
       }
   
       public GameObject[] LockCharacter;
       public GameObject[] UnlockCharacter;
       public GameObject Notice;
       WaitForSecondsRealtime Wait;
       Achieve[] Achieves;
   
       void Awake()
       {
           Achieves = (Achieve[])Enum.GetValues(typeof(Achieve));
           Wait = new WaitForSecondsRealtime(5);
   
           if (PlayerPrefs.GetInt("Init") == 0)
           {
               Init();
           }
       }
       void Init()
       {
           PlayerPrefs.SetInt("Init", 1);
   
           foreach (Achieve achieve in Achieves)
           {
               PlayerPrefs.SetInt(achieve.ToString(), 0);
           }
   
       }
```
enum class를 이용하여 해금할 업적을 각각 기재합니다.
객체가 초기화 된 후 Awake 함수에서 Achieves 배열에 Achieve enum class의 모든 값을 저장한 뒤 배열로 반환하여 그 값을 저장합니다.
   
업적 해금 시 해금 UI가 일정시간 나왔다가 사라지도록 하기 위해 미리 WaitForSecondsRealtime 객체를 생성하여 받았습니다.
Init 함수가 호출 되지 않은 경우를 확인하여(PlayerPrefs의 Init 변수 값을 확인) 호출 되지 않은 경우 Init 함수를 실행하였습니다.
   
Init 함수에서는 재호출 되지 않도록 PlayerPrefs의 Init 변수 값을 1로 변경하며 foreach 반복문을 이용하여 PlayerPrefs에 모든 업적을 넣습니다.
   
+ 업적 해금 여부 확인 및 업적 해금 처리
```cpp
   void Start()
   {
      foreach (Achieve achieve in Achieves)
       {
          UnlockAchieve(achieve);
       }
    }

   void LateUpdate()
   {
       foreach (Achieve achieve in Achieves)
       {
           CheckAchieved(achieve);
       }
   }
   
   void UnlockAchieve(Achieve achieve)
   {
       string AchieveName = achieve.ToString();
       bool IsAchieved = PlayerPrefs.GetInt(AchieveName) == 1;
   
       if (!IsAchieved)
           return;
   
       switch (achieve) 
       {
           case Achieve.UnlockCharacter2:
           case Achieve.UnlockCharacter3:
               LockCharacter[(int)achieve].SetActive(!IsAchieved);
               UnlockCharacter[(int)achieve].SetActive(IsAchieved);
               break;
           default:
               break;
       }
   
   }
   
   void CheckAchieved(Achieve achieve)
   {
       bool IsAchieve = false;
   
       switch (achieve)
       {
           case Achieve.UnlockCharacter2:
   
               if (GameManager.Instance.Kill >= 10)
               {
                   IsAchieve = true;
               }
               break;
   
           case Achieve.UnlockCharacter3:
               if (GameManager.Instance.GameTime >= GameManager.Instance.MaxGameTime)
               {
                   IsAchieve = true;
               }
   
               break;
           default:
               break;
       }
   
       if (IsAchieve && PlayerPrefs.GetInt(achieve.ToString()) == 0)
       {
           PlayerPrefs.SetInt(achieve.ToString(), 1);
   
           for (int i = 0; i < Notice.transform.childCount; i++)
           {
               bool IsActive = i == (int)achieve;
               Notice.transform.GetChild(i).gameObject.SetActive(IsActive);
               
           }
   
           StartCoroutine(ShowNotice());
       }
   
   }
   
   IEnumerator ShowNotice() 
   {
       Notice.SetActive(true);
       AudioManager.instance.PlaySFX(AudioManager.SFX.LevelUp);
       yield return Wait;
   
       Notice.SetActive(false);
   }
```
Awake 함수 이후 Start 함수가 실행되며 해금된 업적들을 세팅합니다.
Achieves 배열 안에 각 Element를 UnlockAchieve의 함수 인자로 넣어 PlayerPrefs에 해당 enum의 Name으로 찾은 뒤, 값이 1인지 확인하여 1인 경우에 각 업적에 맞는 로직이 실행되도록 Switch/ Case 문을 사용하였습니다.

게임이 진행되는 동안에는 LateUpdate를 통해 매 프레임마다 새로 해금된 업적이 있는지 확인합니다.
Swith/Case문에서 해당 업적 해금 조건을 만족하였는 지 확인하고 만족하였다면 PlayerPrefs의 값이 변경되며, 해금 UI가 코루틴을 이용하여 잠시동안 활성화되었다가 다시 비활성화됩니다.

단, 이미 해금된 업적인 경우 값 변경 및 해금 UI가 출력되지 않도록 if문으로 예외처리 하였습니다.
</details>
      
### 3. AudioManager : 게임 BGM,SFX 관리

<details>
  <summary>코드설명</summary>
   
+ 초기화 및 설정

```cpp
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
```
GameManager와 동일하게 어느 곳에서나 호출하여 SFX, BGM을 실행할 수 있도록 Instance라는 정적 변수를 선언하였습니다.

BGM은 1개, 효과음은 다수의 AudioClip이 필요하므로 각각 변수 하나와 배열로 선언하였습니다.
AudioSource도 다수의 AudioClip에 대응될 수 있도록 배열로 선언하였습니다.

enum class를 사용하여 넣어줄 SFX의 순서와 이름을 부여하였으며, Init 함수에서 각 AudioSource Component를 갖는 GameObject를 생성합니다.
SFX AudioSource를 담을 SFXObject는 설정한 Channel 수 만큼의 AudioSource Component를 갖으며, BGM은 중간 레벨 업 UI 등장 시 소리의 변화를 주기 위해 Audio Listener가 있는 객체의 Audio High Pass Filter를 추가 및 BGMFilter 변수에 저장하였습니다.

+ BGM, SFX 재생 및 BGM에 Effects 추가
```cpp
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

```
BGM의 경우 Bool 값을 인자로 받아 Play 또는 Stop 하도록 하였으며, BGM의 Effects 역시 bool 값을 인자로 받아 해당 값을 Enabled에 넣도록 하였습니다.
SFX는 AudioSources 배열에서 현재 사용하지 않는 AudioSource를 찾아 해당 Source에 Clip을 넣고 재생하도록 하였습니다.

단, 현재 재생중인 Source의 다음 AudioSource부터 탐색하도록 Index를 별도로 저장하였으며 후에 탐색 시 반복문의 시작을 해당 인덱스부터 시작하도록 하여 불필요한 초기 탐색을 없앴습니다.
그리고 배열의 범위를 벗어나지 않도록 반복문의 초기치 + 인덱스 값을 배열 전체 크기로 나누었습니다.

Hit 또는 Melee와 같이 1개 이상의 효과음이 설정된 경우 Swith/case 문을 이용하여 (0 ~ 해당 효과음의 수) 사이 값을 더하여 랜덤한 효과음이 실행되도록 하였습니다.   
</details>


### 4. 캐릭터 : 조작, 타격, Animation

<details>
  <summary>코드설명</summary>
   
+ 캐릭터 조작(New Input System)
```cpp
      void OnMove(InputValue Value)
      {
          inputValue = Value.Get<Vector2>(); 
      }
   
       void FixedUpdate()
       {
           if (GameManager.Instance.IsPause)
               return;
   
           Vector2 NewVector2 = inputValue * Speed * Time.fixedDeltaTime;
           Rigid2D.MovePosition(Rigid2D.position + NewVector2);
       }
```
변수 InputValue를 통해 들어오는 값을 받아 Rigidbody2D의 MovePosition 함수를 이용하여 입력 받은 방향으로 Speed 만큼 움직이도록 구현.
   
fixedDeltatime을 곱해주어 성능에 상관없이 동일한 시간 동안 동일한 위치로 가도록 설정.
   
   
transform.Translate()는 물리 엔진의 영향을 받지 않아 Rigidbody가 있는 오브젝트에 사용 시 충돌 처리가 제대로 되지 않을 수 있으며, transform.position에 직접 넣는 경우도 동일하여 Rigidbody2D의 Moveposition 함수를 사용.
   
   
+ 캐릭터 Hit
```cpp
       private void OnCollisionStay2D(Collision2D collision)
       {
           if (GameManager.Instance.IsPause)
               return;
   
           if (collision.gameObject.CompareTag("Enemy"))
           {
               GameManager.Instance.Health -= Time.deltaTime * 10.0f;
   
               if (GameManager.Instance.Health <= 0)
               {
                   Transform[] transforms = GetComponentsInChildren<Transform>();
   
                   for (int i = 2; i < transform.childCount; i++)
                   {
                      transform.GetChild(i).gameObject.SetActive(false);
                   }
   
                   GameManager.Instance.GameOver();
                   Anim.SetTrigger("PlayerDead");
               }
           }
       }
```
부딪힌 gameobject의 Tag를 확인하여 Enemy인 경우 GameManager Script의 Health 변수의 값을 조정.
   
0이하로 떨어지는 경우 자식 Object를 가져와서 그림자, Area(이 Gameobject의 Box Collision에서 벗어나면 배경 및 오브젝트들이 이동함)를 제외한 Object의 Active를 모두 끄도록 함.
   
GameManager의 Gameover()함수를 호출하며 캐릭터 애니메이터의 트리거를 작동시켜 죽는 애니메이션이 나오도록 함.
   
   
+ 캐릭터 Animation
```cpp
       private void OnEnable()
       {
           Anim.runtimeAnimatorController = RuntimeAnimC[GameManager.Instance.PlayerID];
           Speed *= CharacterScript.Speed;
       }
```
RuntimeAnimatorController를 배열로 저장하고, 유저가 캐릭터를 선택할 때 해당 Button의 Bind된 OncLicked 함수를 통해 GameManager의 PlayerID 변수에 저장.
   
해당 변수값을 배열의 인덱스로 받아와 선택한 캐릭터가 나오도록 구현함.
</details>

### 5. 

<details>
  <summary>코드설명</summary>
</details>
