//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartAxisLayoutItem.h>

@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartAxisSeriesLabelsLayoutItem *_seriesLabels;
    TSCHChartCategoryAxisLabelsLayoutItem *_categoryLabels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCHChartCategoryAxisLabelsLayoutItem *axisCategoryLabelsLayoutItem; // @synthesize axisCategoryLabelsLayoutItem=_categoryLabels;
@property(readonly, nonatomic) TSCHChartAxisSeriesLabelsLayoutItem *axisSeriesLabelsLayoutItem; // @synthesize axisSeriesLabelsLayoutItem=_seriesLabels;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutLabelsNow;
- (void)buildSubTree;

@end

