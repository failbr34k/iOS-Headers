//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAccumulator : NSObject
{
    unsigned long long _values[7];
    NSString *_name;
    long long _type;
    unsigned long long _depth;
    CDUnknownBlockType _block;
}

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)increaseWithActions:(id)arg1;

@end

