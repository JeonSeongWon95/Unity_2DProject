using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class RepositionScript : MonoBehaviour
{
    Collider2D co2D;

    private void Awake()
    {
        co2D = GetComponent<Collider2D>();
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (GameManager.Instance.IsPause)
            return;

        if (!(collision.CompareTag("Area")))
            return;

        Vector3 PlayerPosition = GameManager.Instance.Player.transform.position;
        Vector3 GroundPosition = transform.position;

        switch (transform.tag) 
        {
            case "Ground":
                float DistanceX = PlayerPosition.x - GroundPosition.x;
                float DistanceY = PlayerPosition.y - GroundPosition.y;
                float DirectionX = DistanceX < 0 ? -1 : 1;
                float DirectionY = DistanceY < 0 ? -1 : 1;

                DistanceX = Mathf.Abs(DistanceX);
                DistanceY = Mathf.Abs(DistanceY);

                if (DistanceX > DistanceY) 
                {
                    transform.Translate(Vector3.right * DirectionX * 40);
                }
                else if(DistanceX < DistanceY) 
                {
                    transform.Translate(Vector3.up * DirectionY * 40);
                }
                break;

            case "Enemy":
                if (co2D.enabled) 
                {
                    Vector3 NewPosition = PlayerPosition - GroundPosition;
                    Vector3 RandomPosition = new Vector3(Random.Range(-3, 3), Random.Range(-3, 3), 0);

                    transform.Translate(RandomPosition + (NewPosition * 2));
                }
                break;
            default:
                break;
        }
    }
}
