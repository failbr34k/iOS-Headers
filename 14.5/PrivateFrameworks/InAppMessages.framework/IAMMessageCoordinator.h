//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMEventReceiver-Protocol.h>
#import <InAppMessages/IAMImpressionManagerDelegate-Protocol.h>
#import <InAppMessages/IAMStorageCoordinatorDelegate-Protocol.h>

@class IAMImpressionManager, IAMMessageEntryManager, IAMModalTarget, IAMStorageCoordinator, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol IAMApplicationContextProvider, IAMMessageMetricsDelegate, OS_dispatch_queue;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <IAMApplicationContextProvider> _applicationContext;
    NSMutableDictionary *_messageTargetsByTargetIdentifier;
    NSMutableDictionary *_messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSMutableDictionary *_priorityMessageEntryByTargetIdentifier;
    IAMImpressionManager *_impressionManager;
    NSMutableArray *_pendingTriggerContexts;
    IAMStorageCoordinator *_storageCoordinator;
    NSDictionary *_metadataEntryByMessageIdentifier;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager *_messageEntryManager;
    _Bool _isReadyToEvaluateMessages;
    NSString *_modalTargetIdentifier;
    IAMModalTarget *_modalTarget;
    NSDictionary *_messageGroupsByGroupIdentifier;
    id <IAMMessageMetricsDelegate> _metricsDelegate;
}

+ (id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(_Bool)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IAMApplicationContextProvider> applicationContext; // @synthesize applicationContext=_applicationContext;
@property(nonatomic) __weak id <IAMMessageMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1;
- (void)_handleMessageReachedMaximumDisplayCount:(id)arg1;
- (void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (void)_updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateMetadataOfMessageEntriesByTrigger:(id)arg1 forReceivedEvent:(id)arg2;
- (id)_dequeuePendingTriggerContexts;
- (void)_enqueuePendingTriggerContext:(id)arg1;
- (id)_filterActiveTargetIdentifiers:(id)arg1;
- (void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3;
- (void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(_Bool)arg3;
- (void)_reevaluateTargetsWithIdentifiers:(id)arg1 forTriggerContext:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(_Bool)arg3;
- (void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(_Bool)arg3;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1;
- (id)_metadataEntryForMessageIdentifier:(id)arg1;
- (id)_messageBundleIdentifiers;
- (void)_updateLastDisplayTime:(id)arg1 forMessageEntry:(id)arg2;
- (void)_reportHoldoutMessageWouldAppear:(id)arg1;
- (void)_evaluateMessagesForAllActiveTargets;
- (void)_handleUpdatedMessageEntries:(id)arg1 andMetadata:(id)arg2;
- (void)_fetchMessagesAndMetadataFromStorageCoordinator:(CDUnknownBlockType)arg1;
- (void)_startStorageCoordinatorWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3;
- (void)_setMessageGroups:(id)arg1;
- (void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2;
- (void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2;
- (void)storageCoordinatorMessageEntriesChanged:(id)arg1;
- (void)receiveEvent:(id)arg1;
- (void)reportChangedContextPropertiesContext:(id)arg1;
- (void)receiveTriggerEventContext:(id)arg1;
- (void)reportMetricsEvent:(id)arg1;
- (void)reportApplicationContextPropertiesDidChange:(id)arg1;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1;
- (void)unregisterMessageTarget:(id)arg1;
- (void)registerMessageTarget:(id)arg1;
- (void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 messageEntryProvider:(id)arg3 messageMetadataStorage:(id)arg4 propertyStorage:(id)arg5;
- (void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2;
- (void)startWithApplicationContext:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

