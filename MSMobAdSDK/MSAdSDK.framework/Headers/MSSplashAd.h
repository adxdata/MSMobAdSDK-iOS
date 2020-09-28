//
//  MSSplashAd.h
//  MSAdSDK
//  开屏广告
//  Created by yang on 2019/8/13.
//  Copyright © 2019 yang. All rights reserved.
//


#import "MSBaseAd.h"
#import "MSSplashAdDelegate.h"


NS_ASSUME_NONNULL_BEGIN

@interface MSSplashAd : MSBaseAd
/**
 *  委托对象
 */
@property(nonatomic,weak) id<MSSplashAdDelegate> delegate;
/**
 * 自定义底部视图
 */
@property(nonatomic,strong) UIView *bottomView;
 /** 自定义跳过控件 */
@property(nonatomic,strong) UIView *skipView;
/** 广告是否正在显示 */
@property(nonatomic,assign,getter=isAdShow) BOOL adShow;
/** 广告展示时间 */
@property(nonatomic,assign) NSInteger showTime;
/**
 获取广告平台
 */
@property(nonatomic,assign,readonly) MSPlatform platform;
//加载并显示
- (void)loadAndShowSplashAd:(NSString *)pid;
/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 *  提示: Splash广告只支持竖屏
 *  @param window 展示全屏开屏的容器
 *  注意⚠️sdk内部是weak引用window，保证展现广告过程中window不会被释放
 *  @param pid 广告id
 */
- (void)loadAndShowSplashAd:(NSString *)pid inWindow:(UIWindow *)window;
/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 *  提示: Splash广告只支持竖屏
 *  @param window 展示全屏开屏的容器
 *  注意⚠️sdk内部是weak引用window，保证展现广告过程中window不会被释放
 *  @param pid 广告id
 *  @param vc 弹出广告详情页的控制器
    注意⚠️sdk内部是weak引用vc，保证展现广告过程中vc不会被释放
 *  ⚠️ 以上参数均为必传项
 */
- (void)loadAndShowSplashAd:(NSString *)pid
                   inWindow:(UIWindow *)window
         rootViewController:(UIViewController *)vc;
//加载
- (void)loadSplashAd:(NSString *)pid;
//显示
- (void)showSplashAd;
//取消加载
-(void)cancel;

@end

NS_ASSUME_NONNULL_END
