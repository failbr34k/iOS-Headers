//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthMenstrualCycles/NSObject-Protocol.h>

@class HKMCViewModelProviderDataSource, NSArray, NSNumber;

@protocol HKMCViewModelProviderDataSourceDelegate <NSObject>
- (void)viewModelProviderDataSourceDidUpdateCycleFactors:(HKMCViewModelProviderDataSource *)arg1;
- (void)viewModelProviderDataSourceDidUpdateDaySummaries:(HKMCViewModelProviderDataSource *)arg1;
- (void)viewModelProviderDataSource:(HKMCViewModelProviderDataSource *)arg1 didFetchCycleFactors:(NSArray *)arg2 forDayIndexRange:(CDStruct_ef5fcbe6)arg3;
- (void)viewModelProviderDataSource:(HKMCViewModelProviderDataSource *)arg1 didFetchDaySummaries:(NSArray *)arg2 forDayIndexRange:(CDStruct_ef5fcbe6)arg3 analysisAnchor:(NSNumber *)arg4;
@end

