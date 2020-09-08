//
//  MSInterstitialAd.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/23.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSInterstitialDelegate.h"
#import "MSBaseAd.h"
NS_ASSUME_NONNULL_BEGIN

@interface MSInterstitialAd : MSBaseAd

/**
 *  委托对象
 */
@property (nonatomic, weak) id<MSInterstitialDelegate> delegate;

/**
 *  构造方法
 *  详解：controller - 当前界面
 */
- (instancetype)initWithCurController:(UIViewController*)controller;

/**
 *  加载广告
 *  详解：pid - 广告位 id
 */
- (void)loadAd:(NSString *)pid;

/**
 *  显示广告
 *  详解：显示广告
 */
- (void)showAd;


@end

NS_ASSUME_NONNULL_END
