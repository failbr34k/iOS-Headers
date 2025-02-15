//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVQueueController-Protocol.h>
#import <MediaPlaybackCore/MPArtworkDataSource-Protocol.h>
#import <MediaPlaybackCore/MPCContinueListeningRadioQueueProviding-Protocol.h>
#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPCQueueItemProviding-Protocol.h>
#import <MediaPlaybackCore/MPSectionedIdentifierListAnnotationDelegate-Protocol.h>
#import <MediaPlaybackCore/MPShuffleableSectionedIdentifierListDelegate-Protocol.h>
#import <MediaPlaybackCore/MSVSegmentedCoding-Protocol.h>

@class MPAVItem, MPCPlaybackEngine, MPIdentifierSet, MPSectionedIdentifierList, MPSectionedIdentifierListPosition, MPShuffleableSectionedIdentifierList, NSArray, NSError, NSMutableDictionary, NSString;
@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;

@interface MPCQueueController : NSObject <MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPCContinueListeningRadioQueueProviding, MPCPlaybackEngineEventObserving, MPArtworkDataSource, MPCQueueItemProviding, MPAVQueueController, MSVSegmentedCoding>
{
    unsigned long long _stateHandle;
    _Bool _hasUserMutations;
    _Bool _allowsQueueModifications;
    _Bool _autoPlayIsTriggered;
    NSString *_preferredFirstContentItemID;
    MPAVItem *_currentItem;
    id <MPAVQueueControllerDelegate> _delegate;
    id <MPAVQueueCoordinating> _queueCoordinator;
    long long _repeatType;
    long long _shuffleType;
    MPCPlaybackEngine *_playbackEngine;
    NSString *_nextContentItemID;
    NSString *_deferredNextContentItemAnchorID;
    NSError *_restorationError;
    NSMutableDictionary *_coderVersions;
    long long _nextContentItemIDReason;
    long long _state;
    long long _autoPlayState;
    MPSectionedIdentifierListPosition *_autoPlayEndPosition;
    NSString *_restoreLastStartTimePositionToContentItemID;
    double _lastSavedTime;
    MPIdentifierSet *_missingIdentifierSetForDebugging;
    NSArray *_previousSectionIDsForDebugging;
    id _rtcSessionHierarchyToken;
    MPShuffleableSectionedIdentifierList *_identifierList;
    MPSectionedIdentifierList *_autoPlayIdentifierList;
    NSMutableDictionary *_dataSources;
}

