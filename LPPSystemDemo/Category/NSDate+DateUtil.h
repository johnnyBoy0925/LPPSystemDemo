//
//  NSDate+DateUtil.h
//  LPPSystemDemo
//
//  Created by apple on 16/9/21.
//  Copyright © 2016年 Johnny. All rights reserved.
//

#import <Foundation/Foundation.h>

#define D_MINUTE	60
#define D_HOUR		3600
#define D_DAY		86400
#define D_WEEK		604800
#define D_YEAR		31556926

@interface NSDate (DateUtil)

#pragma mark - NSString NSDate 时间戳 时间描述 转换

/**
 *  Date -> NSString
 */

+ (NSString *)formatStringWithDate:(NSDate *)date;
+ (NSString *)formatStringWithDate:(NSDate *)date WithDateFormate:(NSString *)dateFormate;

/**
 *  NSString -> NSDate
 */

+ (NSDate *)dateWithString:(NSString *)dateString WithFormate:(NSString *)dateFormate;

//格式化时间格式
- (NSString *)formattedTime;

//距离当前的时间间隔描述
- (NSString *)timeIntervalDescription;

//精确到分钟的日期描述
- (NSString *)minuteDescription;

//格式化日期描述
- (NSString *)formattedDateDescription;

//时间戳
- (double)timeIntervalSince1970InMilliSecond;

//时间戳 -> NSDate
+ (NSDate *)dateWithTimeIntervalInMilliSecondSince1970:(double)timeIntervalInMilliSecond;

//时间戳 -> NSString
+ (NSString *)formattedTimeFromTimeInterval:(long long)time;

#pragma mark - 与当前时间的关系时间操作
+ (NSDate *) dateTomorrow;
+ (NSDate *) dateYesterday;
+ (NSDate *) dateWithDaysFromNow:      (NSInteger) days;
+ (NSDate *) dateWithDaysBeforeNow:    (NSInteger) days;
+ (NSDate *) dateWithHoursFromNow:     (NSInteger) dHours;
+ (NSDate *) dateWithHoursBeforeNow:   (NSInteger) dHours;
+ (NSDate *) dateWithMinutesFromNow:   (NSInteger) dMinutes;
+ (NSDate *) dateWithMinutesBeforeNow: (NSInteger) dMinutes;

#pragma mark - 时间比较
- (BOOL) isEarlierThanDate: (NSDate *) aDate; //在aDate时间之前
- (BOOL) isLaterThanDate: (NSDate *) aDate;   //在aDate时间之后
- (BOOL) isEqualToDateIgnoringTime: (NSDate *) aDate;
- (BOOL) isToday;
- (BOOL) isTomorrow;
- (BOOL) isYesterday;
- (BOOL) isSameWeekAsDate: (NSDate *) aDate;  //是否在同一周
- (BOOL) isThisWeek;
- (BOOL) isNextWeek;
- (BOOL) isLastWeek;
- (BOOL) isSameMonthAsDate: (NSDate *) aDate; //是否在同一月
- (BOOL) isThisMonth;
- (BOOL) isSameYearAsDate: (NSDate *) aDate;
- (BOOL) isThisYear;
- (BOOL) isNextYear;
- (BOOL) isLastYear;                          //上一年
- (BOOL) isInFuture;                          //未来
- (BOOL) isInPast;                            //过去

#pragma mark - 工作日、双休日
- (BOOL) isTypicallyWorkday;
- (BOOL) isTypicallyWeekend;

#pragma mark - 时间调整（加、减）
- (NSDate *) dateByAddingDays:         (NSInteger) dDays;      //加dDays天
- (NSDate *) dateBySubtractingDays:    (NSInteger) dDays; //减dDays天

- (NSDate *) dateByAddingHours:        (NSInteger) dHours;
- (NSDate *) dateBySubtractingHours:   (NSInteger) dHours;

- (NSDate *) dateByAddingMinutes:      (NSInteger) dMinutes;
- (NSDate *) dateBySubtractingMinutes: (NSInteger) dMinutes;

- (NSDate *) dateAtStartOfDay;

#pragma mark - 计算时间间隔
- (NSInteger) minutesAfterDate:    (NSDate *) aDate;
- (NSInteger) minutesBeforeDate:   (NSDate *) aDate;
- (NSInteger) hoursAfterDate:      (NSDate *) aDate;
- (NSInteger) hoursBeforeDate:     (NSDate *) aDate;
- (NSInteger) daysAfterDate:       (NSDate *) aDate;
- (NSInteger) daysBeforeDate:      (NSDate *) aDate;
- (NSInteger) distanceInDaysToDate:(NSDate *)anotherDate;

// Decomposing dates
@property (readonly) NSInteger nearestHour;
@property (readonly) NSInteger hour;
@property (readonly) NSInteger minute;
@property (readonly) NSInteger seconds;
@property (readonly) NSInteger day;
@property (readonly) NSInteger month;
@property (readonly) NSInteger week;
@property (readonly) NSInteger weekday;
@property (readonly) NSInteger nthWeekday; // e.g. 2nd Tuesday of the month == 2
@property (readonly) NSInteger year;

@end
