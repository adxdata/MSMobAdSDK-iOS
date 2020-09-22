//
//  GDTSDKDefines.h
//  GDTMobApp
//
//  Created by royqpwang on 2017/11/6.
//  Copyright © 2017年 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSMacro.h"

/**
 广告平台
 */
typedef NS_ENUM(NSInteger, MSPlatform) {
    MSPlatformMS  = 0, // 展示美数
    MSPlatformGDT = 1, // 展示广点通
    MSPlatformBU  = 2, // 展示穿山甲
    MSPlatformBD  = 3, // 展示百度
    MSPlatformDN  = 4, // 展示多牛
    MSPlatformQY  = 5, // 展示奇艺
};

/**
 监测上报类型
 */
typedef NS_ENUM(NSInteger, MSReportType) {
    MSReportRequest     = 0, // 加载广告前
    MSReportResponse    = 1, // 加载广告成功
    MSReportShow        = 2, // 曝光
    MSReportClick       = 3, // 点击
};

/**
 屏幕横竖屏
 */
typedef NS_ENUM(NSInteger, MSOrientation) {
    MSOrientationPortrait       = 0, // 展示竖屏
    MSOrientationLandscapeRight = 1, // 展示横屏
};

/**
 请求广告参数secure值
 */
typedef NS_ENUM(NSInteger, MSSecure) {
    MSSecureHttp  = 0,  // 仅支持http
    MSSecureHttps = 1,  // 仅支持https
    MSSecureAll   = 2,  // 支持http 和 https
};

/**
 信息流布局类型
 */
typedef NS_ENUM(NSInteger, MSNativeAdType) {
    MSNativeAdLeftImage         = 0,   // 展示左图右文+下载按钮
    MSNativeAdLeftImageNoButton = 1,   // 展示左图右文
    MSNativeAdBottomImage       = 2,   // 展示上文下大图
    MSNativeAdThreeImage        = 3,   // 三图
    MSNativeAdVideo             = 4,   // 视频
};

/**
 广告跳转类型，是否deeplink
 */
typedef NS_ENUM(NSInteger, MSDetailType) {
    MSDetailPage = 0, // 详情页
    MSDetailApp = 1,  // 跳转app
};

/**
 广告点击类型
 */
typedef NS_ENUM(NSInteger, MSTargetType) {
    MSTargetTypeDetail = 0,     // 详情页
    MSTargetTypeDownload = 1,   // 下载
};

/**
 性别
 */
 typedef NS_ENUM(NSInteger, MSGender) {
     MSGenderUnknown = -1,   // 未知
     MSGenderMale = 1,       // 男性
     MSGenderFemale = 10,    // 女性
 };

/**
 * 广告类型
 */
 typedef NS_ENUM(NSInteger, MSAdType) {
     MSAdTypeFeed            = 1,  // 自渲染信息流
     MSAdTypeFeedPreRender   = 2,  // 模板渲染信息流
     MSAdTypeBanner          = 3,  // 横幅 banner
     MSAdTypeSplash          = 4,  // 开屏
     MSAdTypeInterstitial    = 5,  // 插屏
     MSAdTypePaster          = 6,  // 贴片
     MSAdTypeReward          = 7,  // 激励视频
     MSAdTypeDraw            = 8,  // 信息流视频
     MSAdTypeFullScreenVideo = 9,  // 全屏视频
 };

/**
 * 广告点击范围
 */
 typedef NS_ENUM(NSInteger, MSClickRange) {
     MSClickRangeButton = 1,           // 按钮可点
     MSClickRangeScreen = 2,           // 全屏可点
 };

/**
 * 应用信息打印
 */
typedef enum : NSUInteger {
    MSLogNone   = 0,  //不打印Log
    MSLogError  = 1, //只打印Error
    MSLogAll    = 2//全部打印
} MSLogLevel;
