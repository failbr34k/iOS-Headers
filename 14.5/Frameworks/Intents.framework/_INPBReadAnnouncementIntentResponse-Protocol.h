//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAnnouncementRecord;

@protocol _INPBReadAnnouncementIntentResponse <NSObject>
+ (Class)announcementRecordsType;
@property(readonly, nonatomic) unsigned long long announcementRecordsCount;
@property(copy, nonatomic) NSArray *announcementRecords;
- (_INPBAnnouncementRecord *)announcementRecordsAtIndex:(unsigned long long)arg1;
- (void)addAnnouncementRecords:(_INPBAnnouncementRecord *)arg1;
- (void)clearAnnouncementRecords;
@end

