//
//  NSDictionary+JSONData.h
//  AFNetworking
//
//  Created by YouXianMing on 15/5/20.
//  Copyright (c) 2015年 YouXianMing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (JSONData)

/**
 *  转换成JSON串字符串（没有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toJSONString;

/**
*  转换成JSON串字符串并去掉/（没有可读性）
*
*  @return JSON字符串
*/
- (NSString *)toJSONStringAndReplaceSlash;

/**
 *  转换成JSON串字符串（有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toReadableJSONString;

/**
 *  转换成JSON串字符串并去掉/（有可读性）
 *
 *  @return JSON字符串
 */
- (NSString *)toReadableJSONStringAndReplaceSlash;

/**
 *  转换成JSON数据
 *
 *  @return JSON数据
 */
- (NSData *)toJSONData;

/*
 将 json 字符串转换为字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
@end
