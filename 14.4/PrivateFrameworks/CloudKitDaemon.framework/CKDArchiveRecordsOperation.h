//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _recordArchivedBlock;
    NSArray *_recordIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)main;
- (int)operationType;
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

