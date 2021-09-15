using com.Neogoma.Stardust.API.Relocation;
using UnityEngine;

public class LocalContentRelocation : MonoBehaviour
{
    public string uuid;

    public void Relocate()
    {
        MapRelocationManager.Instance.LocateCurrentPosition(uuid);
    }
}
