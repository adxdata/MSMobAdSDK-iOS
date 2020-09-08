//
//  MSFeedVideoDelegate.h
//  MSAdSDK
//
//  Created by lj on 2020/9/1.
//  Copyright © 2020 Adxdata. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MSFeedVideoDelegate <NSObject>
@optional

- (void)msFeedVideoFinish;

- (void)msFeedVideoStart;

- (void)msFeedVideoPause;

- (void)msFeedVideoError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
