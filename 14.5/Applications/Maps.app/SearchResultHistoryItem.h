//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PersistentSearchResultHistoryItem.h"

#import "CarSearchItemCellDataSource-Protocol.h"
#import "RecentsItem-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SearchResultHistoryItem : PersistentSearchResultHistoryItem <CarSearchItemCellDataSource, RecentsItem>
{
}

@property(readonly, nonatomic) double timestamp;
- (id)initWithSearchResult:(id)arg1;
- (void)updateModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

