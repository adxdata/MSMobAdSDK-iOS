//
//  MSVideoAd.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/23.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVideoAdDelegate.h"
#import "MSBaseAd.h"


NS_ASSUME_NONNULL_BEGIN

@interface MSVideoAd : MSBaseAd

//委托对象
@property (nonatomic, weak) id<MSVideoAdDelegate> delegate;

//是否静音
@property (nonatomic,assign,getter=isMuted) BOOL muted;

//视频时长
@property (nonatomic, assign) NSTimeInterval duration;

//视频当前播放时长
@property (nonatomic, assign) NSTimeInterval currentTime;


-(instancetype)initWithFrame:(CGRect)frame presentVc:(UIViewController*)presentVc;

//加载并展示广告
- (void)loadAdAndShowAd:(NSString*)pid;

/**
 * 播放视频
 */
- (void)playVideo;

/**
 * 暂停视频
 */
- (void)pauseVideo;

@end

NS_ASSUME_NONNULL_END
