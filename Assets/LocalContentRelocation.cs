using com.Neogoma.Stardust.API.Relocation;
using com.Neogoma.Stardust.Datamodel;
using System;
using UnityEngine;

public class LocalContentRelocation : MonoBehaviour
{
    public string uuid;

    public void Start()
    {
        MapRelocationManager.Instance.onPositionFound.AddListener(PositionFound);
    }

    private void PositionFound(RelocationResults arg0, CoordinateSystem arg1)
    {
        Debug.Log("POSITION FOUND");
    }

    public void Relocate()
    {
        MapRelocationManager.Instance.LocateCurrentPosition(uuid);
    }
}
