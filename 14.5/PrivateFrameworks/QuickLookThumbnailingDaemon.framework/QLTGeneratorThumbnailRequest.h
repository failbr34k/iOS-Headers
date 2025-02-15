//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, QLDiskStore, QLPreviewThumbnailGenerator, QLThumbnailGenerationRequest;
@protocol OS_dispatch_group, OS_os_activity, QLIncrementalThumbnailGenerationHandler;

@interface QLTGeneratorThumbnailRequest : NSObject
{
    _Bool _cancelled;
    _Bool _didCheckCache;
    QLThumbnailGenerationRequest *_request;
    QLPreviewThumbnailGenerator *_generator;
    NSObject<OS_dispatch_group> *_batchDispatchGroup;
    NSError *_generationError;
    id <QLIncrementalThumbnailGenerationHandler> _generationHandler;
    unsigned long long _handledRequestedTypes;
    unsigned long long _successfullyHandldedRequestedTypes;
    unsigned long long _badgeType;
    NSObject<OS_os_activity> *_topActivity;
    NSObject<OS_os_activity> *_activity;
    NSNumber *_requestBadgeType;
    QLDiskStore *_diskStore;
}

- (void).cxx_destruct;
@property(retain) QLDiskStore *diskStore; // @synthesize diskStore=_diskStore;
@property(retain, nonatomic) NSNumber *requestBadgeType; // @synthesize requestBadgeType=_requestBadgeType;
@property(retain) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain) NSObject<OS_os_activity> *topActivity; // @synthesize topActivity=_topActivity;
@property(readonly, nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) unsigned long long successfullyHandldedRequestedTypes; // @synthesize successfullyHandldedRequestedTypes=_successfullyHandldedRequestedTypes;
@property _Bool didCheckCache; // @synthesize didCheckCache=_didCheckCache;
@property(nonatomic) unsigned long long handledRequestedTypes; // @synthesize handledRequestedTypes=_handledRequestedTypes;
@property(readonly, nonatomic) id <QLIncrementalThumbnailGenerationHandler> generationHandler; // @synthesize generationHandler=_generationHandler;
@property(retain, nonatomic) NSError *generationError; // @synthesize generationError=_generationError;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *batchDispatchGroup; // @synthesize batchDispatchGroup=_batchDispatchGroup;
@property(retain, nonatomic) QLPreviewThumbnailGenerator *generator; // @synthesize generator=_generator;
@property(readonly, nonatomic) QLThumbnailGenerationRequest *request; // @synthesize request=_request;
- (id)description;
- (long long)compare:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic) unsigned long long unhandledRequestedTypes;
- (void)addTypeToSuccessfullyHandledTypes:(long long)arg1;
- (void)addTypeToHandledTypes:(long long)arg1;
- (unsigned long long)_requestedTypesForRepresentationType:(long long)arg1;
- (_Bool)hasHandledAllRequestedTypesOrMostRepresentativeType;
- (_Bool)shouldGenerateLowQualityThumbnailOnCacheMiss;
- (_Bool)needsLowQualityThumbnailGeneration;
@property(readonly) _Bool cacheEnabled;
- (void)_adjustRequestInformationIfNeeded;
- (id)initWithRequest:(id)arg1 generationHandler:(id)arg2 batchDispatchGroup:(id)arg3;

@end

