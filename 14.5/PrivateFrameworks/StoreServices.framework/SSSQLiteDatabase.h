//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    _Bool _readOnly;
    _Bool _isInTransaction;
    NSString *_protectionType;
    CDUnknownBlockType _setupBlock;
    struct __CFDictionary *_statementCache;
    _Bool _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 didFinish:(_Bool *)arg3 isCorrupt:(_Bool *)arg4;
+ (void)_setTakesTaskCompletionAssertions:(_Bool)arg1;
+ (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
@property(copy, nonatomic) CDUnknownBlockType setupBlock; // @synthesize setupBlock=_setupBlock;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(_Bool)arg2;
- (void)_resetDatabaseWithPath:(id)arg1;
- (void)_resetCorruptDatabase;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (int)_openFlags;
- (int)_openDatabase;
- (void)_expireBackgroundTask;
- (void)_endTaskCompletionAssertion;
- (int)_closeDatabase;
- (void)_beginTaskCompletionAssertion;
- (void)_accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
@property _Bool takesTaskCompletionAssertions;
- (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
- (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
- (void)expireBackgroundTask;
- (void)endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (long long)userVersionForDatabase:(id)arg1;
- (long long)userVersion;
- (_Bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2;
- (_Bool)setUserVersion:(long long)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;
- (_Bool)executeSQL:(id)arg1;
- (void)dispatchBlockSync:(CDUnknownBlockType)arg1;
- (void)dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (long long)countChanges;
- (_Bool)columnName:(id)arg1 existsInTable:(id)arg2;
- (void)accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2 protectionType:(id)arg3;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (id)initWithDatabaseURL:(id)arg1;

@end

