//
//  MSAdSDK.h
//  MSAdSDK
//
//  Created by yang on 2019/8/5.
//  Copyright © 2019年 yang. All rights reserved.
//

#import "MSPublicHeader.h"

@interface MSAdSDK : NSObject

//美数SDK入口 设置美数AppID
+ (void)setAppId:(NSString *)appId;

//打开测试模式
+ (void)setTestMode:(BOOL)isTestMode;

//日志打印
+(void) setLogLevel:(MSLogLevel) level;

//美数VersionName
+ (NSString *) getVersionName;

//美数VersionCode
+ (NSInteger)  getVersionCode;

//获取平台版本号
+ (NSString*)  platformVersion:(MSShowType) platform;

//设置支持的通信协议
+ (void)setSecure:(MSSecure) secure;

//是否支持https
+ (void)setHttpsSupport:(BOOL)isSupportHttps;

@end
