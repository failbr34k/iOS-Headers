//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISHintedValue : NSObject
{
    unsigned long long _options;
    NSMutableArray *_dimensions;
    NSMutableArray *_values;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *values; // @synthesize values=_values;
@property(readonly) NSMutableArray *dimensions; // @synthesize dimensions=_dimensions;
@property unsigned long long options; // @synthesize options=_options;
- (double)interpolationFactorForSize:(struct CGSize)arg1;
- (double)scaleFactorForSize:(struct CGSize)arg1;
- (_Bool)sizeOutsideHintedRange:(struct CGSize)arg1;
- (id)hintedValueForIndex:(long long)arg1;
- (id)hintedValueForSize:(struct CGSize)arg1;
- (void)addHintedValue:(id)arg1 forSize:(struct CGSize)arg2;
- (long long)indexForSize:(struct CGSize)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

