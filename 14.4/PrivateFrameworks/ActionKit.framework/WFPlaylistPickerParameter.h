//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAppleMusicAccessResource, WFPlaylistSubstitutableState;

@interface WFPlaylistPickerParameter : WFEnumerationParameter
{
    _Bool _showLibrary;
    _Bool _generatingNotifications;
    NSArray *_possibleStates;
    WFPlaylistSubstitutableState *_entireLibraryState;
    WFAppleMusicAccessResource *_appleMusicAccessResource;
}

+ (id)referencedActionResourceClasses;
+ (_Bool)hasPlaylistAccess;
- (void).cxx_destruct;
@property(retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource; // @synthesize appleMusicAccessResource=_appleMusicAccessResource;
@property(nonatomic) _Bool generatingNotifications; // @synthesize generatingNotifications=_generatingNotifications;
@property(retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState; // @synthesize entireLibraryState=_entireLibraryState;
@property(readonly, nonatomic) _Bool showLibrary; // @synthesize showLibrary=_showLibrary;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;
- (void)updateChangeNotificationRegistration;
- (void)authorizationStatusDidChange;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

