//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, PHAsset, VCPDatabaseReader;

@interface VCPDatabaseBatchIterator : NSObject
{
    VCPDatabaseReader *_reader;
    NSArray *_assets;
    NSSet *_resultsTypes;
    int _batchSize;
    int _idxLast;
    int _idxCurrent;
    NSDictionary *_batchAnalyses;
    PHAsset *_asset;
    NSDictionary *_analysis;
}

+ (id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)nextBatch;
- (_Bool)next;
- (id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4;

@end

