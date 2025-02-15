//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMReadWriteLock, NSMutableArray;

@interface FMConcurrentMutableArray : NSObject
{
    NSMutableArray *_underlyingArray;
    FMReadWriteLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FMReadWriteLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *underlyingArray; // @synthesize underlyingArray=_underlyingArray;
- (id)nativeArray;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

