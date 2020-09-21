//
//  MSRewardAd.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/20.
//  Copyright © 2020 XiXiHaha. All rights reserved.
//

#import "MSBaseAd.h"
#import "MSRewardVideoAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSRewardVideoAd : MSBaseAd

@property (nonatomic, weak) id <MSRewardVideoAdDelegate> delegate;
/**
 获取广告平台
 */
@property (nonatomic, assign, readonly) MSPlatform platform;
- (instancetype)initWithCurController:(nullable UIViewController *)controller;

-(void) loadRewardVideoAd:(NSString*)pid;
-(void) showRewardVideoAd;

@end

NS_ASSUME_NONNULL_END
