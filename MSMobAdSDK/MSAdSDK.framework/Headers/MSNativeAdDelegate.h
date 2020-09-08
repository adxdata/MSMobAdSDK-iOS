//
//  MSNativeAdDelegate.h
//  MSAdSDK
//
//  Created by lj on 2020/7/24.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSNativeAdDelegate_h
#define MSNativeAdDelegate_h
#import "MSFeedAdMeta.h"

@class MSFeedAdData;

@protocol MSNativeAdDelegate <NSObject>

@optional

/**
 *  原生广告加载广告数据成功回调，返回为MSFeedAdData对象的数组
 */
- (void)msNativeLoaded:(NSArray<MSFeedAdMeta>*)nativeAdDataArray;
/**
 *  原生广告加载广告数据失败回调
 */
- (void)msNativeError:(NSError *)error;

/**
*  原生广告加载广告 平台数据失败回调
*/

- (void)msNativePlatformError:(MSShowType)platform error: (NSError *)error;

/**
 *  原生广告即将展现
 */
- (void)msNativeShow:(id<MSFeedAdMeta>)feedAdData;

/**
 *  广告被点击
 */
- (void)msNativeClick:(id<MSFeedAdMeta>)feedAdData;

/**
 *  原生广告点击之后将要展示内嵌浏览器或应用内AppStore回调
 */
- (void)msNativeDetailShow;

/**
 * 原生广告点击以后，内置AppStore或是内置浏览器被关闭时回调
 */
- (void)msNativeDetailClosed;

@end

#endif /* MSNativeAdDelegate_h */
