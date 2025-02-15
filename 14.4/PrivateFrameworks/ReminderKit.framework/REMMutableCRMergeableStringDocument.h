//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMReplicaIDHelperOwner-Protocol.h>

@class NSString, REMReplicaIDHelper, REMReplicaIDSource, TTMergeableAttributedString, TTMergeableStringVersionedDocument;
@protocol REMReplicaManagerProviding;

@interface REMMutableCRMergeableStringDocument : NSObject <REMReplicaIDHelperOwner>
{
    id <REMReplicaManagerProviding> _replicaManagerProvider;
    REMReplicaIDSource *_replicaIDSource;
    TTMergeableStringVersionedDocument *_document;
    REMReplicaIDHelper *_replicaIDHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMReplicaIDHelper *replicaIDHelper; // @synthesize replicaIDHelper=_replicaIDHelper;
@property(retain, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) REMReplicaIDSource *replicaIDSource; // @synthesize replicaIDSource=_replicaIDSource;
@property(retain, nonatomic) id <REMReplicaManagerProviding> replicaManagerProvider; // @synthesize replicaManagerProvider=_replicaManagerProvider;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
- (void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)wipeAndReplaceWithString:(id)arg1;
- (id)immutableDocument;
@property(readonly, nonatomic) TTMergeableAttributedString *mergeableString;
- (id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

