import type {TurboModule} from 'react-native';
import {TurboModuleRegistry} from 'react-native';
import {
  Address,
  BoundingBox,
  Camera,
  EdgePadding,
  MarkersFrames,
} from './MapView.types';
import {LatLng, Point, Region} from './sharedTypes';

export interface Spec extends TurboModule {
  animateCamera: (
    viewTag: number,
    camera: Partial<Camera>,
    duration: number,
  ) => Promise<void>;
  animateToRegion: (
    viewTag: number,
    region: Region,
    duration: number,
  ) => Promise<void>;
  coordinateForPoint: (viewTag: number, point: Point) => Promise<LatLng>;
  /** android only */
  enableLatestRenderer: () => Promise<string>;
  fitToCoordinates: (
    viewTag: number,
    coordinates: LatLng[],
    edgePadding: EdgePadding,
    duration: number,
  ) => Promise<void>;
  fitToElements: (
    viewTag: number,
    //** google maps only */
    edgePadding: EdgePadding,
    duration: number,
  ) => Promise<void>;
  fitToSuppliedMarkers: (
    viewTag: number,
    markers: string[],
    edgePadding: EdgePadding,
    duration: number,
  ) => Promise<void>;
  getAddressFromCoordinates: (
    viewTag: number,
    coordinate: LatLng,
  ) => Promise<Address>;
  getCamera: (viewTag: number) => Promise<Camera>;
  getMapBoundaries: (viewTag: number) => Promise<BoundingBox>;
  /** ios only */
  getMarkersFrames: (
    viewTag: number,
    onlyVisible: boolean,
  ) => Promise<MarkersFrames>;
  pointForCoordinate: (viewTag: number, coordinate: LatLng) => Promise<Point>;
  takeSnapshot: (
    viewTag: number,
    config: {
      width: number;
      height: number;
      region?: Region;
      format: string;
      quality: number;
      result: string;
    },
  ) => Promise<string>;
}

export default TurboModuleRegistry.get<Spec>('RNMMapViewModule');
