//=============================================================================================================================
//
// EasyAR Sense 4.6.0.10354-b8234d930
// Copyright (c) 2015-2023 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"

/// <summary>
/// record
/// Accelerometer reading.
///
/// The positive direction of x-axis is from the device center to its right side of the screen.
/// The positive direction of y-axis is from the device center to its top side of the screen.
/// The positive direction of z-axis is from the device center perpendicular to the screen outward.
///
/// The unit of x, y, z is m/s^2.
/// The unit of timestamp is second.
/// </summary>
@interface easyar_AccelerometerResult : NSObject

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) double timestamp;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(float)x y:(float)y z:(float)z timestamp:(double)timestamp;

@end

/// <summary>
/// record
/// Location reading.
///
/// The unit of latitude, longitude is meter.
/// The unit of altitude is meter.
/// The unit of horizontalAccuracy is meter.
/// verticalAccuracy is the accuracy in the direction of gravity of earth, and its unit is meter.
/// </summary>
@interface easyar_LocationResult : NSObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasVerticalAccuracy;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(double)latitude longitude:(double)longitude altitude:(double)altitude horizontalAccuracy:(double)horizontalAccuracy verticalAccuracy:(double)verticalAccuracy hasAltitude:(bool)hasAltitude hasHorizontalAccuracy:(bool)hasHorizontalAccuracy hasVerticalAccuracy:(bool)hasVerticalAccuracy;

@end

/// <summary>
/// record
/// Proximity location reading.
///
/// The unit of x, y, z is meter. Origin is at map block origin. y is up.
/// The unit of accuracy is meter.
/// The unit of timestamp and validTime is second.
/// is2d is whether y is disabled.
/// </summary>
@interface easyar_ProximityLocationResult : NSObject

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) float accuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) bool is2d;
@property (nonatomic) double validTime;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)create:(float)x y:(float)y z:(float)z accuracy:(float)accuracy timestamp:(double)timestamp is2d:(bool)is2d validTime:(double)validTime;

@end
