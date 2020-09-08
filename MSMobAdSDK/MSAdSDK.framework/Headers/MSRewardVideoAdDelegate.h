//
//  MSRewardVideoAdDelegate.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/20.
//  Copyright © 2020 XiXiHaha. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSRewardVideoAd;

@protocol MSRewardVideoAdDelegate <NSObject>

/**
 广告数据加载成功回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoLoaded:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频数据下载成功回调，已经下载过的视频会直接回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoCached:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频播放页即将展示回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoWillShow:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频广告曝光回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoShow:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频播放页关闭回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoClosed:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频广告信息点击回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoClicked:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频广告各种错误信息回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 @param error 具体错误信息
 */
- (void)msRewardVideoError:(MSRewardVideoAd *)msRewardVideoAd error:(NSError *)error;


/**
 视频广告各种错误信息回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 @param platform 广告平台
 @param error 具体错误信息
 */

- (void)msRewardVideoPlatformError:(MSRewardVideoAd *)msRewardVideoAd  platform:(MSShowType)platform error:(NSError *)error;

/**
 视频广告播放达到激励条件回调
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoReward:(MSRewardVideoAd *)msRewardVideoAd;

/**
 视频广告视频播放完成
 
 @param msRewardVideoAd MSRewardVideoAd 实例
 */
- (void)msRewardVideoFinish:(MSRewardVideoAd *)msRewardVideoAd;

@end
