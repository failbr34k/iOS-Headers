//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCacheBoundingStrategy-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CNTimeProvider;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy>
{
    double _ttl;
    unsigned long long _renewalOptions;
    id <CNTimeProvider> _timeProvider;
    NSMutableDictionary *_timestamps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *timestamps; // @synthesize timestamps=_timestamps;
@property(readonly, nonatomic) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) unsigned long long renewalOptions; // @synthesize renewalOptions=_renewalOptions;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
- (void)updateTimestampForKey:(id)arg1;
- (_Bool)shouldEvictKey:(id)arg1;
- (void)willAccessKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3;
- (id)initWithTTL:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

