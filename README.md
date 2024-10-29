# 프로젝트개요
본 프로젝트는 유니티 엔진을 활용한 뱀파이어 서바이얼 모작입니다.

프로젝트 기간은 약 15일정도 소요되었으며, 모바일 타겟으로 빌드 및 실행까지 테스트 완료하였습니다.

개발 인원은 1인입니다.

[플레이 영상](https://youtu.be/ZRY83zVaT-g?si=Bk9w0vvdJv18PfyT, "Youtube")


# 구현한 기능

토글을 열어 **자세한 코드**를 확인하실 수 있습니다.


<details>
  <summary> Manager : GameManager, PoolManager, AchieveManager, AudioManager </summary>

### 1. GameManager : 게임 승리, 패배, 종료, 일시정지, 캐릭터의 상태(경험치, 체력, 레벨 등) 관리

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

### 2. PoolManager : 총알, 적, 근접무기 Object 활성화 및 비활성화 관리

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

### 3. AchieveManager : 업적 관리(캐릭터 해금) 

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

 ### 4. AudioManager : 게임 BGM,SFX 관리
   
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


<details>
  <summary> Character : Character, Enemy </summary>

### 1. 캐릭터 : 조작, 타격, Animation
   
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

+ 선택한 캐릭터에 따른 효과 반영
```cpp
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
```
Character Script의 변수들을 정적 변수로 선언하였으며 값을 내가 선택한 Character의 Id를 바탕으로 할당하였습니다.
그리고 이 정적 변수들을 Weapon Level up, Init 등과 같은 함수에 추가하여 캐릭터 변경에 따른 각기 다른 특성이 반영되도록했습니다.

### 2. Enemy : 움직임, 피격, 넉백, 사망

+ Enemy 움직임
```cpp
    public Rigidbody2D target;
    public float Speed;
    public float Health;
    public float MaxHealth;
    public RuntimeAnimatorController[] RunTimeAC;

    WaitForFixedUpdate wait;
    bool IsLive;
    Rigidbody2D Rigid;
    SpriteRenderer Sprite;
    Animator Anim;
    Collider2D Coll;

    void Awake()
    {
        Rigid = GetComponent<Rigidbody2D>();
        Sprite = GetComponent<SpriteRenderer>();
        Anim = GetComponent<Animator>();
        Coll = GetComponent<Collider2D>();
        wait = new WaitForFixedUpdate();
    }

    void SetTarget() 
    {
        target = GameManager.Instance.Player.gameObject.GetComponent<Rigidbody2D>();
    }

    void OnEnable()
    {
        SetTarget();
        IsLive = true;
        Health = MaxHealth;
        Coll.enabled = true;
        Rigid.simulated = true;
        Sprite.sortingOrder = 2;
        Anim.SetBool("Dead", false);
    }

    void FixedUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (!(IsLive) || Anim.GetCurrentAnimatorStateInfo(0).IsName("Hit"))
            return;

        Vector2 Direction = target.position - Rigid.position;
        Vector2 TargetLocation = Direction.normalized * Speed * Time.fixedDeltaTime;
        Rigid.MovePosition(Rigid.position + TargetLocation);
        Rigid.velocity = Vector2.zero;
    }
```
Enemy의 Awake 함수에서 필요한 Component들을 미리 할당합니다.
Enemy는 PoolManager의 오브젝트 풀링으로 관리가 되기 때문에 OnEnable에서 모든 값을 다시 초기화해줍니다.

SetTarget에서 GameManager에 저장된 Player 변수의 Rigidbody2D Component를 가져와서 저장합니다.
FixedUpdate()에서 저장한 Player Rigidbody2D의 Position와 Enemy Position을 이용하여 Player 방향의 벡터를 계산하고, 계산한 벡터를 단위 벡터로 변환 후 설정된 속도로 이동하도록 구현하였습니다.

+ Enemy Animation
```cpp
    public void Init(SpawnData NewData) 
    {
        Speed = NewData.Speed;
        MaxHealth = NewData.Health;
        Anim.runtimeAnimatorController = RunTimeAC[NewData.MonsterType];
    }

    private void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        if (!(IsLive))
            return;

        Sprite.flipX = target.position.x < Rigid.position.x;
    }
```
Enemy의 Animation은 RunTimeAnimatorController를 배열로 저장하고 있으며, Spawn 시 전달 받는 Data를 이용하여 Controller를 할당합니다.
Sprite의 좌우 반전은 LateUpdate에서 일전에 할당한 Player의 Rigidbody2D의 Position.x를 이용하여 Enemy의 Position.X와 비교 및 그 결과 값을 flipX에 할당하도록 하였습니다.

+ Enemy Hit && Knokback && Dead
```cpp
    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (!collision.CompareTag("Bullet") || !IsLive)
            return;

        Health -= collision.gameObject.GetComponent<BulletScript>().Damage;

        StartCoroutine(Knockback());

        if (Health <= 0.0f)
        {
            IsLive = false;
            Coll.enabled = false;
            Rigid.simulated = false;
            Sprite.sortingOrder = 1;
            Anim.SetBool("Dead", true);
            GameManager.Instance.Kill++;
            GameManager.Instance.AddExp();

            if (!GameManager.Instance.IsPause)
            {
                AudioManager.instance.PlaySFX(AudioManager.SFX.Dead);
            }
        }
        else 
        {
            Anim.SetTrigger("Hit");
            AudioManager.instance.PlaySFX(AudioManager.SFX.Hit);
        }
    }

    IEnumerator Knockback() 
    {
        yield return wait;
        Vector3 PlayerPosition = GameManager.Instance.Player.transform.position;
        Vector3 Dir = transform.position - PlayerPosition;
        Rigid.AddForce(Dir.normalized * 5, ForceMode2D.Impulse);
    }

    void DoDeath() 
    {
        gameObject.SetActive(false);
    }

```
Enemy의 Collision과 Trigger 된 Collision의 gameobject의 Tag를 if문을 통해 확인하여 Bullet인 경우 Damage만큼 Enemy의 Health가 감소하도록 하였습니다.
피격 후 넉백이 되도록 코루틴를 이용하여 넉백 함수를 호출하였으며, 넉백 함수에서는 플레이어의 position과 enemy의 position을 이용하여 바라보는 반대 방향의 벡터를 계산하고 이를 단위 벡터로 변경 및 Add Force를 통해 힘을 추가하였습니다.

만약 enemy의 Health가 0보다 작거나 같아지는 경우 변수와 각 Component를 비활성화하고 GamaManager Kill 변수와 Add Exp 함수를 호출하였습니다.

Animator의 Dead 변수도 True로 변경하여 Animation을 실행하였으며 Dead Animation이 끝나는 지점에서 DoDeath함수를 호출하여 애니메이션이 끝나고 Enemy가 비활성화되도록 하였습니다. 

</details>

<details>
  <summary> Item : Item Data, Item Level Up, Item 별 작동 로직 </summary>

### 1. Item Level System : 아이템 데이터, 아이템 레벨 업, 아이템 별 작동 로직

+ 아이템 데이터
```cpp
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
```
Item Data는 쉽게 관리하고 작성할 수 있도록 ScriptableObject로 구현하였으며, Editor 상에서 생성할 수 있도록 CreateAssetMenu 속성을 부여하였습니다.
Item은 타입(근접, 원거리, 장비, 소비성), Item ID(), Item Icon(UI 표시용), Item Name, Item Desc(Item Level Up 시 설명)인 메인 info와 데미지, 갯수(또는 관통력), Weapon의 실제 객체인 Projectile, 장착 시 손 모양인 HandSprite를 갖도록 하였습니다.

+ 아이템 Level Up(ItemButton Script)
```cpp
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
```
앞서 설정한 Item Data를 갖고 있는 UI(Button, Image, Text)를 갖는 GameObject를 하나 추가하였습니다.
Awake에서 본인이 가지고 있는 Item Data를 바탕으로 UI에 Image, Tex를 설정합니다.
  
```cpp
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
```
캐릭터가 레벨 업을 하면 이 GameObject의 Active가 true가 되며, OnEnable 함수가 호출됩니다.
각각 본인의 Item Data를 바탕으로 Level Up 시 어떻게 달라지는 지 Text로 나오며, Button을 누르면 OnClicked 함수가 호출됩니다.

OnClicked 함수에서 Item Data의 Type을 Switch/case문으로 Data에 따른 Player에서 무기를 추가해주는 Init 또는 기존에 있는 무기를 업그레이드 해주는 Level Up 함수가 실행됩니다.
또한 Button의 본인 Parent의 Active를 false로 바꾸도록 Editor 상에서 Button Event에 추가하였습니다.

+ Item 레벨 업(Level Up Script)
```cpp
      RectTransform RectTr;
      ItemButtonScript[] ItemButtons;

    void Awake()
    {
        RectTr = GetComponent<RectTransform>();
        ItemButtons = GetComponentsInChildren<ItemButtonScript>(true);
    }
```
Level Up Script에서는 각 Item Data를 담은 Item Button Script를 모두 가져옵니다.

```cpp
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
```
Player가 Level Up을 하면 Open 함수를 통해 선택할 수 있는 선택 UI가 나오며, GameManager의 Pasue 함수가 호출되어 게임이 일시정지되고 Effect 효과를 통해 배경음의 특정 주파수를 차단하여 배경음의 변화를 주었습니다.

Button을 누르면 Close 함수가 호출되며 GameManager의 Resume 함수로 다시 TimeScale을 1로 변화시켜 게임이 다시 실행되며, Effect도 false로 하여 배경음을 되돌립니다.
또한, 누른 Button이 가지고 있는 Item Data를 바탕으로 앞선 무기 레벨 업 코드가 동작합니다.

```cpp
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
```

Open함수에서 ChoseItems을 통해 모든 버튼 중 최소 1개 이상의 선택 가능한 아이템을 선택하도록 하였습니다.
우선 모든 선택 UI를 비활성화하고 더 이상 레벨을 올릴 수 없는 Item의 수를 확인합니다.

만약 더 이상 레벨을 올릴 수 없는 아이템밖에 남지 않았다면 아이템 선택 UI는 나오지 않도록 false를 return합니다.
마스터 레벨이 아닌 아이템이 3개 이상이라면 3개, 3개미만 1개 이상이라면 그 만큼의 아이템 선택 UI만 Active를 활성화합니다.

Active를 활성화할 아이템 선택 UI는 while문을 돌며 중복되지 않도록 선별합니다.
선택된 아이템 UI 배열에 포함되지 않고, 해당 레벨이 만렙이 아닌 경우에만 선택된 아이템 UI 배열(ItemButtons)에 추가하도록 하였습니다.

### 2. Weapon : Weapon Level Up, Weapon 별 동작

+ 무기 생성 또는 레벨 업(Weapon Script)
```cpp
    public int Id;
    public int PrefabsId;
    public int Count;
    public float Damage;
    public float Speed;

    float Timer;
    PlayerScript Player;

    void Awake()
    {
        Player = GameManager.Instance.Player;
    }

    public void Init(ItemDataScriptableObject Data)
    {
        name = "Weapon " + Data.ItemId;
        transform.parent = Player.transform;
        transform.localPosition = Vector3.zero;

        Id = Data.ItemId;
        Damage = Data.BaseDamage * CharacterScript.Damage;
        Count = Data.BaseCount + CharacterScript.Count;

        for (int i = 0; i < GameManager.Instance.Pool.Prefabs.Length; i++)
        {
            if(Data.Projectile == GameManager.Instance.Pool.Prefabs[i]) 
            {
                PrefabsId = i;
                break;
            }
        }

        switch (Id) 
        {
            case 0:
                Speed = 150 * CharacterScript.WeaponRate;
                Batch();
                break;
            case 1:
                Speed = 0.5f * CharacterScript.WeaponSpeed;
                break;
            default:
                break;
        }

        HandScript Hand = Player.GetComponentsInChildren<HandScript>(true)[(int)Data.Type];
        Hand.gameObject.SetActive(true);
        Hand.Sprite.sprite = Data.HandSprite;

        Player.BroadcastMessage("ApplyGear",SendMessageOptions.DontRequireReceiver);
    }
```
Item Button Script에서 선택한 Button의 Item Data Type이 melee 또는 Range인 경우 WeaponScript 내 함수를 호출합니다.
Weapon의 Level이 0인 경우 -> Init 함수를 호출합니다.

Button의 Item Data를 인자로 받아와 Name, 계층, 상대 좌표값, Id, Damage, Count를 설정합니다.
GameManager가 가지고 있는 Pool Component(PoolManager의 Component)의 Prefabs 배열을 순회하며 오브젝트 풀링 사용을 위한 Prefab을 찾습니다.
찾은 인덱스를 본인의 PrefabsID로 저장하며 Player가 가지고 있는 HandScript들 중에서 본인 Type에 맞는 Script를 활성화하고 sprite에 Item의 장착 시 손 Sprite를 넣도록 하였습니다.

그리고 Item의 ID에 따른 각각의 로직을 수행하도록 switch/case문을 사용하였습니다.(Batch함수)

Player.BroadcastMessage는 데미지 10% 증가, 관통 또는 갯수 1 추가와 같은 방어구 옵션을 반영하는 함수로 SendMessageOptions.DontRequireReceiver 옵션을 통해 굳이 받을 객체가 없어도 상관없도록 하였으며,
새로운 무기가 생기거나(Init), 무기 Level이 오르는 경우 다시 계산하도록 호출하였습니다.

```cpp
      void Update()
    {
        if (GameManager.Instance.IsPause)
            return;

        switch (Id)
        {
            case 0:
                transform.Rotate(Vector3.back * Speed * Time.deltaTime);
                break;

            case 1:

                Timer += Time.deltaTime;

                if(Timer > Speed) 
                {
                    Timer = 0;
                    Fire();
                }

                break;
            default:
                break;
        }
    }

      void Batch() 
    {
        for (int i = 0; i < Count; i++)
        {
            Transform SeletedTransform;

            if (i  < transform.childCount) 
            {
                SeletedTransform = transform.GetChild(i);
            }
            else 
            {
                SeletedTransform = GameManager.Instance.Pool.GetPoolsData(PrefabsId).transform;
                SeletedTransform.parent = transform;
            }

            SeletedTransform.localPosition = Vector3.zero;
            SeletedTransform.localRotation = Quaternion.identity;

            SeletedTransform.Rotate(Vector3.forward * 360 * i / Count);
            SeletedTransform.Translate(SeletedTransform.up * 1.5f, Space.World);
            SeletedTransform.GetComponent<BulletScript>().Init(Damage, -100);
        }

    }

    void Fire() 
    {
        if (Player.Scan.Target == null)
            return;

        Vector3 Dir = Player.Scan.Target.position - transform.position;
        Dir = Dir.normalized;

        Transform SeletedTransform = GameManager.Instance.Pool.GetPoolsData(PrefabsId).transform;
        SeletedTransform.position = transform.position;
        SeletedTransform.rotation = Quaternion.FromToRotation(Vector3.up, Dir);
        SeletedTransform.GetComponent<BulletScript>().Init(Damage, Count, Dir);

        AudioManager.instance.PlaySFX(AudioManager.SFX.Range);
    }
```
원거리 무기의 경우 Update 함수에서 앞서 설정한 Speed값을 바탕으로 Fire() 함수가 호출되도록 하였습니다.
우선 Pools에 있는 총알에 해당하는 List에서 객체 하나를 활성화하여 반환해주는 GetPoolsData 함수를 통해 총알 객체를 가져오도록 하였습니다.
Player의 Scan Object(콜리전)에서 범위 내 가장 가까운 적을 Target으로 설정합니다. 이 값을 가져와 Fire에서 해당 Target과 본인의 Postion을 계산하여 적 방향의 벡터를 계산하였습니다.
계산된 벡터는 방향만 필요하므로 단위 벡터로 만들고, 해당 벡터로 회전(Quaternion.FromToRotation)한 뒤 Bullet Script의 목표 방향으로 설정하였습니다.

근거리 무기는 Batch 함수를 통해 Player 주변에 배치되도록 구현하였습니다.
Batch 시 기존에 이미 근접 무기 2개가 있는 경우 2개를 포함하여 다시 배치를 해야하므로, 우선 자녀 transform을 받아오도록 하였습니다.
없는 경우 원거리 무기와 마찬가지로 Pools에 있는 근접 무기에 해당하는 List배열에서 객체 하나를 활성화 및 받아오도록 하였습니다.

상대 좌표와 회전을 Zero로 초기화한 뒤 360도를 배치할 근접 무기 수로 나누어 균등한 위치에 배치되도록 각도를 계산한 뒤 회전하였습니다.
회전한 객체는 본인 기준(상대 좌표) Up Vector로 위치 값을 조정하여 Player 근처에 위치시켰습니다.

근접 무기의 경우 Update 함수 내 Switch 문을 통해 확인하여 계속 회전하도록 추가하였습니다. 

+ 무기의 충돌 판정(Bullet Script)
```cpp
    public float Damage;
    public int Per;

    Rigidbody2D Rigid;

    private void Awake()
    {
        Rigid = GetComponent<Rigidbody2D>();
    }

    public void Init(float NewDamage, int NewPer, Vector3 Dir = default)
    {
        this.Damage = NewDamage;
        this.Per = NewPer;

        if(Per >= 0) 
        {
            Rigid.velocity = Dir * 15f;
        }
    }

    void OnTriggerEnter2D(Collider2D collision)
    {

        if (Per == -100 || !collision.CompareTag("Enemy"))
            return;

        Per--;

        if(Per >= -1) 
        {
            Rigid.velocity = Vector3.zero;
            gameObject.SetActive(false);
        }
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        if (!collision.CompareTag("Area") || Per == -100)
            return;

        gameObject.SetActive(false);
    }

```
Bullet Script에서는 Per(관통력)이 -100인 경우(근접 무기)와 아닌 경우(원거리 무기)에 따라 if문을 통해 로직을 바꿔주었습니다.
Init 함수에서 Per값을 받아와 해당 무기가 원거리인지 아닌지를 판단하고 원거리인 경우 전달 받은 Dir값을 Rigidbody의 Velocity로 속도와 같이 설정해주었습니다.

TriggerEnter2D를 통해 겹쳐진 객체와의 상호작용을 추가하였으며, 원거리 무기의 경우 관통력을 감소 시키고 관통력이 -1까지 떨어지는 경우 사라지도록 하였습니다.
캐릭터의 Area Collision의 밖으로 나가버리는 경우에도 사라지도록 하여 총알이 계속해서 나아가지 않도록 하였습니다.

### 3. Gear : 장비 아이템 로직

+ 장비 아이템 효과
```cpp
    public ItemDataScriptableObject.ItemType Type;
    public float Rate;

    public void Init(ItemDataScriptableObject Data)
    {
        name = "Weapon " + Data.ItemId;
        transform.parent = GameManager.Instance.Player.transform;
        transform.localScale = Vector3.zero;

        Type = Data.Type;
        Rate = Data.Damages[0];

        ApplyGear();
    }

    public void LevelUp(float NewRate)
    {
        Rate = NewRate;
        ApplyGear();
    }
```
장비 아이템은 무기와 마찬가지로 선택 시 Level이 0인 경우 Init, 이미 가지고 있었던 경우 Level Up 함수를 호출합니다.
Init에서는 전달 받은 Item Data를 통해 기본 값을 설정하며, Item Scriptable Object에서 Damage 항목을 Rate로 사용하였습니다.

```cpp
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
                    float Speed = 150 * CharacterScript.WeaponRate;
                    Weapons[i].Speed = Speed + (Speed * Rate);
                    break;

                case 1:
                    Speed = 0.5f * CharacterScript.WeaponSpeed;
                    Weapons[i].Speed = Speed * (1.0f - Rate);
                    break;
                default:
                    break;

            }
        }

    }

    void SpeedUp()
    {
        float Speed = 3.0f * CharacterScript.Speed;
        GameManager.Instance.Player.Speed = Speed + (Speed * Rate);
    }
```
ApplyGear 함수에서 장비의 타입 값에 따라 Player의 이동속도를 올리거나, Weapon의 Speed를 증가시킵니다.
Weapon Speed를 올리는 경우 Player가 가지고 있는 모든 Weapon을 가지고와 각 Weapon의 타입에 따라 회전 값을 올리거나 발사 속도를 증가시키도록 하였습니다. 
Player의 Speed는 GamaManager에서 갖고 있는 Player 변수에 접근하여 Speed 값에 추가하였습니다.

또한, 무기 Init 및 Level Up과 같은 항목에서 BrodCast를 통해 호출되어 값이 반영되도록 구현하였습니다.

</details>


<details>
  <summary> HUD :  Time, Kill Count, Health bar, Level </summary>

### 1. Main HUD : 게임 시간, 킬수, 레벨 및 체력 바 구현

+ 초기화 및 설정
```cpp

    public enum HUDType
    {
        Exp,
        Level,
        Time,
        Kill,
        Health
    }

    public HUDType Type;
    Text HUDText;
    Slider HUDSlider;

    void Awake()
    {
        HUDText = GetComponent<Text>();
        HUDSlider = GetComponent<Slider>();
    }

```

enum class를 통해 본인이 어떤 UI인지 Type 변수를 통해 저장합니다.
Awake 함수에서 Text와 Silder가 있는 경우 각각 변수로 저장하였습니다.

+ UI 업데이트
```cpp

   void LateUpdate()
   {
       if (GameManager.Instance.IsPause)
           return;

       switch (Type)
       {
           case HUDType.Exp:
               float PresentExp = GameManager.Instance.Exp;
               float NextExp = GameManager.Instance.NextExp[Mathf.Clamp(GameManager.Instance.Level, 0
                   , GameManager.Instance.NextExp.Length -1)];
               HUDSlider.value = PresentExp / NextExp;
               break;

           case HUDType.Level:
               HUDText.text = string.Format("Lv.{0:F0}",GameManager.Instance.Level);
               break;

           case HUDType.Time:
               int min = Mathf.FloorToInt(GameManager.Instance.GameTime / 60);
               int sec = Mathf.FloorToInt(GameManager.Instance.GameTime % 60);
               HUDText.text = string.Format("{0:D2}:{1:D2}", min, sec);
               break;

           case HUDType.Kill:
               HUDText.text = string.Format("{0:F0}", GameManager.Instance.Kill);
               break;

           case HUDType.Health:
               float PresentHealth = GameManager.Instance.Health;
               float MaxHealth = GameManager.Instance.MaxHealth;
               HUDSlider.value = PresentHealth / MaxHealth;
               break;
           default:
               break;
       }
   }

```
각각 본인의 Type에 맞게 LateUpdate에서 로직이 실행됩니다.
Exp의 경우 GameManager의 Exp와 NextExp[]을 통해서 계산하며 Level이 범위를 벗어나지 않도록 Mathf의 Clamp 함수를 이용하여 값을 제한하였습니다.

Level과 Kill의 경우 GameManager의 변수를 Text에 추가하였으며, 숫자를 String으로 변환해주는 string.Format함수를 사용하였습니다.
time은 GameManager의 GameTime을 60으로 나누고 나눈 나머지 값을 이용하여 출력하였으며 Health bar는 현재 체력을 전체 체력기준으로 나누어 % 계산해서 출력하였습니다.

+ Health Bar
```cpp
public class FollwPlayerScript : MonoBehaviour
{
    RectTransform RectTr;

    void Awake()
    {
        RectTr = GetComponent<RectTransform>();
    }

    void LateUpdate()
    {
        if (GameManager.Instance.IsPause)
            return;

        RectTr.position = Camera.main.WorldToScreenPoint(GameManager.Instance.Player.transform.position);   
    }
}
```
Healt bar는 Player를 계속해서 따라다니도록 별도의 Script를 만들어 추가하였습니다.
RectTrsnform을 LateUpdate에서 Player의 Position을 가져와 Screen Space로 변환하여 업데이트 하였습니다.
</details>

