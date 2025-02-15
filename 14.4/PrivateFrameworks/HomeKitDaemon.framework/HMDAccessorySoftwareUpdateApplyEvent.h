//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDCoreAnalyticsLogging-Protocol.h>

@class HMFSoftwareVersion, NSString;

@interface HMDAccessorySoftwareUpdateApplyEvent : HMDLogEvent <HMDCoreAnalyticsLogging>
{
    NSString *_manufacturer;
    NSString *_model;
    HMFSoftwareVersion *_activeVersion;
    HMFSoftwareVersion *_stagedVersion;
    unsigned long long _advertisedDuration;
    unsigned long long _totalAllowedDuration;
    long long _status;
}

+ (id)eventWithManufacturer:(id)arg1 model:(id)arg2 activeVersion:(id)arg3 stagedVersion:(id)arg4 advertisedDuration:(unsigned long long)arg5 totalAllowedDuration:(unsigned long long)arg6 status:(long long)arg7;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly) long long status; // @synthesize status=_status;
@property(readonly) unsigned long long totalAllowedDuration; // @synthesize totalAllowedDuration=_totalAllowedDuration;
@property(readonly) unsigned long long advertisedDuration; // @synthesize advertisedDuration=_advertisedDuration;
@property(readonly) HMFSoftwareVersion *stagedVersion; // @synthesize stagedVersion=_stagedVersion;
@property(readonly) HMFSoftwareVersion *activeVersion; // @synthesize activeVersion=_activeVersion;
@property(readonly) NSString *model; // @synthesize model=_model;
@property(readonly) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (id)serializedEvent;
- (id)eventName;
- (id)initWithManufacturer:(id)arg1 model:(id)arg2 activeVersion:(id)arg3 stagedVersion:(id)arg4 advertisedDuration:(unsigned long long)arg5 totalAllowedDuration:(unsigned long long)arg6 status:(long long)arg7;

@end

