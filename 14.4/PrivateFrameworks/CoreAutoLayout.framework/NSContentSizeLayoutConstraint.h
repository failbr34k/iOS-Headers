//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreAutoLayout/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
{
    double _huggingPriority;
    double _compressionResistancePriority;
}

@property(readonly) double compressionResistancePriority; // @synthesize compressionResistancePriority=_compressionResistancePriority;
@property(readonly) double huggingPriority; // @synthesize huggingPriority=_huggingPriority;
- (id)_priorityDescription;
- (double)priorityForVariable:(id)arg1;
- (id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5;

@end

