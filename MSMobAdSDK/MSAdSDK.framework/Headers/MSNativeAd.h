//
//  MSNativeAd.h
//  MSAdSDK
//
//  Created by lj on 2020/7/24.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import "MSNativeAdDelegate.h"
#import "MSBaseObjectAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSNativeAd : MSBaseObjectAd
/**
 *  委托对象
 */
@property (nonatomic, weak) id<MSNativeAdDelegate> delegate;

/**
 * 视频广告是否显示视频详情页面，默认为 NO，点击直接跳转网页，设置为YES时，点击后显示视频详情页面
 */
@property (nonatomic, assign) BOOL showVideoDetail;

/*
 *  viewController
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *viewController;
/**
 获取广告平台
 */
@property (nonatomic, assign, readonly) MSPlatform platform;
/**
 *  构造方法
 *  详解：appId - 媒体 ID
 *       placementId - 广告位 ID
 */
 - (instancetype)initWithCurController:(UIViewController*)controller;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求,在获得广告数据后回调delegate
 *  @param adCount 一次拉取广告的个数，目前仅应用于穿山甲，MS一次只能取一个，百度每次只能取3个
 *  @param pid 广告id
 */
- (void)loadAd:(int)adCount pid:(NSString *)pid;

- (void)reloadAd;

@end

NS_ASSUME_NONNULL_END
