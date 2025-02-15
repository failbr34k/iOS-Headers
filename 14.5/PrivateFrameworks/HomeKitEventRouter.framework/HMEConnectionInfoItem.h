//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMEPendingEventsCollection, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMEConnectionInfoItem : NSObject
{
    _Bool _hasPendingRequest;
    NSUUID *_identifier;
    HMEPendingEventsCollection *_pendingEventItems;
    NSDate *_expiry;
    NSDate *_debounceStartTime;
    id _connection;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPendingRequest; // @synthesize hasPendingRequest=_hasPendingRequest;
@property(nonatomic) __weak id connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *debounceStartTime; // @synthesize debounceStartTime=_debounceStartTime;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(readonly, nonatomic) HMEPendingEventsCollection *pendingEventItems; // @synthesize pendingEventItems=_pendingEventItems;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (_Bool)hasEvents;
- (void)performRequestWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 expiry:(id)arg2;

@end

