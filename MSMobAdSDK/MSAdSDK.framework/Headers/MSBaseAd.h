//
//  MSBaseLoader.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/14.
//  Copyright © 2020 XiXiHaha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSSDKDefines.h"

@class MSAdModel;

NS_ASSUME_NONNULL_BEGIN

@interface MSBaseAd : UIView

/** 广告位id */
@property (nonatomic, strong) NSString *pid;

/** 广告类型 */
@property (assign, nonatomic)MSAdType adType;

/**
 *  拉取广告超时时间，默认为3秒
 *  详解：拉取广告超时时间，超过此时间则放弃此次广告展示机会。
 */
@property (nonatomic, assign) NSInteger fetchDelay;

@end

NS_ASSUME_NONNULL_END
