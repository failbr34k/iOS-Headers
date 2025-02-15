//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCoreDataRecorder : NSObject
{
}

+ (_Bool)stopRecording;
+ (_Bool)isRecording;
+ (void)reset;
+ (_Bool)startRecordingForDbWithFilename:(id)arg1 limitToMarkedThreads:(_Bool)arg2 includeBindVariables:(_Bool)arg3 includeIOMetrics:(_Bool)arg4 entryDecorator:(CDUnknownBlockType)arg5 entriesAvailableHandler:(CDUnknownBlockType)arg6;
+ (id)recordedEntriesAndReset;
+ (id)recordedEntries;
+ (id)recordedEntriesDescription;
+ (void)_recordExecutedStatementSQL:(id)arg1 queryPlan:(id)arg2 bindVariables:(id)arg3 bindIntArrays:(id)arg4 db:(struct sqlite3 *)arg5 pageHitCountBeforeExecution:(int)arg6 pageMissCountBeforeExecution:(int)arg7;
+ (_Bool)_installRecorder;
+ (id)_recordedStatementsAndReset:(_Bool)arg1;
+ (void)_bindVariablesSubEntryForStatement:(id)arg1 outBindVariables:(id *)arg2 outBindIntArrays:(id *)arg3;
+ (_Bool)_installConnectionSwizzle;
+ (struct sqlite3 *)_dbHandleFromConnection:(id)arg1;
+ (_Bool)_isCorrectDB:(struct sqlite3 *)arg1;
+ (id)_queryPlanFromSQL:(const char *)arg1 usingDb:(struct sqlite3 *)arg2;

@end

