//
//  MSSplashAdDelegate.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/7/16.
//  Copyright © 2020 XiXiHaha. All rights reserved.
//

#ifndef MSSplashAdDelegate_h
#define MSSplashAdDelegate_h

@class MSSplashAd;

@protocol MSSplashAdDelegate <NSObject>

/**
 * 开始加载广告
 */
- (void)msSplashStartLoaded:(MSSplashAd *)splashAd;

/**
 * 开屏广告加载成功
 */
- (void)msSplashLoaded:(MSSplashAd *)splashAd;

/**
 * 开屏广告展示成功
 */

- (void)msSplashPresent:(MSSplashAd *)splashAd;


/**
 *  开屏广告成功展示
 */
- (void)msSplashShow:(MSSplashAd *)splashAd;

/**
 *  开屏广告失败
 */
- (void)msSplashError:(MSSplashAd *)splashAd withError:(NSError *)error;

/**
*  平台Error
*/
-(void) msSplashPlatformError:(MSPlatform)platform
                     splashAd:(MSSplashAd *)splashAd
                        error:(NSError*)error;

/**
 *  开屏广告点击回调
 */
- (void)msSplashClicked:(MSSplashAd *)splashAd;

/**
 *  开屏广告将要关闭回调
 */
- (void)msSplashWillClosed:(MSSplashAd *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)msSplashClosed:(MSSplashAd *)splashAd;

/**
 *  点击以后全屏广告页已经关闭
 */
- (void)msSplashDetailClosed:(MSSplashAd *)splashAd;

/**
 * 当用户点击跳过按钮时触发
 */
- (void)msSplashSkip:(MSSplashAd *)splashAd;

@end

#endif /* MSSplashAdDelegate_h */
