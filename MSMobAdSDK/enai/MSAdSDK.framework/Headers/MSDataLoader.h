//
//  MSLoader.h
//  MSAdSDK
//
//  Created by Liumaos on 2020/7/6.
//  Copyright © 2020 XiXiHaha. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSDataLoader : NSObject

-(void) download:(NSURL*)url
        callback:(void (^)(NSURLResponse *response, NSURL *filePath, NSError *error))callback;

+(void) clearCache;

@end

NS_ASSUME_NONNULL_END
