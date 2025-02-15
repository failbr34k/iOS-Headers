//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxPredictionQueryAdapter-Protocol.h>
#import <EmailDaemon/EDMessageObjectIDToDatabaseIDConverter-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDMailboxPersistence, EDPersistenceDatabase, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface EDMessagePersistence : NSObject <EFLoggable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter>
{
    int _cachedMetadataUpdatesSinceLastCheck;
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_cachedMetadataIsolation;
    NSNumber *_cachedMetadataEstimatedRowCount;
    EDPersistenceDatabase *_database;
}

+ (id)protectedMessageDataTableSchema;
+ (id)summariesTableSchema;
+ (id)subjectsTableSchema;
+ (id)addressesTableSchema;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)arg1;
+ (id)attachmentsTableSchemaAndForeignKeysToResolve:(id *)arg1;
+ (id)messageGlobalDataTableSchema;
+ (id)_cachedMetadataTableSchema;
+ (id)_messageReferencesTableSchema;
+ (id)recipientsTableSchemaAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)partialMessagesTableSchemaAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)bitExpressionForAttachments;
+ (id)bitExpressionForConversationFlag:(unsigned long long)arg1;
+ (id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2;
+ (id)messageGlobalDataTableName;
+ (id)addressesTableName;
+ (id)attachmentsTableName;
+ (id)messagesTableName;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property(nonatomic) int cachedMetadataUpdatesSinceLastCheck; // @synthesize cachedMetadataUpdatesSinceLastCheck=_cachedMetadataUpdatesSinceLastCheck;
@property(retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount; // @synthesize cachedMetadataEstimatedRowCount=_cachedMetadataEstimatedRowCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedMetadataIsolation; // @synthesize cachedMetadataIsolation=_cachedMetadataIsolation;
@property(readonly, nonatomic) __weak EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)validMailboxesForPrediction;
- (long long)globalIDForMessageWithDatabaseID:(long long)arg1 mailboxScope:(id *)arg2;
- (long long)globalIDForMessageIDHeader:(id)arg1;
- (id)messageObjectIDForURL:(id)arg1;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg1;
- (void)_checkCachedMetadataRowLimitWithConnection:(id)arg1;
- (void)_setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 globalMessageID:(long long)arg3;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (id)_cachedMetadataJSONForKey:(id)arg1 globalMessageID:(long long)arg2;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (id)_groupMessageObjectIDsByMailboxScope:(id)arg1;
- (id)messagesForMessageObjectIDs:(id)arg1 missedMessageObjectIDs:(id *)arg2;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(_Bool)arg2 temporarilyUnavailableDatabaseIDs:(id *)arg3;
- (id)persistedMessagesForMessageObjectIDs:(id)arg1 requireProtectedData:(_Bool)arg2 temporarilyUnavailableMessageObjectIDs:(id *)arg3;
- (id)_threadQueryForThreadObjectID:(id)arg1;
- (id)persistedMessagesForObjectIDs:(id)arg1 requireProtectedData:(_Bool)arg2;
- (id)enabledAccountMailboxesExpression;
- (id)_databaseIDsDictionaryForGlobalMessageIDs:(id)arg1 mailboxScope:(id)arg2;
- (id)databaseIDsDictionaryForMessageObjectIDs:(id)arg1;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(_Bool)arg2;
- (id)queryWithExpandedMailboxesFromQuery:(id)arg1;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)persistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (id)messagesMatchingQuery:(id)arg1;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (long long)countOfMessagesWithGlobalMessageID:(long long)arg1 matchingQuery:(id)arg2;
- (id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg1;
- (void)performDatabaseReadBlock:(CDUnknownBlockType)arg1;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

