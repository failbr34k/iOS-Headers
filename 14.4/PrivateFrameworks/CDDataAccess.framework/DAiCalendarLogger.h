//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CDDataAccess/ICSLoggingDelegate-Protocol.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
{
}

+ (id)sharedLogger;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)registerWithiCalendar;

@end

