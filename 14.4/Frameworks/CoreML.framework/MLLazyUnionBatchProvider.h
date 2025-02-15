//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>

@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider>
{
    id <MLBatchProvider> _first;
    id <MLBatchProvider> _second;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MLBatchProvider> second; // @synthesize second=_second;
@property(retain, nonatomic) id <MLBatchProvider> first; // @synthesize first=_first;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id *)arg3;

@end

