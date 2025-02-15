//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _finishInvoked;
    NSString *_sectionID;
    id _context;
    NSDate *_startDate;
    NSString *_operationID;
    CDUnknownBlockType _daemonInvokeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishInvoked; // @synthesize finishInvoked=_finishInvoked;
@property(readonly, copy, nonatomic) CDUnknownBlockType daemonInvokeBlock; // @synthesize daemonInvokeBlock=_daemonInvokeBlock;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (_Bool)isConcurrent;
- (void)finish;
- (void)main;
- (void)start;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(CDUnknownBlockType)arg2;

@end

