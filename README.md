# 프로젝트개요
본 프로젝트는 유니티 엔진을 활용한 뱀파이어 서바이얼 모작입니다.

프로젝트 기간은 약 15일정도 소요되었으며, 모바일 타겟으로 빌드 및 실행까지 테스트 완료하였습니다.

개발 인원은 1인입니다.

# 구현한 기능
### 1. 캐릭터


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
