//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSData, NSNumber, NSString;

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext
{
    NSData *_weeklyReportData;
    double _deltaScreenTimeUsage;
    NSNumber *_totalUsage;
    NSString *_notificationBodyKey;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *notificationBodyKey; // @synthesize notificationBodyKey=_notificationBodyKey;
@property(copy, nonatomic) NSNumber *totalUsage; // @synthesize totalUsage=_totalUsage;
@property(nonatomic) double deltaScreenTimeUsage; // @synthesize deltaScreenTimeUsage=_deltaScreenTimeUsage;
@property(retain, nonatomic) NSData *weeklyReportData; // @synthesize weeklyReportData=_weeklyReportData;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

