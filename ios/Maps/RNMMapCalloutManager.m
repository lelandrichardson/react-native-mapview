/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "RNMMapCalloutManager.h"

#import <React/RCTBridge.h>
#import <React/RCTConvert.h>
#import <React/RCTConvert+CoreLocation.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTViewManager.h>
#import <React/UIView+React.h>
#import "RNMMapMarker.h"
#import "RNMMapCallout.h"

@interface RNMMapCalloutManager()

@end

@implementation RNMMapCalloutManager

RCT_EXPORT_MODULE(RNMMapCallout)

- (UIView *)view
{
    return [RNMMapCallout new];
}

RCT_EXPORT_VIEW_PROPERTY(tooltip, BOOL)
RCT_EXPORT_VIEW_PROPERTY(onPress, RCTBubblingEventBlock)
RCT_EXPORT_VIEW_PROPERTY(alphaHitTest, BOOL)

@end
