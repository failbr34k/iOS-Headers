//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryAnalysisStatus.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSString;

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>
{
}

- (_Bool)hasBattery;
@property(readonly, nonatomic) _Bool isDeviceUnplugged;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_configureBatteryMonitoring;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)_analyzingStateForDataSource:(id)arg1;
- (float)_enrichmentProgressForDataSource:(id)arg1;
- (void)_updateStatusProperties;
- (void)alternateTitleIndexDidChange;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

