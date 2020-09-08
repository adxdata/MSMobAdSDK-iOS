//
//  MSVideoAdDelegate.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/7/23.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#ifndef MSVideoAdDelegate_h
#define MSVideoAdDelegate_h

@class MSVideoAd;

@protocol MSVideoAdDelegate <NSObject>

@optional
/**
 *  视频广告加载成功
 */
- (void)msVideoLoad:(MSVideoAd *)videoAd;
/**
 *  视频广告成功展示
 */
- (void)msVideoShow:(MSVideoAd *)videoAd;

/**
 *  视频广告展示失败
 */
- (void)msVideoError:(MSVideoAd *)videoAd error:(NSError *)error;

/**
*  视频广告平台展示失败
*/
- (void)msVideoPlatformError:(MSShowType)platform ad: (MSVideoAd *)videoAd error:(NSError *)error;

/**
 *  视频广告点击回调
 */
- (void)msVideoClick:(MSVideoAd *)videoAd;

/**
 *  视频广告将要关闭回调
 */
- (void)msVideoCompletion:(MSVideoAd *)videoAd;

@end

#endif /* MSVideoAdDelegate_h */
