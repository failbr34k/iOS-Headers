//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSObject, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMSuggestionsDataSourceState *__state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (long long)_adjustedIndexFromIndex:(long long)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end

