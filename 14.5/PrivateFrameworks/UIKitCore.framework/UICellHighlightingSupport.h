//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary *_unhighlightedStates;
    id _cell;
}

- (void).cxx_destruct;
- (void)highlightView:(id)arg1;
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;
- (void)dealloc;
- (id)initWithCell:(id)arg1;

@end

