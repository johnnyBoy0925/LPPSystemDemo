//
//  NSDateFormatter+Category.h
//  LPPSystemDemo
//
//  Created by apple on 16/9/21.
//  Copyright © 2016年 Johnny. All rights reserved.
//


#import "NSDateFormatter+Category.h"

@implementation NSDateFormatter (Category)

+ (id)dateFormatter
{
    return [[self alloc] init];
}

+ (id)dateFormatterWithFormat:(NSString *)dateFormat
{
    NSDateFormatter *dateFormatter = [[self alloc] init];
    dateFormatter.dateFormat = dateFormat;
    return dateFormatter;
}

+ (id)defaultDateFormatter
{
    return [self dateFormatterWithFormat:FORMATEDATE];
}

@end
