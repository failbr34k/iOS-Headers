//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/CALNNotificationRecord.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class CALNNotificationContent, NSDate, NSString;

@interface CALNMutableNotificationRecord : CALNNotificationRecord <NSCopying>
{
}

@property(nonatomic) _Bool shouldPlaySound; // @dynamic shouldPlaySound;
@property(nonatomic) _Bool shouldPresentAlert; // @dynamic shouldPresentAlert;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) CALNNotificationContent *content; // @dynamic content;
@property(copy, nonatomic) NSString *sourceClientIdentifier; // @dynamic sourceClientIdentifier;
@property(copy, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

