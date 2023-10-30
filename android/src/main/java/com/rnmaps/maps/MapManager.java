package com.rnmaps.maps;

import android.view.View;

import androidx.annotation.Nullable;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.MapBuilder;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.annotations.ReactProp;
import com.facebook.react.uimanager.events.RCTEventEmitter;
import com.google.android.gms.location.Priority;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.GoogleMapOptions;

import java.util.Map;

public class MapManager extends ViewGroupManager<MapView> {

  private static final String REACT_CLASS = "RNMMap";

  private final Map<String, Integer> MAP_TYPES = MapBuilder.of(
      "standard", GoogleMap.MAP_TYPE_NORMAL,
      "satellite", GoogleMap.MAP_TYPE_SATELLITE,
      "hybrid", GoogleMap.MAP_TYPE_HYBRID,
      "terrain", GoogleMap.MAP_TYPE_TERRAIN,
      "none", GoogleMap.MAP_TYPE_NONE
  );

  private final Map<String, Integer> MY_LOCATION_PRIORITY = MapBuilder.of(
          "balanced", Priority.PRIORITY_BALANCED_POWER_ACCURACY,
          "high", Priority.PRIORITY_HIGH_ACCURACY,
          "low", Priority.PRIORITY_LOW_POWER,
          "passive", Priority.PRIORITY_PASSIVE
  );

  private final ReactApplicationContext appContext;
  private MapMarkerManager markerManager;

  protected GoogleMapOptions googleMapOptions;

  public MapManager(ReactApplicationContext context) {
    this.appContext = context;
    this.googleMapOptions = new GoogleMapOptions();
  }

  public MapMarkerManager getMarkerManager() {
    return this.markerManager;
  }
  public void setMarkerManager(MapMarkerManager markerManager) {
    this.markerManager = markerManager;
  }

  @Override
  public String getName() {
    return REACT_CLASS;
  }

  @Override
  protected MapView createViewInstance(ThemedReactContext context) {
    return new MapView(context, this.appContext, this, googleMapOptions);
  }

