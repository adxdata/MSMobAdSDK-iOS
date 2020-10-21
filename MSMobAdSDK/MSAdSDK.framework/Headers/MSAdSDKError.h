//
//  MSAdSDKError.h
//  MSAdSDK
//
//  Created by lj on 2020/9/29.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSAdSDKError_h
#define MSAdSDKError_h

typedef NS_ENUM(NSInteger,MSErrorCode) {
    MSErrorCodeADLoadImageError  = -1,  //加载图片失败
    MSErrorCodeADLoadStyleError  = 3,   //广告加载方式异常
    MSErrorCodeADLoadFailError   = 200, //资源加载失败
    MSErrorCodeNoADError         = 204, //无广告
    MSErrorCodeADCancleError     = 700, //广告被取消加载
    MSErrorCodeADMaterialError   = 1001,//素材URL不合法
    MSErrorCodeADNetWorkError    = 3001,//网络错误
    MSErrorCodeADTypeError       = 4003,//广告类型错误
    MSErrorCodeADLoadVideoError  = 6020 //视频加载失败或者视频广告资源地址不存在
};

#endif /* MSAdSDKError_h */
