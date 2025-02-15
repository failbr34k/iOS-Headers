//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUserDefaults;

@interface VCMetricCheckIn : NSObject
{
    NSDate *_currentDate;
    long long _mode;
    NSUserDefaults *_userDefaults;
}

+ (id)recentCheckInWithMode:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (id)checkInKey;
@property(readonly, copy, nonatomic) NSDate *intervalStartDate;
@property(readonly, copy, nonatomic) NSDate *checkInDate;
- (void)updateCheckInToNow;
- (_Bool)isCheckInAllowed;
- (id)calendar;
- (id)initWithCurrentDate:(id)arg1 mode:(long long)arg2 defaults:(id)arg3;

@end

