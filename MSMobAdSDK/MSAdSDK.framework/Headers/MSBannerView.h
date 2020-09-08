//
//  MSBannerAd.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/21.
//  Copyright © 2020 Adxdata. All rights reserved.
//


#import "MSBaseAd.h"
#import "MSBannerViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSBannerView : MSBaseAd


/**
 *   代理
 */
@property(nonatomic,weak) id<MSBannerViewDelegate> delegate;

/**
 *  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。 [可选]
 */
@property(nonatomic, assign) int interval;

/**
 *  Banner条展示关闭按钮，默认打开
 */
@property(nonatomic, assign) BOOL showCloseBtn;


/**
 *  构造方法
 *  详解：frame - banner 展示的位置和大小
 */

- (instancetype)initWithFrame:(CGRect)frame
                curController:(nullable UIViewController*)controller;

/**
 *  拉取并展示广告
 */
- (void)loadAdAndShow:(UIViewController*)currentViewController pid:(NSString *)pid;

/**
 *  关闭广告
 */
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
