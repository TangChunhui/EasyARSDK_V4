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
/// ARCoreDeviceListDownloader is used for download and update of device list data in ARCoreCameraDevice.
/// </summary>
@interface easyar_ARCoreDeviceListDownloader : easyar_RefBase

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (easyar_ARCoreDeviceListDownloader *) create;
- (void)download:(NSNumber *)timeoutMilliseconds callbackScheduler:(easyar_CallbackScheduler *)callbackScheduler onCompleted:(void (^)(easyar_ARCoreDeviceListDownloadStatus status, NSString * error))onCompleted;

@end
