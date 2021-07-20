using com.Neogoma.Stardust.API.Relocation;
using com.Neogoma.Stardust.Datamodel;
using System;
using UnityEngine;

public class RelocationExample : MonoBehaviour
{
    public string id;

    public GameObject locateButton;

    // Start is called before the first frame update
    void Start()
    {
        //Safety here, make sure the button is not enabled until the map download is done
        locateButton.SetActive(false);

        //Adding the listener
        MapRelocationManager.Instance.onMapDownloadedSucessfully.AddListener(MapDownloaded);

        //Start downloading the map
        MapRelocationManager.Instance.GetDataForMap(id);

        MapRelocationManager.Instance.onPositionFound.AddListener(Tester);
    }

    private void Tester(RelocationResults arg0, CoordinateSystem arg1)
    {
        Debug.Log(arg0);
    }

    private void MapDownloaded(Session session, GameObject map)
    {
        //The map is downloaded we can relocate now
        locateButton.SetActive(true);
    }
}
