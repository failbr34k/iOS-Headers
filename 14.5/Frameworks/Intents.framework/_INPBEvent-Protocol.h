//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBEvent <NSObject>
+ (Class)eventDescriptorsType;
@property(readonly, nonatomic) _Bool hasEventType;
@property(retain, nonatomic) _INPBString *eventType;
@property(readonly, nonatomic) unsigned long long eventDescriptorsCount;
@property(copy, nonatomic) NSArray *eventDescriptors;
- (_INPBString *)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addEventDescriptors:(_INPBString *)arg1;
- (void)clearEventDescriptors;
@end

