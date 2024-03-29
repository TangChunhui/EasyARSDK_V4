﻿//=============================================================================================================================
//
// EasyAR Sense 4.6.0.10354-b8234d930
// Copyright (c) 2015-2023 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#ifndef __EASYAR_IMAGE_H__
#define __EASYAR_IMAGE_H__

#include "easyar/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void easyar_Image__ctor(easyar_Buffer * buffer, easyar_PixelFormat format, int width, int height, /* OUT */ easyar_Image * * Return);
/// <summary>
/// Returns buffer inside image. It can be used to access internal data of image. The content of `Buffer`_ shall not be modified, as they may be accessed from other threads.
/// </summary>
void easyar_Image_buffer(const easyar_Image * This, /* OUT */ easyar_Buffer * * Return);
/// <summary>
/// Returns image format.
/// </summary>
easyar_PixelFormat easyar_Image_format(const easyar_Image * This);
/// <summary>
/// Returns image width. There is a padding of (pixelWidth - width) pixels at the right side of the image.
/// </summary>
int easyar_Image_width(const easyar_Image * This);
/// <summary>
/// Returns image height. There is a padding of (pixelHeight - height) pixels at the bottom of the image.
/// </summary>
int easyar_Image_height(const easyar_Image * This);
/// <summary>
/// Returns image pixel width for encoding.
/// </summary>
int easyar_Image_pixelWidth(const easyar_Image * This);
/// <summary>
/// Returns image pixel height for encoding.
/// </summary>
int easyar_Image_pixelHeight(const easyar_Image * This);
void easyar_Image_create(easyar_Buffer * buffer, easyar_PixelFormat format, int width, int height, int pixelWidth, int pixelHeight, /* OUT */ easyar_Image * * Return);
void easyar_Image__dtor(easyar_Image * This);
void easyar_Image__retain(const easyar_Image * This, /* OUT */ easyar_Image * * Return);
const char * easyar_Image__typeName(const easyar_Image * This);

#ifdef __cplusplus
}
#endif

#endif
