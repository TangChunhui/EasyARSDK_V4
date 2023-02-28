//=============================================================================================================================
//
// EasyAR Sense 4.6.0.10354-b8234d930
// Copyright (c) 2015-2023 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"
#import "easyar/frame.oc.h"

/// <summary>
/// The block instance localized by MegaTracker.
/// </summary>
@interface easyar_MegaTrackerBlockInstance : easyar_RefBase

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// The ID of the block.
/// </summary>
- (NSString *)blockId;
/// <summary>
/// The name of the block.
/// </summary>
- (NSString *)name;
/// <summary>
/// The map pose in the camera coordinates.
/// </summary>
- (easyar_Matrix44F *)pose;

@end

/// <summary>
/// The result of MegaTracker. Updated at the same frame rate with OutputFrame.
/// </summary>
@interface easyar_MegaTrackerResult : easyar_FrameFilterResult

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// Current localized block instances. An existing instance will be preserved until another block is localized, or when MegaTracker is stopped or paused.
/// </summary>
- (NSArray<easyar_MegaTrackerBlockInstance *> *)instances;

@end

/// <summary>
/// The response of MegaTracker localization request.
/// </summary>
@interface easyar_MegaTrackerLocalizationResponse : easyar_RefBase

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// The input frame on request.
/// </summary>
- (easyar_InputFrame *)inputFrame;
/// <summary>
/// The accelerometer reading on request.
/// </summary>
- (easyar_AccelerometerResult *)acceleration;
/// <summary>
/// The location reading on request.
/// </summary>
- (easyar_LocationResult *)location;
/// <summary>
/// Localization status.
/// </summary>
- (easyar_MegaTrackerLocalizationStatus)status;
/// <summary>
/// Current localized block instances. An existing instance will be preserved until another block is localized, or when MegaTracker is stopped or paused.
/// </summary>
- (NSArray<easyar_MegaTrackerBlockInstance *> *)instances;
/// <summary>
/// The duration in seconds for server response.
/// </summary>
- (NSNumber *)serverResponseDuration;
/// <summary>
/// The duration in seconds for server internal calculation.
/// </summary>
- (NSNumber *)serverCalculationDuration;
/// <summary>
/// Error message. It is filled when status is UnknownError.
/// </summary>
- (NSString *)errorMessage;
- (NSString *)extraInfo;

@end

/// <summary>
/// Provides cloud based localization.
/// MegaTracker occupies 1 buffers of camera.
/// </summary>
@interface easyar_MegaTracker : easyar_RefBase

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// Check whether SparseSpatialMap is is available, always return true.
/// </summary>
+ (bool)isAvailable;
/// <summary>
/// Input port for input frame. For MegaTracker to work, the inputFrame must include camera parameters, timestamp and spatial information. See also `InputFrameSink`_ .
/// </summary>
- (easyar_InputFrameSink *)inputFrameSink;
/// <summary>
/// Sets source type of input frames.
/// </summary>
- (void)setInputFrameSourceType:(easyar_InputFrameSourceType)type;
/// <summary>
/// Input port for accelerometer result. See also `AccelerometerResultSink`_ .
/// </summary>
- (easyar_AccelerometerResultSink *)accelerometerResultSink;
/// <summary>
/// Optional. Input port for location result. See also `LocationResultSink`_ .
/// </summary>
- (easyar_LocationResultSink *)locationResultSink;
/// <summary>
/// Optional. Input port for proximity location result. See also `ProximityLocationResultSink`_ .
/// </summary>
- (easyar_ProximityLocationResultSink *)proximityLocationResultSink;
/// <summary>
/// Camera buffers occupied in this component.
/// </summary>
- (int)bufferRequirement;
/// <summary>
/// Output port for output frame. See also `OutputFrameSource`_ .
/// </summary>
- (easyar_OutputFrameSource *)outputFrameSource;
/// <summary>
/// Creates an instance.
/// </summary>
+ (easyar_MegaTracker *)create:(NSString *)server apiKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret appId:(NSString *)appId;
/// <summary>
/// Sets request time parameters. timeoutMilliseconds is connection timeout. requestIntervalMilliseconds is the expected request interval, and the default value is 1000 and the minimum value is 300, with a longer value results a larger overall error.
/// </summary>
- (void)setRequestTimeParameters:(NSNumber *)timeoutMilliseconds requestIntervalMilliseconds:(int)requestIntervalMilliseconds;
/// <summary>
/// Sets type of result pose. enableLocalization and enableStabilization default to true.
/// </summary>
- (void)setResultPoseType:(bool)enableLocalization enableStabilization:(bool)enableStabilization;
- (void)setRequestMessage:(NSString *)message;
/// <summary>
/// Sets request delay. On every localization, the callback will be triggered.
/// </summary>
- (void)setLocalizationCallback:(easyar_CallbackScheduler *)callbackScheduler callback:(void (^)(easyar_MegaTrackerLocalizationResponse * response))callback;
/// <summary>
/// Start MegaTracker.
/// </summary>
- (bool)start;
/// <summary>
/// Stop MegaTracker. Call start() to resume running.
/// </summary>
- (void)stop;
/// <summary>
/// Reset MegaTracker and clear all internal states.
/// </summary>
- (void)reset;
/// <summary>
/// Close MegaTracker. MegaTracker can no longer be used.
/// </summary>
- (void)close;

@end