  private void emitMapError(ThemedReactContext context, String message, String type) {
    WritableMap error = Arguments.createMap();
    error.putString("message", message);
    error.putString("type", type);

    context
        .getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)
        .emit("onError", error);
  }

  @ReactProp(name = "region")
  public void setRegion(MapView view, ReadableMap region) {
    view.setRegion(region);
  }

  @ReactProp(name = "initialRegion")
  public void setInitialRegion(MapView view, ReadableMap initialRegion) {
    view.setInitialRegion(initialRegion);
  }

  @ReactProp(name = "camera")
  public void setCamera(MapView view, ReadableMap camera) {
    view.setCamera(camera);
  }

  @ReactProp(name = "initialCamera")
  public void setInitialCamera(MapView view, ReadableMap initialCamera) {
    view.setInitialCamera(initialCamera);
  }

  @ReactProp(name = "mapType")
  public void setMapType(MapView view, @Nullable String mapType) {
    int typeId = MAP_TYPES.get(mapType);
    view.map.setMapType(typeId);
  }

  @ReactProp(name = "customMapStyleString")
  public void setMapStyle(MapView view, @Nullable String customMapStyleString) {
    view.setMapStyle(customMapStyleString);
  }

  @ReactProp(name = "mapPadding")
  public void setMapPadding(MapView view, @Nullable ReadableMap padding) {
    int left = 0;
    int top = 0;
    int right = 0;
    int bottom = 0;
    double density = (double) view.getResources().getDisplayMetrics().density;

    if (padding != null) {
      if (padding.hasKey("left")) {
        left = (int) (padding.getDouble("left") * density);
      }

      if (padding.hasKey("top")) {
        top = (int) (padding.getDouble("top") * density);
      }

      if (padding.hasKey("right")) {
        right = (int) (padding.getDouble("right") * density);
      }

      if (padding.hasKey("bottom")) {
        bottom = (int) (padding.getDouble("bottom") * density);
      }
    }

    view.applyBaseMapPadding(left, top, right, bottom);
    view.map.setPadding(left, top, right, bottom);
  }

  @ReactProp(name = "showsUserLocation", defaultBoolean = false)
  public void setShowsUserLocation(MapView view, boolean showUserLocation) {
    view.setShowsUserLocation(showUserLocation);
  }

  @ReactProp(name = "userLocationPriority")
  public void setUserLocationPriority(MapView view, @Nullable String accuracy) {
    view.setUserLocationPriority(MY_LOCATION_PRIORITY.get(accuracy));
  }

  @ReactProp(name = "userLocationUpdateInterval", defaultInt = 5000)
  public void setUserLocationUpdateInterval(MapView view, int updateInterval) {
    view.setUserLocationUpdateInterval(updateInterval);
  }

  @ReactProp(name = "userLocationFastestInterval", defaultInt = 5000)
  public void setUserLocationFastestInterval(MapView view, int fastestInterval) {
    view.setUserLocationFastestInterval(fastestInterval);
  }

  @ReactProp(name = "showsMyLocationButton", defaultBoolean = true)
  public void setShowsMyLocationButton(MapView view, boolean showMyLocationButton) {
    view.setShowsMyLocationButton(showMyLocationButton);
  }

  @ReactProp(name = "toolbarEnabled", defaultBoolean = true)
  public void setToolbarEnabled(MapView view, boolean toolbarEnabled) {
    view.setToolbarEnabled(toolbarEnabled);
  }

  // This is a private prop to improve performance of panDrag by disabling it when the callback
  // is not set
  @ReactProp(name = "handlePanDrag", defaultBoolean = false)
  public void setHandlePanDrag(MapView view, boolean handlePanDrag) {
    view.setHandlePanDrag(handlePanDrag);
  }

  @ReactProp(name = "showsTraffic", defaultBoolean = false)
  public void setShowTraffic(MapView view, boolean showTraffic) {
    view.map.setTrafficEnabled(showTraffic);
  }

  @ReactProp(name = "showsBuildings", defaultBoolean = false)
  public void setShowBuildings(MapView view, boolean showBuildings) {
    view.map.setBuildingsEnabled(showBuildings);
  }

  @ReactProp(name = "showsIndoors", defaultBoolean = false)
  public void setShowIndoors(MapView view, boolean showIndoors) {
    view.map.setIndoorEnabled(showIndoors);
  }

  @ReactProp(name = "showsIndoorLevelPicker", defaultBoolean = false)
  public void setShowsIndoorLevelPicker(MapView view, boolean showsIndoorLevelPicker) {
    view.map.getUiSettings().setIndoorLevelPickerEnabled(showsIndoorLevelPicker);
  }

  @ReactProp(name = "showsCompass", defaultBoolean = false)
  public void setShowsCompass(MapView view, boolean showsCompass) {
    view.map.getUiSettings().setCompassEnabled(showsCompass);
  }

  @ReactProp(name = "scrollEnabled", defaultBoolean = false)
  public void setScrollEnabled(MapView view, boolean scrollEnabled) {
    view.map.getUiSettings().setScrollGesturesEnabled(scrollEnabled);
  }

  @ReactProp(name = "zoomEnabled", defaultBoolean = false)
  public void setZoomEnabled(MapView view, boolean zoomEnabled) {
    view.map.getUiSettings().setZoomGesturesEnabled(zoomEnabled);
  }

  @ReactProp(name = "zoomControlEnabled", defaultBoolean = true)
  public void setZoomControlEnabled(MapView view, boolean zoomControlEnabled) {
    view.map.getUiSettings().setZoomControlsEnabled(zoomControlEnabled);
  }

  @ReactProp(name = "rotateEnabled", defaultBoolean = false)
  public void setRotateEnabled(MapView view, boolean rotateEnabled) {
    view.map.getUiSettings().setRotateGesturesEnabled(rotateEnabled);
  }

  @ReactProp(name = "scrollDuringRotateOrZoomEnabled", defaultBoolean = true)
  public void setScrollDuringRotateOrZoomEnabled(MapView view, boolean scrollDuringRotateOrZoomEnabled) {
    view.map.getUiSettings().setScrollGesturesEnabledDuringRotateOrZoom(scrollDuringRotateOrZoomEnabled);
  }

  @ReactProp(name = "cacheEnabled", defaultBoolean = false)
  public void setCacheEnabled(MapView view, boolean cacheEnabled) {
    view.setCacheEnabled(cacheEnabled);
  }

  @ReactProp(name = "moveOnMarkerPress", defaultBoolean = true)
  public void setMoveOnMarkerPress(MapView view, boolean moveOnPress) {
    view.setMoveOnMarkerPress(moveOnPress);
  }

  @ReactProp(name = "pitchEnabled", defaultBoolean = false)
  public void setPitchEnabled(MapView view, boolean pitchEnabled) {
    view.map.getUiSettings().setTiltGesturesEnabled(pitchEnabled);
  }

  @ReactProp(name = "minZoomLevel")
  public void setMinZoomLevel(MapView view, float minZoomLevel) {
    view.map.setMinZoomPreference(minZoomLevel);
  }

  @ReactProp(name = "maxZoomLevel")
  public void setMaxZoomLevel(MapView view, float maxZoomLevel) {
    view.map.setMaxZoomPreference(maxZoomLevel);
  }

  @ReactProp(name = "kmlSrc")
  public void setKmlSrc(MapView view, String kmlUrl) {
    if (kmlUrl != null) {
      view.setKmlSrc(kmlUrl);
    }
  }

  @ReactProp(name = "boundary")
  public void setBoundary(MapView view, ReadableMap boundary) {
    view.setBoundary(boundary);
  }

  @ReactProp(name = "indoorActiveLevelIndex")
  public void setIndoorActiveLevelIndex(MapView view, int index) {
    view.setIndoorActiveLevelIndex(index);
  }

  @Override
  @Nullable
  public Map getExportedCustomDirectEventTypeConstants() {
    Map<String, Map<String, String>> map = MapBuilder.of(
        "onMapReady", MapBuilder.of("registrationName", "onMapReady"),
        "onPress", MapBuilder.of("registrationName", "onPress"),
        "onLongPress", MapBuilder.of("registrationName", "onLongPress"),
        "onMarkerPress", MapBuilder.of("registrationName", "onMarkerPress"),
        "onMarkerSelect", MapBuilder.of("registrationName", "onMarkerSelect"),
        "onMarkerDeselect", MapBuilder.of("registrationName", "onMarkerDeselect"),
        "onCalloutPress", MapBuilder.of("registrationName", "onCalloutPress")
    );

    map.putAll(MapBuilder.of(
        "onUserLocationChange", MapBuilder.of("registrationName", "onUserLocationChange"),
        "onMarkerDragStart", MapBuilder.of("registrationName", "onMarkerDragStart"),
        "onMarkerDrag", MapBuilder.of("registrationName", "onMarkerDrag"),
        "onMarkerDragEnd", MapBuilder.of("registrationName", "onMarkerDragEnd"),
        "onPanDrag", MapBuilder.of("registrationName", "onPanDrag"),
        "onKmlReady", MapBuilder.of("registrationName", "onKmlReady"),
        "onPoiClick", MapBuilder.of("registrationName", "onPoiClick")
    ));

    map.putAll(MapBuilder.of(
        "onIndoorLevelActivated", MapBuilder.of("registrationName", "onIndoorLevelActivated"),
        "onIndoorBuildingFocused", MapBuilder.of("registrationName", "onIndoorBuildingFocused"),
        "onDoublePress", MapBuilder.of("registrationName", "onDoublePress"),
        "onTilesRendered", MapBuilder.of("registrationName", "onTilesRendered")
    ));

    return map;
  }

  @Override
  public LayoutShadowNode createShadowNodeInstance() {
    // A custom shadow node is needed in order to pass back the width/height of the map to the
    // view manager so that it can start applying camera moves with bounds.
    return new SizeReportingShadowNode();
  }

  @Override
  public void addView(MapView parent, View child, int index) {
    parent.addFeature(child, index);
  }

  @Override
  public int getChildCount(MapView view) {
    return view.getFeatureCount();
  }

  @Override
  public View getChildAt(MapView view, int index) {
    return view.getFeatureAt(index);
  }

  @Override
  public void removeViewAt(MapView parent, int index) {
    parent.removeFeatureAt(index);
  }

  @Override
  public void updateExtraData(MapView view, Object extraData) {
    view.updateExtraData(extraData);
  }

  void pushEvent(ThemedReactContext context, View view, String name, WritableMap data) {
    context.getJSModule(RCTEventEmitter.class)
        .receiveEvent(view.getId(), name, data);
  }

  @Override
  public void onDropViewInstance(MapView view) {
    view.doDestroy();
    super.onDropViewInstance(view);
  }

}
