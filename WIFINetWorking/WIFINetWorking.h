//
//  WIFINetWorking.h
//  WIFIDemo
//
//  Created by apple on 17/9/28.
//  Copyright © 2017年 diqin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WIFINetWorking : NSObject



/** 获取WIFI名称 只对真机wifi连接有效，如果是模拟器和真机4G网络则都为nil */
+(NSString *)currentWifiSSID;



/** 获取本机在当前wifi中的ip地址，模拟器真机均可获取 */
+(NSString *)localWiFiIPAddress;


@end
