//
//  MSAdSDK.h
//  MSAdSDK
//
//  Created by yang on 2019/8/5.
//  Copyright © 2019年 yang. All rights reserved.
//

#import "MSPublicHeader.h"

@interface MSAdSDK : NSObject

//MSSDK入口 设置MSAppID
+ (void)setAppId:(NSString *)appId;

//打开测试模式
+ (void)setTestMode:(BOOL)isTestMode;

//日志打印
+(void) setLogLevel:(MSLogLevel) level;

//MS VersionName
+ (NSString *) getVersionName;

//MS VersionCode
+ (NSInteger)  getVersionCode;

//获取平台版本号
+ (NSString*)  platformVersion:(MSPlatform) platform;

//设置支持的通信协议
+ (void)setSecure:(MSSecure) secure;

//是否支持https
+ (void)setHttpsSupport:(BOOL)isSupportHttps;

@end
