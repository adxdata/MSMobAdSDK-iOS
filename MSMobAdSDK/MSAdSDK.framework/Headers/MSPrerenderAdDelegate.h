//
//  MSPrerenderAdDelegate.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/8/3.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSPrerenderAdDelegate_h
#define MSPrerenderAdDelegate_h


@class MSPrerenderAd;

@protocol MSPrerenderAdDelegate <NSObject>

@optional

/**
 *  请求广告条数据成功后调用
 *  详解:当接收服务器返回的广告数据成功后调用该函数
 */
- (void)msPrerenderLoaded:(MSPrerenderAd *)prerenderAd adViewArray:(NSArray<UIView*>*)adViewArray;

/**
 *  请求广告条数据失败后调用
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)msPrerenderError:(MSPrerenderAd *)prerenderAd error:(NSError *)error;

/**
*  请求平台广告条数据失败后调用
*  详解:当接收服务器返回的广告数据失败后调用该函数
*/
- (void)msPrerenderPlatformError:(MSShowType)platform ad:(MSPrerenderAd *)prerenderAd error:(NSError *)error;

/**
 *  广告视图渲染成功
 *  详解:广告视图渲染成功后调用该函数
 */
- (void)msPrerenderRenderSuccess:(UIView *)adView;


/**
 *  广告视图渲染失败
 *  详解:广告视图渲染失败后调用该函数
 */
- (void)msPrerenderRenderError:(UIView *)adView error:(NSError *)error;

/**
 *  prerender广告曝光
 */
- (void)msPrerenderShow:(UIView *)adView;

/**
 *  prerender点击回调
 */
- (void)msPrerenderClicked:(UIView *)adView;

/**
 *  prerender条被用户关闭时调用
 *  详解:用户有可能点击关闭按钮从而把广告条关闭
 */
- (void)msPrerenderClosed:(UIView *)adView;

@end


#endif /* MSPrerenderAdDelegate_h */
