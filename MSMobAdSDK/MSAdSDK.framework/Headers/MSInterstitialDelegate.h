//
//  MSInterstitialDelegate.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/7/23.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSInterstitialDelegate_h
#define MSInterstitialDelegate_h


@class MSInterstitialAd;

@protocol MSInterstitialDelegate <NSObject>

@optional

/**
 *  广告预加载成功回调
 *  详解:当接收服务器返回的广告数据成功且预加载后调用该函数
 */
- (void)msInterstitialLoaded:(MSInterstitialAd *)msInterstitialAd;

/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)msInterstitialError:(MSInterstitialAd *)msInterstitialAd
                      error:(NSError *)error;


/**
*  平台广告失败回调
*
*/

- (void)msInterstitialPlatformError:(MSShowType)platform ad: (MSInterstitialAd *)msInterstitialAd error:(NSError *)error;
/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)msInterstitialShow:(MSInterstitialAd *)msInterstitialAd;

/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)msInterstitialClosed:(MSInterstitialAd *)msInterstitialAd;

/**
 *  插屏广告点击回调
 */
- (void)msInterstitialClicked:(MSInterstitialAd *)msInterstitialAd;

/**
 *  全屏广告页被关闭
 */
- (void)msInterstitialDetailClosed:(MSInterstitialAd *)msInterstitialAd;

@end


#endif /* MSInterstitialDelegate_h */
