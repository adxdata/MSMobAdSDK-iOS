//
//  MSADBaseObject.h
//  MSAdSDK
//
//  Created by lj on 2020/7/24.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSBaseObjectAd : NSObject
/** 广告位id */
@property (nonatomic, strong) NSString *pid;



/** 广告类型 */
@property (assign, nonatomic)MSAdType adType;
/*
 * 访问MS服务器，加载广告数据
 */
- (void)loadAd:(NSString *)pid;


@end

NS_ASSUME_NONNULL_END
