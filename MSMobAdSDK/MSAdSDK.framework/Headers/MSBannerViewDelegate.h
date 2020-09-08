//
//  MSBannerViewDelegate.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/7/21.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSBannerViewDelegate_h
#define MSBannerViewDelegate_h

@class MSBannerView;

@protocol MSBannerViewDelegate <NSObject>

@optional

/**
 *  请求广告条数据成功后调用
 *  详解:当接收服务器返回的广告数据成功后调用该函数
 */
- (void)msBannerLoaded:(MSBannerView *)msBannerAd;


/**
 *  请求广告条数据失败后调用
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)msBannerError:(MSBannerView *)msBannerAd error:(NSError *)error;

/**
 *  请求平台广告条数据失败后调用
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)msBannerPlatformError:(MSShowType)platform
                     bannerAd:(MSBannerView *)msBannerAd
                        error:(NSError *)error;

/**
 *  banner广告曝光
 */
- (void)msBannerShow:(MSBannerView *)msBannerAd;


/**
 *  banner条点击回调
 */
- (void)msBannerClicked:(MSBannerView *)msBannerAd;


/**
 *  banner条被用户关闭时调用
 *  详解:用户有可能点击关闭按钮从而把广告条关闭
 */
- (void)msBannerClosed:(MSBannerView *)msBannerAd;


/**
 *  banner广告点击以后弹出全屏广告页完毕
 */
- (void)msBannerDetailShow:(MSBannerView *)msBannerAd;


/**
 *  全屏广告页已经被关闭
 */
- (void)msBannerDetailClosed:(MSBannerView *)msBannerAd;

@end

#endif /* MSBannerViewDelegate_h */
