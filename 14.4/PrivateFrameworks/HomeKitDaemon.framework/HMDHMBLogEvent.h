//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDHMBLogEvent : HMDLogEvent
{
    int _containerType;
    int _zoneType;
}

@property(readonly) int zoneType; // @synthesize zoneType=_zoneType;
@property(readonly) int containerType; // @synthesize containerType=_containerType;
- (id)initWithEventType:(id)arg1 cloudZoneID:(id)arg2;

@end

