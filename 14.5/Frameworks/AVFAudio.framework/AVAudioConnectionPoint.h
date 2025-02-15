//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject
{
    AVAudioNode *_node;
    unsigned long long _bus;
    void *_reserved;
}

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long bus; // @synthesize bus=_bus;
@property(readonly, nonatomic) __weak AVAudioNode *node; // @synthesize node=_node;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithNode:(id)arg1 bus:(unsigned long long)arg2;
- (id)init;

@end

