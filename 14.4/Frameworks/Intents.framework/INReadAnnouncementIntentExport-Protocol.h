//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INReadAnnouncementIntentExport <NSObject, JSExport>
@property(nonatomic) long long userNotificationType;
@property(copy, nonatomic) NSString *startAnnouncementIdentifier;
@property(nonatomic) long long readType;
- (id)init;
@end

