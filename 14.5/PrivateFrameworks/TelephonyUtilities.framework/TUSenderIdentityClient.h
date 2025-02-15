//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCoreTelephonyClient> _client;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TUCoreTelephonyClient> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)init;
- (_Bool)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYEnabledForSenderIdentityUUID:(id)arg1;
- (_Bool)isTTYAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)isRTTSupportedForSenderIdentityUUID:(id)arg1;
- (_Bool)isRTTAvailableForSenderIdentityUUID:(id)arg1;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 error:(id *)arg2;
- (_Bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (_Bool)inEmergencyMode;

@end

