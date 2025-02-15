//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSArray, NSString;
@protocol SearchHistoryOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchHistoryOperation : NSOperation
{
    NSString *_searchQuery;
    unsigned int _searchMode;
    NSArray *_history;
    id <SearchHistoryOperationDelegate> _delegate;
    AutocompleteContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SearchHistoryOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_historyResultsForSearchQuery:(id)arg1 searchMode:(unsigned int)arg2;
- (id)shortAddressForMapItem:(id)arg1;
- (_Bool)_removeCompletionItemForStringKey:(id)arg1 query:(id)arg2 fromCompletions:(id)arg3;
- (void)main;
- (id)initWithSearchQuery:(id)arg1 searchMode:(unsigned int)arg2 history:(id)arg3 context:(id)arg4;

@end

