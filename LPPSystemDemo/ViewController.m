//
//  ViewController.m
//  LPPSystemDemo
//
//  Created by apple on 16/9/9.
//  Copyright © 2016年 Johnny. All rights reserved.
//

#import "ViewController.h"
#import "NSDate+DateUtil.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSDate *todayDate  = [NSDate date];
    NSDate *beforeDate = [NSDate dateWithDaysBeforeNow:100];
    NSLog(@"beforeDate : %@",[beforeDate minuteDescription]);
    NSLog(@"formattedTime : %@",[beforeDate formattedTime]);
    NSLog(@"minuteDescription : %@",[beforeDate minuteDescription]);
    NSLog(@"timeIntervalDescription : %@",[beforeDate timeIntervalDescription]);
    NSLog(@"formattedDateDescription : %@",[beforeDate formattedDateDescription]);
    NSLog(@"formattedTime : %@",[beforeDate formattedTime]);
    NSLog(@"distanceInDaysToDate : %ld",(long)[beforeDate distanceInDaysToDate:todayDate]);
    NSLog(@"dateAtStartOfDay : %@",[beforeDate dateAtStartOfDay]);
    
    NSLog(@"nthWeekday : %ld",(long)beforeDate.nthWeekday);
    

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
