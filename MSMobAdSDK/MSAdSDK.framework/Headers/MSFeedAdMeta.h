//
//  MSFeedAdMeta.h
//  MSAdSDKDev
//
//  Created by Liumaos on 2020/7/31.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef MSFeedAdMeta_h
#define MSFeedAdMeta_h

typedef NS_ENUM(NSInteger, MSCreativeType) {
    MSCreativeTypeImage      = 1, // 图片
    MSCreativeTypeVideo      = 2, // 视频
    MSCreativeTypeSmallImage = 11, // 小图
    MSCreativeTypeLargeImage = 12, // 大图
    MSCreativeTypeThreeImage = 13, // 三图
    MSCreativeTypePrerender  = 100000, // 预渲染
};
@protocol MSFeedAdMeta <NSObject>

- (MSCreativeType)metaCreativeType;//类型

- (NSString *) metaTitle;//标题

- (NSString *) metaContent;//内容

- (NSString *) metaIcon;//广告图标

- (UIImageView *) metaLogo;//平台Logo

- (CGSize) metaMainImageSize;//主图图片尺寸

- (NSArray<NSString *> *) metaImageUrls;//多图信息流

- (NSString *) metaVideoUrl;//信息流视频

- (NSTimeInterval) metaVideoDuration;//视频时长

- (NSInteger) metaTargetType;//广告交互类型(0:网页跳转,1:下载) 默认 值:0

#pragma mark- Action

//绑定数据到View
-(void) attachAd:(UIView *)view
       clickView:(NSArray<UIView*>*)clickViews
       presentVc:(UIViewController*)presenntVc;

//解绑数据
-(void) unAttachAd;

@end

#endif /* MSFeedAdMeta_h */
