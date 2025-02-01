
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterCpp.js
 */

#include "EventEmitters.h"


namespace facebook::react {

void RNMapsGoogleMapViewEventEmitter::onIndoorBuildingFocused(OnIndoorBuildingFocused $event) const {
  dispatchEvent("indoorBuildingFocused", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto IndoorBuilding = jsi::Object(runtime);
  IndoorBuilding.setProperty(runtime, "underground", $event.IndoorBuilding.underground);
  IndoorBuilding.setProperty(runtime, "activeLevelIndex", $event.IndoorBuilding.activeLevelIndex);
  $payload.setProperty(runtime, "IndoorBuilding", IndoorBuilding);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onIndoorLevelActivated(OnIndoorLevelActivated $event) const {
  dispatchEvent("indoorLevelActivated", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto IndoorLevel = jsi::Object(runtime);
  IndoorLevel.setProperty(runtime, "activeLevelIndex", $event.IndoorLevel.activeLevelIndex);
  IndoorLevel.setProperty(runtime, "name", $event.IndoorLevel.name);
  IndoorLevel.setProperty(runtime, "shortName", $event.IndoorLevel.shortName);
  $payload.setProperty(runtime, "IndoorLevel", IndoorLevel);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onKmlReady(OnKmlReady $event) const {
  dispatchEvent("kmlReady", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onLongPress(OnLongPress $event) const {
  dispatchEvent("longPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "action", $event.action);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMapLoaded(OnMapLoaded $event) const {
  dispatchEvent("mapLoaded", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMapReady(OnMapReady $event) const {
  dispatchEvent("mapReady", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerDeselect(OnMarkerDeselect $event) const {
  dispatchEvent("markerDeselect", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerDrag(OnMarkerDrag $event) const {
  dispatchEvent("markerDrag", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "id", $event.id);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerDragEnd(OnMarkerDragEnd $event) const {
  dispatchEvent("markerDragEnd", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
$payload.setProperty(runtime, "id", $event.id);
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerDragStart(OnMarkerDragStart $event) const {
  dispatchEvent("markerDragStart", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
$payload.setProperty(runtime, "id", $event.id);
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerPress(OnMarkerPress $event) const {
  dispatchEvent("markerPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onMarkerSelect(OnMarkerSelect $event) const {
  dispatchEvent("markerSelect", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onPanDrag(OnPanDrag $event) const {
  dispatchEvent("panDrag", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onPoiClick(OnPoiClick $event) const {
  dispatchEvent("poiClick", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "placeId", $event.placeId);
$payload.setProperty(runtime, "name", $event.name);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onPress(OnPress $event) const {
  dispatchEvent("press", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "action", $event.action);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onRegionChangeStart(OnRegionChangeStart $event) const {
  dispatchEvent("regionChangeStart", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onRegionChange(OnRegionChange $event) const {
  dispatchEvent("regionChange", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onRegionChangeComplete(OnRegionChangeComplete $event) const {
  dispatchEvent("regionChangeComplete", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsGoogleMapViewEventEmitter::onUserLocationChange(OnUserLocationChange $event) const {
  dispatchEvent("userLocationChange", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  coordinate.setProperty(runtime, "altitude", $event.coordinate.altitude);
  coordinate.setProperty(runtime, "timestamp", $event.coordinate.timestamp);
  coordinate.setProperty(runtime, "accuracy", $event.coordinate.accuracy);
  coordinate.setProperty(runtime, "speed", $event.coordinate.speed);
  coordinate.setProperty(runtime, "heading", $event.coordinate.heading);
  coordinate.setProperty(runtime, "altitudeAccuracy", $event.coordinate.altitudeAccuracy);
  coordinate.setProperty(runtime, "isFromMockProvider", $event.coordinate.isFromMockProvider);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto error = jsi::Object(runtime);
  error.setProperty(runtime, "message", $event.error.message);
  $payload.setProperty(runtime, "error", error);
}
    return $payload;
  });
}


void RNMapsGooglePolygonEventEmitter::onPress(OnPress $event) const {
  dispatchEvent("press", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onCalloutPress(OnCalloutPress $event) const {
  dispatchEvent("calloutPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
{
  auto frame = jsi::Object(runtime);
  frame.setProperty(runtime, "x", $event.frame.x);
  frame.setProperty(runtime, "y", $event.frame.y);
  frame.setProperty(runtime, "width", $event.frame.width);
  frame.setProperty(runtime, "height", $event.frame.height);
  $payload.setProperty(runtime, "frame", frame);
}
$payload.setProperty(runtime, "id", $event.id);
{
  auto point = jsi::Object(runtime);
  point.setProperty(runtime, "x", $event.point.x);
  point.setProperty(runtime, "y", $event.point.y);
  $payload.setProperty(runtime, "point", point);
}
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onDoublePress(OnDoublePress $event) const {
  dispatchEvent("doublePress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onIndoorBuildingFocused(OnIndoorBuildingFocused $event) const {
  dispatchEvent("indoorBuildingFocused", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto IndoorBuilding = jsi::Object(runtime);
  IndoorBuilding.setProperty(runtime, "underground", $event.IndoorBuilding.underground);
  IndoorBuilding.setProperty(runtime, "activeLevelIndex", $event.IndoorBuilding.activeLevelIndex);
  $payload.setProperty(runtime, "IndoorBuilding", IndoorBuilding);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onIndoorLevelActivated(OnIndoorLevelActivated $event) const {
  dispatchEvent("indoorLevelActivated", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto IndoorLevel = jsi::Object(runtime);
  IndoorLevel.setProperty(runtime, "activeLevelIndex", $event.IndoorLevel.activeLevelIndex);
  IndoorLevel.setProperty(runtime, "name", $event.IndoorLevel.name);
  IndoorLevel.setProperty(runtime, "shortName", $event.IndoorLevel.shortName);
  $payload.setProperty(runtime, "IndoorLevel", IndoorLevel);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onKmlReady(OnKmlReady $event) const {
  dispatchEvent("kmlReady", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onLongPress(OnLongPress $event) const {
  dispatchEvent("longPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "action", $event.action);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMapLoaded(OnMapLoaded $event) const {
  dispatchEvent("mapLoaded", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMapReady(OnMapReady $event) const {
  dispatchEvent("mapReady", [](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerDeselect(OnMarkerDeselect $event) const {
  dispatchEvent("markerDeselect", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerDrag(OnMarkerDrag $event) const {
  dispatchEvent("markerDrag", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "id", $event.id);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerDragEnd(OnMarkerDragEnd $event) const {
  dispatchEvent("markerDragEnd", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
$payload.setProperty(runtime, "id", $event.id);
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerDragStart(OnMarkerDragStart $event) const {
  dispatchEvent("markerDragStart", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
$payload.setProperty(runtime, "id", $event.id);
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerPress(OnMarkerPress $event) const {
  dispatchEvent("markerPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onMarkerSelect(OnMarkerSelect $event) const {
  dispatchEvent("markerSelect", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onPanDrag(OnPanDrag $event) const {
  dispatchEvent("panDrag", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onPoiClick(OnPoiClick $event) const {
  dispatchEvent("poiClick", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "placeId", $event.placeId);
$payload.setProperty(runtime, "name", $event.name);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onPress(OnPress $event) const {
  dispatchEvent("press", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
$payload.setProperty(runtime, "action", $event.action);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onRegionChangeStart(OnRegionChangeStart $event) const {
  dispatchEvent("regionChangeStart", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onRegionChange(OnRegionChange $event) const {
  dispatchEvent("regionChange", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onRegionChangeComplete(OnRegionChangeComplete $event) const {
  dispatchEvent("regionChangeComplete", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto region = jsi::Object(runtime);
  region.setProperty(runtime, "latitude", $event.region.latitude);
  region.setProperty(runtime, "longitude", $event.region.longitude);
  region.setProperty(runtime, "latitudeDelta", $event.region.latitudeDelta);
  region.setProperty(runtime, "longitudeDelta", $event.region.longitudeDelta);
  $payload.setProperty(runtime, "region", region);
}
$payload.setProperty(runtime, "continuous", $event.continuous);
    return $payload;
  });
}


void RNMapsMapViewEventEmitter::onUserLocationChange(OnUserLocationChange $event) const {
  dispatchEvent("userLocationChange", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    {
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  coordinate.setProperty(runtime, "altitude", $event.coordinate.altitude);
  coordinate.setProperty(runtime, "timestamp", $event.coordinate.timestamp);
  coordinate.setProperty(runtime, "accuracy", $event.coordinate.accuracy);
  coordinate.setProperty(runtime, "speed", $event.coordinate.speed);
  coordinate.setProperty(runtime, "heading", $event.coordinate.heading);
  coordinate.setProperty(runtime, "altitudeAccuracy", $event.coordinate.altitudeAccuracy);
  coordinate.setProperty(runtime, "isFromMockProvider", $event.coordinate.isFromMockProvider);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto error = jsi::Object(runtime);
  error.setProperty(runtime, "message", $event.error.message);
  $payload.setProperty(runtime, "error", error);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onCalloutPress(OnCalloutPress $event) const {
  dispatchEvent("calloutPress", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto frame = jsi::Object(runtime);
  frame.setProperty(runtime, "x", $event.frame.x);
  frame.setProperty(runtime, "y", $event.frame.y);
  frame.setProperty(runtime, "width", $event.frame.width);
  frame.setProperty(runtime, "height", $event.frame.height);
  $payload.setProperty(runtime, "frame", frame);
}
{
  auto point = jsi::Object(runtime);
  point.setProperty(runtime, "x", $event.point.x);
  point.setProperty(runtime, "y", $event.point.y);
  $payload.setProperty(runtime, "point", point);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onDeselect(OnDeselect $event) const {
  dispatchEvent("deselect", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onDrag(OnDrag $event) const {
  dispatchEvent("drag", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onDragEnd(OnDragEnd $event) const {
  dispatchEvent("dragEnd", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onDragStart(OnDragStart $event) const {
  dispatchEvent("dragStart", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onPress(OnPress $event) const {
  dispatchEvent("press", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}


void RNMapsMarkerEventEmitter::onSelect(OnSelect $event) const {
  dispatchEvent("select", [$event=std::move($event)](jsi::Runtime &runtime) {
    auto $payload = jsi::Object(runtime);
    $payload.setProperty(runtime, "action", $event.action);
$payload.setProperty(runtime, "id", $event.id);
{
  auto coordinate = jsi::Object(runtime);
  coordinate.setProperty(runtime, "latitude", $event.coordinate.latitude);
  coordinate.setProperty(runtime, "longitude", $event.coordinate.longitude);
  $payload.setProperty(runtime, "coordinate", coordinate);
}
{
  auto position = jsi::Object(runtime);
  position.setProperty(runtime, "x", $event.position.x);
  position.setProperty(runtime, "y", $event.position.y);
  $payload.setProperty(runtime, "position", position);
}
    return $payload;
  });
}

} // namespace facebook::react
