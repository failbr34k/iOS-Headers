//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDebugDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BSSettings, FBSDisplayConfiguration, FBSDisplayIdentity, NSArray, NSSet, NSString;

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying>
{
    FBSDisplayConfiguration *_displayConfiguration;
    struct CGRect _frame;
    double _level;
    long long _interfaceOrientation;
    _Bool _foreground;
    long long _interruptionPolicy;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    _Bool _prefersProcessTaskSuspensionWhileSceneForeground;
    long long _isOccluded;
    _Bool _occluded;
    NSSet *_ignoreOcclusionReasons;
}

+ (_Bool)_isMutable;
+ (id)settings;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long interruptionPolicy; // @synthesize interruptionPolicy=_interruptionPolicy;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (_Bool)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (_Bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(_Bool)arg2;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(_Bool)arg1;
- (_Bool)prefersProcessTaskSuspensionWhileSceneForeground;
- (id)transientLocalSettings;
- (_Bool)isIgnoringOcclusions;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
- (_Bool)isOccluded;
@property(readonly, copy, nonatomic) NSArray *occlusions;
@property(readonly, nonatomic, getter=isBackgrounded) _Bool backgrounded;
- (struct CGRect)bounds;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

