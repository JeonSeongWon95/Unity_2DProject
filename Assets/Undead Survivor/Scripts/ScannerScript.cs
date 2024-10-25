using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScannerScript : MonoBehaviour
{
    public Transform Target;
    public RaycastHit2D[] Targets;
    public float ScanRadius;
    public LayerMask TargetLayer;

    void FixedUpdate()
    {
        Targets = Physics2D.CircleCastAll(transform.position, ScanRadius, Vector2.zero, 0, TargetLayer);
        Target = FindNearEnemy();
    }

    Transform FindNearEnemy() 
    {
        Transform TargetTransform = null;
        float Distance = 9999;

        foreach(RaycastHit2D Result in Targets) 
        {
            float ResultDistance = Vector3.Distance(transform.position, Result.transform.position);

            if (ResultDistance < Distance)
            {
                Distance = ResultDistance;
                TargetTransform = Result.transform;
            }
        }

        return TargetTransform;

    }
}
