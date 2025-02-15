//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSDate, NSDictionary, _PSMapsPredictionContext, _PSMapsSuggester;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SharedTripSuggestionsCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSArray *_suggestions;
    NSArray *_suggestedContacts;
    NSDictionary *_recipientsByHandle;
    NSDate *_lastFreshRequestDate;
    _Bool _requestInProgress;
    NSObject<OS_dispatch_queue> *_requestQueue;
    _PSMapsSuggester *_suggester;
    _PSMapsPredictionContext *_predictionContext;
    GEOObserverHashTable *_observers;
    NSArray *_suggestedRecipients;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;
- (void)_provideAbandonmentFeedback;
- (void)provideAbandonmentFeedback;
- (void)_provideFeedbackForContact:(id)arg1;
- (void)provideFeedbackForContact:(id)arg1;
- (void)_refreshFreshSuggestions;
- (void)requestFreshSuggestions;
@property(readonly, nonatomic) _Bool isRefreshing;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSDictionary *recipientsByHandle;
@property(readonly, nonatomic) NSArray *suggestedContacts;
- (id)suggestions;
- (void)_prepareForSuggestionsIfNeeded;
- (id)init;

@end

