//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CarFocusOrderSequence : NSObject
{
    unsigned long long _options;
    NSArray *_items;
}

+ (id)sequenceWithItems:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) _Bool flipForRHD;
@property(readonly, nonatomic, getter=isLooping) _Bool looping;

@end

