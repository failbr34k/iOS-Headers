//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>

@class NSString, NSUUID;

@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(NSUUID *)arg1 error:(id *)arg2;
- (_Bool)isWhitelistedEmergencyNumberForDigits:(NSString *)arg1 subscriptionUUID:(NSUUID *)arg2 error:(id *)arg3;
- (_Bool)isEmergencyNumberForDigits:(NSString *)arg1 subscriptionUUID:(NSUUID *)arg2 error:(id *)arg3;
- (_Bool)inEmergencyMode;
@end

