//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentForSiriVOXSounds-Protocol.h>
#import <AssistantServices/AFExperimentForSiriVOXTapToSiriBehavior-Protocol.h>
#import <AssistantServices/AFInvocationFeedbackExperiment-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment, NSCopying, NSSecureCoding>
{
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long deploymentReason; // @synthesize deploymentReason=_deploymentReason;
@property(readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties; // @synthesize deploymentGroupProperties=_deploymentGroupProperties;
@property(readonly, copy, nonatomic) NSString *deploymentGroupIdentifier; // @synthesize deploymentGroupIdentifier=_deploymentGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, copy, nonatomic) NSString *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5;
- (void)logExperimentExposureForSiriVOXSounds;
@property(readonly, nonatomic) _Bool playsSessionInactiveSoundForSiriVOXSounds;
@property(readonly, nonatomic) _Bool playsTwoShotSoundForSiriVOXSounds;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (void)logExperimentExposureForTapToSiriBehavior;
@property(readonly, nonatomic) _Bool playsSound;
- (_Bool)isFeatureGroupFourEnabled;
- (_Bool)isFeatureGroupThreeEnabled;
- (_Bool)isFeatureGroupTwoEnabled;
- (_Bool)isFeatureGroupOneEnabled;
- (void)logExperimentExposureForInvocationFeedbacks;
@property(readonly, nonatomic) unsigned long long featureGroups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

