//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/NSMutableCopying-Protocol.h>

@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying>
{
    vector_e3deae5b _rangeVector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dirtyRangesIntersecting:(struct _NSRange)arg1;
- (unsigned long long)indexForRange:(struct _NSRange)arg1;
- (long long)delta;
- (struct _NSRange)superRange;
- (_Bool)isEqualToDirtyRangeArray:(id)arg1;
- (CDStruct_9ae92562)dirtyRangeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRangeVector:(const vector_e3deae5b *)arg1;
- (id)initWithDirtyRange:(CDStruct_9ae92562)arg1;
- (id)init;

@end