+ (_Bool)supportsSecureCoding;
+ (id)describePlayer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) MPSectionedIdentifierList *autoPlayIdentifierList; // @synthesize autoPlayIdentifierList=_autoPlayIdentifierList;
@property(retain, nonatomic) MPShuffleableSectionedIdentifierList *identifierList; // @synthesize identifierList=_identifierList;
@property(retain, nonatomic) id rtcSessionHierarchyToken; // @synthesize rtcSessionHierarchyToken=_rtcSessionHierarchyToken;
@property(copy, nonatomic) NSArray *previousSectionIDsForDebugging; // @synthesize previousSectionIDsForDebugging=_previousSectionIDsForDebugging;
@property(copy, nonatomic) MPIdentifierSet *missingIdentifierSetForDebugging; // @synthesize missingIdentifierSetForDebugging=_missingIdentifierSetForDebugging;
@property(readonly, nonatomic) double lastSavedTime; // @synthesize lastSavedTime=_lastSavedTime;
@property(copy, nonatomic) NSString *restoreLastStartTimePositionToContentItemID; // @synthesize restoreLastStartTimePositionToContentItemID=_restoreLastStartTimePositionToContentItemID;
@property(nonatomic) _Bool autoPlayIsTriggered; // @synthesize autoPlayIsTriggered=_autoPlayIsTriggered;
@property(retain, nonatomic) MPSectionedIdentifierListPosition *autoPlayEndPosition; // @synthesize autoPlayEndPosition=_autoPlayEndPosition;
@property(nonatomic) long long autoPlayState; // @synthesize autoPlayState=_autoPlayState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long nextContentItemIDReason; // @synthesize nextContentItemIDReason=_nextContentItemIDReason;
@property(retain, nonatomic) NSMutableDictionary *coderVersions; // @synthesize coderVersions=_coderVersions;
@property(copy, nonatomic) NSError *restorationError; // @synthesize restorationError=_restorationError;
@property(copy, nonatomic) NSString *deferredNextContentItemAnchorID; // @synthesize deferredNextContentItemAnchorID=_deferredNextContentItemAnchorID;
@property(copy, nonatomic) NSString *nextContentItemID; // @synthesize nextContentItemID=_nextContentItemID;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(retain, nonatomic) id <MPAVQueueCoordinating> queueCoordinator; // @synthesize queueCoordinator=_queueCoordinator;
@property(nonatomic) __weak id <MPAVQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) _Bool allowsQueueModifications; // @synthesize allowsQueueModifications=_allowsQueueModifications;
@property(readonly, copy, nonatomic) NSString *preferredFirstContentItemID; // @synthesize preferredFirstContentItemID=_preferredFirstContentItemID;
@property(readonly, nonatomic) _Bool hasUserMutations; // @synthesize hasUserMutations=_hasUserMutations;
- (void)_transitionToAutoPlayState:(long long)arg1;
- (id)_stateDictionaryIncludingIdentifierList:(_Bool)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (long long)_privateListeningSourceForSection:(id)arg1;
- (id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg1 wasInvalid:(_Bool *)arg2;
- (id)_itemForPair:(id)arg1;
- (id)_itemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;
- (id)_identifierListForSection:(id)arg1;
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;
- (id)_firstContentItemIDInSectionWithIdentifier:(id)arg1;
- (id)_firstContentItemID;
- (void)_emitEventsForPlaybackBehaviorChange;
@property(readonly, nonatomic, getter=_autoplayMode) long long autoplayMode;
- (void)_emitEventsForItemChangeFromItem:(id)arg1 toCurrentItem:(id)arg2;
- (void)_emitEventsForAddingPlaybackContext:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_currentItemDidChangeFromItem:(id)arg1 toItem:(id)arg2;
- (id)_contentItemIDWithOffset:(long long)arg1 fromItem:(id)arg2 mode:(long long)arg3 didReachEnd:(_Bool *)arg4;
- (_Bool)_allDataSourcesSupportInsertionPositionLast;
- (void)_applyVolumeNormalizationForQueuedItems;
- (void)_addAutoPlayPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_accountForAutoPlay;
- (id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg1;
- (_Bool)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2;
- (void)playerItemDidBecomeCurrent:(id)arg1;
- (void)playerItemDidResignCurrent:(id)arg1;
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(_Bool)arg4;
- (id)itemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2;
- (void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidChangeItems:(id)arg2 inSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidRemoveItems:(id)arg2 fromSection:(id)arg3;
- (void)sectionedIdentifierList:(id)arg1 dataSourceDidMoveItems:(id)arg2 inSection:(id)arg3;
- (id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2;
- (id)debugDescriptionForSection:(id)arg1;
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
- (id)queueReferencesWithMaxCount:(long long)arg1;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 didLoadItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 willLoadItem:(id)arg2;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
@property(readonly, nonatomic) _Bool userCanEnableAutoPlay;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)reset;
- (void)removeContentItemID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long supportedInsertionPositions;
@property(nonatomic) _Bool autoPlayEnabled;
@property(readonly, copy, nonatomic) NSString *revisionString;
- (void)reshuffle;
- (void)resetWithIdentifier:(id)arg1;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)moveContentItemID:(id)arg1 beforeContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)jumpToFirstContentItem;
- (void)jumpToContentItemID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)jumpToContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;
- (_Bool)isPlaceholderItemForContentItemID:(id)arg1;
- (long long)displayIndexForContentItemID:(id)arg1;
@property(readonly, nonatomic) long long displayCount;
- (void)finalizeStateRestorationWithCompletion:(CDUnknownBlockType)arg1;
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;
- (id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(_Bool *)arg3;
- (id)contentItemIDAtIndex:(long long)arg1;
- (void)clearUpNext;
- (_Bool)canSkipItem:(id)arg1;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 userModification:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)incrementVersionForSegment:(id)arg1;
- (long long)versionForSegment:(id)arg1;
- (void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2;
- (id)segmentForCodingKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isCurrentItemFromAutoPlay) _Bool currentItemFromAutoPlay;
@property(readonly, nonatomic) _Bool containsTransportableContent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

