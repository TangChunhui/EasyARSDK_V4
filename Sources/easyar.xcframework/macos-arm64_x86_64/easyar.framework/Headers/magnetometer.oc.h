//=============================================================================================================================
//
// EasyAR Sense 4.5.0.9653-15c04a97e
// Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"

/// <summary>
/// record
/// Magnetometer reading.
///
/// The positive direction of x-axis is from the device center to its right side of the screen.
/// The positive direction of y-axis is from the device center to its top side of the screen.
/// The positive direction of z-axis is from the device center perpendicular to the screen outward.
///
/// The unit of x, y, z is uT(micro-Tesla).
/// The unit of timestamp is second.
/// </summary>
@interface easyar_MagnetometerResult : NSObject

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) double timestamp;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(float)x y:(float)y z:(float)z timestamp:(double)timestamp;

@end
