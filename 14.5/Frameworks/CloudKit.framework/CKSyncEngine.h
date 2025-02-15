//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, CKNotificationListener, CKSyncEngineMetadata, NSOperationQueue;
@protocol CKSyncEngineDataSource, OS_dispatch_queue, OS_xpc_object;

@interface CKSyncEngine : NSObject
{
    _Bool _ignoringSystemConditions;
    _Bool _allowMetadataCallbackDeferral;
    _Bool _waitingForIdentityUpdate;
    _Bool _waitingForHSA2;
    _Bool _useUniqueActivityIdentifiers;
    _Bool _skipRetryOnOperationError;
    _Bool _automaticSyncingEnabled;
    id <CKSyncEngineDataSource> _dataSource;
    CKDatabase *_database;
    CKSyncEngineMetadata *_metadata;
    unsigned long long _lastNotifiedMetadataChangeCount;
    CKNotificationListener *_notificationListener;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _maxRecordCountPerBatch;
    unsigned long long _maxRecordBytesPerBatch;
    unsigned long long _maxZoneCountPerBatch;
    NSObject<OS_xpc_object> *_xpcActivityCriteriaOverrides;
    long long _lastKnownAccountStatus;
    long long _priority;
    CDUnknownBlockType _updateMetadataBlock;
}

+ (id)errorForAccountStatus:(long long)arg1;
+ (_Bool)shouldDeferAfterError:(id)arg1;
+ (void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)earliestStartDateAfterError:(id)arg1;
+ (void)setFastErrorRetry:(_Bool)arg1;
+ (_Bool)fastErrorRetry;
+ (id)userRequestedBackupActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)syncActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(_Bool)arg3 uniquenessPointer:(id)arg4;
+ (id)supportedDatabaseScopes;
- (void).cxx_destruct;
@property(nonatomic, getter=isAutomaticSyncingEnabled) _Bool automaticSyncingEnabled; // @synthesize automaticSyncingEnabled=_automaticSyncingEnabled;
@property(nonatomic) _Bool skipRetryOnOperationError; // @synthesize skipRetryOnOperationError=_skipRetryOnOperationError;
@property(copy, nonatomic) CDUnknownBlockType updateMetadataBlock; // @synthesize updateMetadataBlock=_updateMetadataBlock;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool useUniqueActivityIdentifiers; // @synthesize useUniqueActivityIdentifiers=_useUniqueActivityIdentifiers;
@property(nonatomic) long long lastKnownAccountStatus; // @synthesize lastKnownAccountStatus=_lastKnownAccountStatus;
@property(nonatomic, getter=isWaitingForHSA2) _Bool waitingForHSA2; // @synthesize waitingForHSA2=_waitingForHSA2;
@property(nonatomic, getter=isWaitingForIdentityUpdate) _Bool waitingForIdentityUpdate; // @synthesize waitingForIdentityUpdate=_waitingForIdentityUpdate;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // @synthesize xpcActivityCriteriaOverrides=_xpcActivityCriteriaOverrides;
@property(nonatomic) _Bool allowMetadataCallbackDeferral; // @synthesize allowMetadataCallbackDeferral=_allowMetadataCallbackDeferral;
@property(nonatomic) unsigned long long maxZoneCountPerBatch; // @synthesize maxZoneCountPerBatch=_maxZoneCountPerBatch;
@property(nonatomic) unsigned long long maxRecordBytesPerBatch; // @synthesize maxRecordBytesPerBatch=_maxRecordBytesPerBatch;
@property(nonatomic) unsigned long long maxRecordCountPerBatch; // @synthesize maxRecordCountPerBatch=_maxRecordCountPerBatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *batchCreationQueue; // @synthesize batchCreationQueue=_batchCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CKNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(nonatomic) unsigned long long lastNotifiedMetadataChangeCount; // @synthesize lastNotifiedMetadataChangeCount=_lastNotifiedMetadataChangeCount;
@property(retain, nonatomic) CKSyncEngineMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) __weak id <CKSyncEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool ignoringSystemConditions; // @synthesize ignoringSystemConditions=_ignoringSystemConditions;
- (id)defaultOperationConfiguration;
- (void)updateAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ensureAccountAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accountChangedNotification:(id)arg1;
- (void)startWaitingForHSA2IfNecessary;
- (void)identityUpdateNotification:(id)arg1;
- (void)startWaitingForIdentityUpdateIfNecessary;
- (void)updateReadinessStateFromError:(id)arg1;
- (_Bool)shouldRetryAfterError:(id)arg1;
- (void)scheduleInitialWorkIfNecessary;
- (_Bool)hasSchedulerActivityWithIdentifier:(id)arg1;
- (void)scheduleUserRequestedBackupActivityIfNecessary;
- (void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)scheduleSyncIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 userRequestedBackupTask:(_Bool)arg4;
- (_Bool)isReadyToSubmitSchedulerActivity;
- (void)performUserRequestedBackupActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performSyncActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterActivities;
- (void)registerSchedulerActivities;
- (void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didReceiveDatabaseNotification:(id)arg1;
- (void)registerForSubscriptions;
- (id)databaseSubscription;
- (_Bool)_needsToFetchChangesForZoneIDs:(id)arg1;
- (_Bool)needsToFetchChangesForZoneIDs:(id)arg1;
- (_Bool)shouldFetchChangesForZoneID:(id)arg1;
- (void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5;
- (void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4;
- (void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (id)newOperationToFetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)existingOperationToFetchChangesForZoneIDs:(id)arg1 includingExecutingOperations:(_Bool)arg2;
- (void)_queue_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchChangesForZoneIDs:(id)arg1 ifNecessary:(_Bool)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchChangesForZoneIDs:(id)arg1 ifNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)nextBatchOfRecordsToModifyDefaultBehaviorInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyInZoneIDs:(id)arg1;
- (id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3 osActivity:(id)arg4;
- (void)addOperationsToModifyZonesIfNecessaryFilteredByZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)existingOperationsToModifyAnyZonesInZoneIDs:(id)arg1;
- (_Bool)_hasPendingModifications;
- (_Bool)hasPendingModifications;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5;
- (void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3;
- (id)newOperationToModifyRecordBatchesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg1 includingExecutingOperations:(_Bool)arg2;
- (void)_queue_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)modifyPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)notifyDataSourceForUnserializedMetadataIfNecessaryWithCoalescing:(_Bool)arg1;
@property(nonatomic) _Bool useOpportunisticPushTopic;
- (id)userRequestedBackupActivityIdentifier;
- (id)saveSubscriptionActivityIdentifier;
- (id)syncActivityIdentifier;
- (id)activityIdentifierWithName:(id)arg1;
- (void)dealloc;
- (void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(_Bool)arg5 automaticSyncingEnabled:(_Bool)arg6 priority:(long long)arg7 xpcActivityCriteriaOverrides:(id)arg8;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(_Bool)arg5 useUniqueActivityIdentifiers:(_Bool)arg6 automaticSyncingEnabled:(_Bool)arg7;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(_Bool)arg4 automaticSyncingEnabled:(_Bool)arg5;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5 xpcActivityCriteriaOverrides:(id)arg6;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3;
- (id)init;

@end

