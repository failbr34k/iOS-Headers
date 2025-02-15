//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSPSupportDirectoryDelegate-Protocol.h>

@class NSDictionary, NSError, NSSet, NSString, NSURL, NSUUID, TSPData, TSPObjectContext, TSPObjectReferenceMap;
@protocol NSFilePresenter, TSPPassphraseConsumer;

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
@property(readonly, nonatomic) long long archiveValidationMode;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (id)documentProviderInternal;
- (void)gilligan_data:(TSPData *)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(NSString *)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(NSString *)arg5;
- (_Bool)gilligan_isRemoteData:(TSPData *)arg1;
- (_Bool)shouldAttemptRecoveryAfterWritingWithWastefulComponents:(TSPObjectContext *)arg1;
- (_Bool)shouldAttemptRecoveryAfterOriginalDocumentURLMismatchForContext:(TSPObjectContext *)arg1;
- (void)contextDidUpdateDocumentRevision:(TSPObjectContext *)arg1;
- (_Bool)shouldLoadAllComponentsForContext:(TSPObjectContext *)arg1 documentURL:(NSURL *)arg2;
- (void)context:(TSPObjectContext *)arg1 willFailToAutosaveDueToDuplicateUUIDs:(NSSet *)arg2 objectReferenceMap:(TSPObjectReferenceMap *)arg3;
- (void)requestAutosaveForExpensiveCalculation;
- (void)requestAutosave;
- (void)resumeSaveAndAutosaveWithReason:(NSString *)arg1;
- (void)suspendSaveAndAutosaveWithReason:(NSString *)arg1;
- (void)resumeAutosaveWithReason:(NSString *)arg1;
- (void)suspendAutosaveWithReason:(NSString *)arg1;
- (_Bool)isDocumentSupportRequired;
- (void)context:(TSPObjectContext *)arg1 canPerformUserActionUsingBlock:(void (^)(_Bool))arg2;
- (_Bool)contextCanPerformUserActions:(TSPObjectContext *)arg1;
- (_Bool)isInReadOnlyMode;
- (_Bool)isInCollaborationMode;
- (void)context:(TSPObjectContext *)arg1 didDownloadRemoteData:(TSPData *)arg2 error:(NSError *)arg3;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSSet *)arg2;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 flags:(unsigned long long)arg2;
- (_Bool)preserveDocumentRevisionIdentifierForSaveURL:(NSURL *)arg1;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (NSString *)documentPasswordHintForWrite;
- (NSSet *)additionalResourceRequestsForObjectContext:(TSPObjectContext *)arg1;
- (NSDictionary *)packageDataForWrite;
- (void)willBeginReadingFromURL:(NSURL *)arg1;
- (_Bool)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1 error:(id *)arg2;
- (void)didLoadDocumentWrittenByPreviousVersion;
- (void)addPersistenceWarnings:(NSSet *)arg1;
- (void)presentPersistenceError:(NSError *)arg1;
@end

