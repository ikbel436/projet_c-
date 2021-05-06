import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6
Rectangle {
    property double oldlat: 25.6585
    property double oldlng: 100.3658
    Plugin{
        id: mapPLugin
        name: "osm"
    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPLugin
        center: QTPositioning.coordinate(oldlat, oldlng);
        zoomLevel: 15
        property MapCircle  circle

    }
    function setCenter(lat,lng ){
        mapView.pan(oldlat-lat , oldlng-lng )
        oldlat= lat
        oldlng= lng
    }

}
