//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKJoinGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_leftNotifiers;
    NSMutableArray *_rightNotifiers;
    NSMutableArray *_leftResults;
    NSMutableArray *_rightResults;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;
+ (id)joinGroupForTargetQueue:(id)arg1;
+ (id)joinGroupWithName:(id)arg1;
+ (id)joinGroup;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *rightResults; // @synthesize rightResults=_rightResults;
@property(retain) NSMutableArray *leftResults; // @synthesize leftResults=_leftResults;
@property(retain, nonatomic) NSMutableArray *rightNotifiers; // @synthesize rightNotifiers=_rightNotifiers;
@property(retain, nonatomic) NSMutableArray *leftNotifiers; // @synthesize leftNotifiers=_leftNotifiers;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)applyUpdates;
- (void)wait;
- (void)joinRight:(CDUnknownBlockType)arg1;
- (void)joinLeft:(CDUnknownBlockType)arg1;
- (void)join:(CDUnknownBlockType)arg1;
- (void)aggregateJoinRight:(CDUnknownBlockType)arg1;
- (void)aggregateJoinLeft:(CDUnknownBlockType)arg1;
- (void)aggregateJoin:(CDUnknownBlockType)arg1;
- (void)_join:(CDUnknownBlockType)arg1;
- (void)performRight:(CDUnknownBlockType)arg1;
- (void)performLeft:(CDUnknownBlockType)arg1;
- (void)performRightOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performLeftOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;

@end

