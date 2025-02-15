//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CompletionProvider.h"

@class NSObject, NSString, URLCompletionDatabase, WBSCompletionQuery;
@protocol OS_dispatch_queue, WBBookmarkProvider, WBSParsecSearchSession;

@interface URLCompletionProvider : CompletionProvider
{
    id <WBBookmarkProvider> _bookmarkProvider;
    unsigned long long _maxResults;
    NSString *_currentPrefix;
    _Bool _historyWasModified;
    _Bool _bookmarksWereModified;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _prefixMutex;
    unsigned long long _urlCompletionBackgroundTaskIdentifier;
    URLCompletionDatabase *_completionDatabase;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _needScheduleBackgroundTaskOnAppSuspend;
    id <WBSParsecSearchSession> _parsecSearchSession;
    WBSCompletionQuery *_query;
    _Bool _providesTopHits;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(nonatomic) _Bool providesTopHits; // @synthesize providesTopHits=_providesTopHits;
- (void)_endURLCompletionBackgroundTask;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)setQueryToComplete:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (unsigned long long)maximumCachedCompletionCount;
- (id)_doUpdateForPrefix:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_historyDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithBookmarkProvider:(id)arg1 cloudTabStore:(id)arg2 maxResults:(unsigned long long)arg3 searchableCollectionsMask:(int)arg4;

@end

