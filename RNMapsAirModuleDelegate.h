//
//  AIRUrlTileOverlay.h
//  AirMaps
//
//  Created by cascadian on 3/19/16.
//  Copyright © 2016. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <React/RCTBridge.h>

@protocol RNMapsAirModuleDelegate <NSObject>
@required

- (void)takeSnapshotWithConfig:(NSDictionary *)config
                      callback:(RCTPromiseResolveBlock) callback;

- (NSDictionary *) getCamera;
- (NSDictionary*) getMarkersFramesWithOnlyVisible:(BOOL)onlyVisible;
- (NSArray *) getMapBoundaries;
- (NSDictionary *) getPointForCoordinates:(CLLocationCoordinate2D) location;
- (NSDictionary *) getCoordinatesForPoint:(CGPoint) point;
@end
