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
        if (!(collision.CompareTag("Area")))
            return;

        Vector3 PlayerPosition = GameManager.Instance.Player.transform.position;
        Vector3 GroundPosition = transform.position;

        float DistanceX = Mathf.Abs(PlayerPosition.x - GroundPosition.x);
        float DistanceY = Mathf.Abs(PlayerPosition.y - GroundPosition.y);

        Vector3 PlayerDirection = GameManager.Instance.Player.inputValue;
        float DirectionX = PlayerDirection.x < 0 ? -1 : 1;
        float DirectionY = PlayerDirection.y < 0 ? -1 : 1;

        switch (transform.tag) 
        {
            case "Ground":
                if(DistanceX > DistanceY) 
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
                    transform.Translate(PlayerDirection * 20 + 
                        new Vector3(Random.Range(-3.0f, 3.0f), Random.Range(-3.0f, 3.0f), 0));
                }
                break;
            default:
                break;
        }
    }
}
