//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadSHOWFULLNAME;
    NSNumber *_payloadHideLocalUsers;
    NSNumber *_payloadIncludeNetworkUser;
    NSNumber *_payloadHideAdminUsers;
    NSNumber *_payloadSHOWOTHERUSERSMANAGED;
    NSString *_payloadAdminHostInfo;
    NSArray *_payloadAllowList;
    NSArray *_payloadDenyList;
    NSNumber *_payloadHideMobileAccounts;
    NSNumber *_payloadShutDownDisabled;
    NSNumber *_payloadRestartDisabled;
    NSNumber *_payloadSleepDisabled;
    NSNumber *_payloadDisableConsoleAccess;
    NSString *_payloadLoginwindowText;
    NSNumber *_payloadShutDownDisabledWhileLoggedIn;
    NSNumber *_payloadRestartDisabledWhileLoggedIn;
    NSNumber *_payloadPowerOffDisabledWhileLoggedIn;
    NSNumber *_payloadLogOutDisabledWhileLoggedIn;
    NSNumber *_payloadDisableScreenLockImmediate;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withSHOWFULLNAME:(id)arg2 withHideLocalUsers:(id)arg3 withIncludeNetworkUser:(id)arg4 withHideAdminUsers:(id)arg5 withSHOWOTHERUSERSMANAGED:(id)arg6 withAdminHostInfo:(id)arg7 withAllowList:(id)arg8 withDenyList:(id)arg9 withHideMobileAccounts:(id)arg10 withShutDownDisabled:(id)arg11 withRestartDisabled:(id)arg12 withSleepDisabled:(id)arg13 withDisableConsoleAccess:(id)arg14 withLoginwindowText:(id)arg15 withShutDownDisabledWhileLoggedIn:(id)arg16 withRestartDisabledWhileLoggedIn:(id)arg17 withPowerOffDisabledWhileLoggedIn:(id)arg18 withLogOutDisabledWhileLoggedIn:(id)arg19 withDisableScreenLockImmediate:(id)arg20;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadDisableScreenLockImmediate; // @synthesize payloadDisableScreenLockImmediate=_payloadDisableScreenLockImmediate;
@property(copy, nonatomic) NSNumber *payloadLogOutDisabledWhileLoggedIn; // @synthesize payloadLogOutDisabledWhileLoggedIn=_payloadLogOutDisabledWhileLoggedIn;
@property(copy, nonatomic) NSNumber *payloadPowerOffDisabledWhileLoggedIn; // @synthesize payloadPowerOffDisabledWhileLoggedIn=_payloadPowerOffDisabledWhileLoggedIn;
@property(copy, nonatomic) NSNumber *payloadRestartDisabledWhileLoggedIn; // @synthesize payloadRestartDisabledWhileLoggedIn=_payloadRestartDisabledWhileLoggedIn;
@property(copy, nonatomic) NSNumber *payloadShutDownDisabledWhileLoggedIn; // @synthesize payloadShutDownDisabledWhileLoggedIn=_payloadShutDownDisabledWhileLoggedIn;
@property(copy, nonatomic) NSString *payloadLoginwindowText; // @synthesize payloadLoginwindowText=_payloadLoginwindowText;
@property(copy, nonatomic) NSNumber *payloadDisableConsoleAccess; // @synthesize payloadDisableConsoleAccess=_payloadDisableConsoleAccess;
@property(copy, nonatomic) NSNumber *payloadSleepDisabled; // @synthesize payloadSleepDisabled=_payloadSleepDisabled;
@property(copy, nonatomic) NSNumber *payloadRestartDisabled; // @synthesize payloadRestartDisabled=_payloadRestartDisabled;
@property(copy, nonatomic) NSNumber *payloadShutDownDisabled; // @synthesize payloadShutDownDisabled=_payloadShutDownDisabled;
@property(copy, nonatomic) NSNumber *payloadHideMobileAccounts; // @synthesize payloadHideMobileAccounts=_payloadHideMobileAccounts;
@property(copy, nonatomic) NSArray *payloadDenyList; // @synthesize payloadDenyList=_payloadDenyList;
@property(copy, nonatomic) NSArray *payloadAllowList; // @synthesize payloadAllowList=_payloadAllowList;
@property(copy, nonatomic) NSString *payloadAdminHostInfo; // @synthesize payloadAdminHostInfo=_payloadAdminHostInfo;
@property(copy, nonatomic) NSNumber *payloadSHOWOTHERUSERSMANAGED; // @synthesize payloadSHOWOTHERUSERSMANAGED=_payloadSHOWOTHERUSERSMANAGED;
@property(copy, nonatomic) NSNumber *payloadHideAdminUsers; // @synthesize payloadHideAdminUsers=_payloadHideAdminUsers;
@property(copy, nonatomic) NSNumber *payloadIncludeNetworkUser; // @synthesize payloadIncludeNetworkUser=_payloadIncludeNetworkUser;
@property(copy, nonatomic) NSNumber *payloadHideLocalUsers; // @synthesize payloadHideLocalUsers=_payloadHideLocalUsers;
@property(copy, nonatomic) NSNumber *payloadSHOWFULLNAME; // @synthesize payloadSHOWFULLNAME=_payloadSHOWFULLNAME;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

