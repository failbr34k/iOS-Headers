//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASLPArrayContext : NSObject
{
    const unsigned int *_storage;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) const unsigned int *storage; // @synthesize storage=_storage;
- (id)init;
- (id)initWithStorage:(const unsigned int *)arg1 count:(unsigned long long)arg2;

@end

