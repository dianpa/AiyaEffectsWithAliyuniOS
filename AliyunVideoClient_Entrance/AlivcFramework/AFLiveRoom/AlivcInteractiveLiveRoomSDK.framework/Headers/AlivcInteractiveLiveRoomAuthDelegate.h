//
//  AlivcInteractiveLiveRoomAuthDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by Charming04 on 2018/5/21.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AlivcInteractiveLiveRoomAuthDelegate <NSObject>

@required

- (void)onStsWillBeExpireSoonWithAccessKey:(NSString *)accessKey
                                 secretKey:(NSString *)secretKey
                                expireTime:(NSString *)expireTime
                                     token:(NSString *)token
                                 afterTime:(NSUInteger)time;

- (void)onStsExpiredWithAccessKey:(NSString *)accessKey
                        secretKey:(NSString *)secretKey
                       expireTime:(NSString *)expireTime
                            token:(NSString *)token;

@end
