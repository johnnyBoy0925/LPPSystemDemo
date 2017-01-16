//
//  NSDateFormatter+Category.h
//  LPPSystemDemo
//
//  Created by apple on 16/9/21.
//  Copyright © 2016年 Johnny. All rights reserved.
//

#import <Foundation/Foundation.h>

#define FORMATEDATE  @"yyyy-MM-dd HH:mm:ss"
#define FORMATEDATE1 @"yyyy-MM-dd"

@interface NSDateFormatter (Category)

+ (id)dateFormatter;

+ (id)dateFormatterWithFormat:(NSString *)dateFormat;

+ (id)defaultDateFormatter;/*yyyy-MM-dd HH:mm:ss*/

@end
