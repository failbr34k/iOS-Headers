//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGSuggestionsServiceContactsProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceDeliveriesProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceEventsProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceFidesProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceInternalProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceIpsosProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceMailProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceRemindersProtocol-Protocol.h>
#import <CoreSuggestions/SGSuggestionsServiceURLsProtocol-Protocol.h>

@class NSString, SGDaemonConnection, SGFuture;
@protocol SGDSuggestManagerAllProtocol;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceIpsosProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceRemindersProtocol, SGSuggestionsServiceDeliveriesProtocol, SGSuggestionsServiceURLsProtocol>
{
    SGDaemonConnection *_daemonConnection;
    id <SGDSuggestManagerAllProtocol> _managerForTesting;
    _Bool _keepDirty;
    NSString *_machServiceName;
    _Bool _queuesRequestsIfBusy;
    double _syncTimeout;
    struct _opaque_pthread_mutex_t _syncTimeoutLock;
    SGFuture *_snapshotFuture;
}

+ (id)wantedSearchableItemsFromItems:(id)arg1;
+ (id)filteredSearchableItemsFromItems:(id)arg1;
+ (_Bool)isHarvestingSupported;
+ (void)prepareForQuery;
+ (_Bool)hasEntitlement:(id)arg1;
+ (id)_daemonConnectionForMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(_Bool)arg3;
+ (id)serviceForMessages;
+ (id)serviceForFides;
+ (id)serviceForInternal;
+ (id)serviceForIpsos;
+ (id)serviceForDeliveries;
+ (id)serviceForReminders;
+ (id)serviceForEvents;
+ (id)serviceForURLs;
+ (id)serviceForContacts;
+ (id)serviceForMail;
+ (void)initialize;
+ (void)setInProcessSuggestManager:(id)arg1;
+ (id)inProcessSuggestManager;
- (void).cxx_destruct;
- (void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 error:(id *)arg3;
- (void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned int)arg4 error:(id *)arg5;
- (void)recentURLsWithLimit:(unsigned int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)recentURLsWithLimit:(unsigned int)arg1 error:(id *)arg2;
- (void)ipsosMessagesWithSearchableItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)ipsosMessagesWithSearchableItems:(id)arg1 error:(id *)arg2;
- (void)suggestionsFromMockData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sleepWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)sleep:(id *)arg1;
- (void)daemonExitWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)daemonExit:(id *)arg1;
- (void)keepDirty:(_Bool)arg1;
- (void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (id)powerState;
- (void)deleteCloudKitZoneWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)sendRTCLogs:(id *)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)removeAllStoredPseudoContacts:(id *)arg1;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)drainQueueCompletely:(id *)arg1;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 containsSchemaOrg:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)keysForSchemas:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)evaluateRecipe:(id)arg1 attachments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)resolveFullDownloadRequests:(id)arg1 error:(id *)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id *)arg3;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)messagesToRefreshWithError:(id *)arg1;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSearchableItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)addSearchableItems:(id)arg1 error:(id *)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)rejectContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)rejectContactDetailRecord:(id)arg1 rejectionUI:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)rejectContactDetailRecord:(id)arg1 rejectionUI:(int)arg2 error:(id *)arg3;
- (void)rejectRecord:(id)arg1 rejectionUI:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)rejectRecord:(id)arg1 rejectionUI:(int)arg2 error:(id *)arg3;
- (void)rejectRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectRecord:(id)arg1 error:(id *)arg2;
- (void)rejectContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectContact:(id)arg1 error:(id *)arg2;
- (void)rejectContact:(id)arg1 rejectionUI:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)rejectContact:(id)arg1 rejectionUI:(int)arg2 error:(id *)arg3;
- (void)deleteEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)deleteEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)rejectEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmEventByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmEventByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmContactDetailRecord:(id)arg1 error:(id *)arg2;
- (void)confirmRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmRecord:(id)arg1 error:(id *)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmContact:(id)arg1 error:(id *)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectEvent:(id)arg1 error:(id *)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmEvent:(id)arg1 error:(id *)arg2;
- (void)originFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)originFromRecordId:(id)arg1 error:(id *)arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 error:(id *)arg2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 error:(id *)arg4;
- (void)eventFromUniqueId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromUniqueId:(id)arg1 error:(id *)arg2;
- (void)eventFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)eventFromRecordID:(id)arg1 error:(id *)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)emailAddressIsSignificant:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordIds:(id)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)cnContactMatchesForRecordId:(id)arg1 error:(id *)arg2;
- (void)contactFromRecordID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactFromRecordID:(id)arg1 error:(id *)arg2;
- (id)contactFromRecordID:(id)arg1;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 error:(id *)arg5;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 error:(id *)arg4;
- (id)cacheSnapshotFuture;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id *)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (void)allDeliveriesWithLimit:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allDeliveriesWithLimit:(unsigned long long)arg1 error:(id *)arg2;
- (void)reminderTitleForContent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)reminderTitleForContent:(id)arg1 error:(id *)arg2;
- (void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allRemindersLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)reminderAlarmTriggeredForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)reminderAlarmTriggeredForRecordId:(id)arg1 error:(id *)arg2;
- (void)rejectRealtimeReminder:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectRealtimeReminder:(id)arg1 error:(id *)arg2;
- (void)rejectReminderByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)rejectReminderByRecordId:(id)arg1 error:(id *)arg2;
- (void)confirmRealtimeReminder:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmRealtimeReminder:(id)arg1 error:(id *)arg2;
- (void)confirmReminderByRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)confirmReminderByRecordId:(id)arg1 error:(id *)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allEventsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(CDUnknownBlockType)arg2;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)deregisterEventsChangeObserverWithToken:(id)arg1;
- (id)registerEventsChangeObserver:(CDUnknownBlockType)arg1;
- (_Bool)deregisterContactsChangeObserverWithToken:(id)arg1;
- (id)registerContactsChangeObserver:(CDUnknownBlockType)arg1;
- (void)_clearHarvestStoreCache;
- (void)allContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)allContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)allContactsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)clearCachesFully:(_Bool)arg1 error:(id *)arg2;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)prepareForRealtimeExtraction:(id *)arg1;
- (void)setQueuesRequestsIfBusy:(_Bool)arg1;
- (_Bool)queuesRequestsIfBusy;
- (_Bool)isEnabledWithError:(id *)arg1;
- (void)setManagerForTesting:(id)arg1;
- (id)_remoteSuggestionManager;
- (void)setSyncTimeout:(double)arg1;
- (double)syncTimeout;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(_Bool)arg3;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;

@end

