//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSString, REPriorityQueue, REUpNextTimer;
@protocol REFeatureTransformerInvalidationDelegate;

@interface REFeatureTransformer : NSObject <NSCopying>
{
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    id <REFeatureTransformerInvalidationDelegate> _invalidationDelegate;
    NSString *_name;
}

+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(CDUnknownBlockType)arg4;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(CDUnknownBlockType)arg3;
+ (id)customCategoricalTransformerWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)recentTransformerWithCount:(unsigned long long)arg1;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
+ (id)changedTransformWithImpulseDuration:(double)arg1;
+ (id)changedTransform;
+ (id)maskTransformWithWidth:(unsigned long long)arg1;
+ (id)hashTransform;
+ (id)roundTransformer;
+ (id)binaryTransformerWithThreshold:(id)arg1;
+ (id)logTransformerWithBase:(id)arg1;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)arg1;
+ (id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)featureTransformerClasses;
+ (id)functionName;
+ (_Bool)supportsInvalidation;
+ (_Bool)supportsPersistence;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_invalidate;
- (void)_performAndScheduleTimer;
- (void)_invalidationQueue_scheduleInvalidation:(id)arg1;
- (void)invalidateWithContext:(id)arg1;
- (id)invalidationDelegate;
- (void)setInvalidationDelegate:(id)arg1;
- (id)_invalidationQueue;
- (void)configureWithInvocation:(id)arg1;
- (id)init;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;

@end

