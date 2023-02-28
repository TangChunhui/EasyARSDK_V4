//=============================================================================================================================
//
// EasyAR Sense 4.6.0.10354-b8234d930
// Copyright (c) 2015-2023 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#import "easyar/types.oc.h"

@interface easyar_Engine : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/// <summary>
/// Gets the version schema hash, which can be used to ensure type declarations consistent with runtime library.
/// </summary>
+ (int)schemaHash;
+ (bool)initialize:(NSString *)licenseKey;
/// <summary>
/// Handles the app onPause, pauses internal tasks.
/// </summary>
+ (void)onPause;
/// <summary>
/// Handles the app onResume, resumes internal tasks.
/// </summary>
+ (void)onResume;
/// <summary>
/// Gets error message on initialization failure.
/// </summary>
+ (NSString *)errorMessage;
/// <summary>
/// Gets the version number of EasyARSense.
/// </summary>
+ (NSString *)versionString;
/// <summary>
/// Gets the product name of EasyARSense. (Including variant, operating system and CPU architecture.)
/// </summary>
+ (NSString *)name;
/// <summary>
/// Gets the release variant of EasyARSense.
/// </summary>
+ (NSString *)variant;
/// <summary>
/// Checks whether the license key matches the provided release variant, package name(or bundle id) and operating system.
/// </summary>
+ (bool)isLicenseKeyMatched:(NSString *)licenseKey packageName:(NSString *)packageName variant:(NSString *)variant operatingSystem:(easyar_EngineOperatingSystem)operatingSystem;

@end
