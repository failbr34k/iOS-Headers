//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INReadAnnouncementIntentExport-Protocol.h>

@class NSString;

@interface INReadAnnouncementIntent : INIntent <INReadAnnouncementIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setUserNotificationType:(long long)arg1;
@property(readonly, nonatomic) long long userNotificationType;
- (void)setStartAnnouncementIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *startAnnouncementIdentifier;
- (void)setReadType:(long long)arg1;
@property(readonly, nonatomic) long long readType;
- (id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

