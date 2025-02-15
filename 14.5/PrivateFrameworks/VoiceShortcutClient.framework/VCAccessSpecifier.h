//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSCopying-Protocol.h>

@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>
{
    NSString *_associatedAppBundleIdentifier;
    NSString *_bundleIdentifier;
    long long _entitlements;
}

+ (id)accessSpecifierForTask:(struct __SecTask *)arg1;
+ (id)accessSpecifierForAuditToken:(CDStruct_6ad76789)arg1;
+ (id)accessSpecifierForXPCConnection:(id)arg1;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierUnrestricted;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
- (_Bool)allowIntentsExtensionDiscovery;
- (_Bool)isRemovalService;
- (_Bool)isSpringBoard;
- (_Bool)isSettingsApp;
- (_Bool)allowReadAccessForDonations;
- (_Bool)allowReadAccessForSleepWorkflows;
- (_Bool)allowWriteAccessForSleepWorkflows;
- (_Bool)allowHomeResidentShortcutRunning;
- (_Bool)allowBackgroundShortcutRunning;
- (_Bool)allowReadAccessToPodcastsDatabase;
- (_Bool)allowReadAccessToShortcutsLibrary;
- (_Bool)allowReadAccessForTriggers;
- (_Bool)allowWriteAccessForTriggers;
- (_Bool)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessToVoiceShortcuts;
- (_Bool)allowUnrestrictedAccess;
- (_Bool)allowConnection;
- (_Bool)hasEntitlements:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3;
- (id)init;

@end

