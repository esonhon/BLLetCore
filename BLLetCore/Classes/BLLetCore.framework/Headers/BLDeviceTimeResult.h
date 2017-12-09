//
//  DeviceTimeResult.h
//  Let
//
//  Created by yzm on 16/5/17.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import "BLBaseResult.h"

@interface BLDeviceTimeResult : BLBaseResult

/**
 Device time string in UTC-8
 */
@property (nonatomic, strong, getter=getTime) NSString *time;
/**
 Device time diff with local time
 */
@property (nonatomic, assign) NSInteger difftime;

@end
