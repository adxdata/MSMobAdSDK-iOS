//
//  MSFeedVideoView.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/8/28.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSFeedAdMeta.h"
#import "MSFeedVideoConfig.h"
#import "MSFeedVideoDelegate.h"


NS_ASSUME_NONNULL_BEGIN

@interface MSFeedVideoView : UIView


/// 回调代理
@property(nonatomic,weak)   id<MSFeedVideoDelegate> delegate;

/// 视频广告配置
@property(nonatomic,strong) MSFeedVideoConfig      *videoConfig;

/// 展示广告的视图控制器
@property(nonatomic,weak)   UIViewController       *presentVc;


-(instancetype) initWithFrame:(CGRect)frame
                     delegate:(id<MSFeedVideoDelegate>)delegate
                       config:(MSFeedVideoConfig*)config
                    presentVc:(UIViewController*)presentVc;


/// 绑定广告数据
/// @param dataObject 广告数据
/// @param clickableViews 响应点击事件的视图
-(void) registerDataObject:(id<MSFeedAdMeta>)dataObject
            clickableViews:(NSArray<UIView *>*)clickableViews;

///解绑数据 ⚠️⚠️⚠️  需要在适当时机(比如:父容器UIView释放的时候)调用该方法解绑释放数据,需与绑定广告数据方法成对出现
-(void) unregisterDataObject;

///播放视频
-(void) playVideo;

///暂停视频
-(void) pauseVideo;

///视频静音
-(void) muteVideo:(BOOL)isMute;

@end

NS_ASSUME_NONNULL_END
