//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/_CUIRawDataRendition.h>

@class CUIRenditionMetrics, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUILayerStackRendition : _CUIRawDataRendition
{
    CUIRenditionMetrics *_renditionMetrics;
    NSMutableArray *_layers;
}

- (id)metrics;
- (id)layerReferences;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;

@end

