//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRunningCurve : NSObject
{
    CDStruct_44038c2d _p0;
    double _t0;
    CDStruct_44038c2d _p1;
    double _t1;
    CDStruct_44038c2d _pu;
    double _tu;
    struct {
        double mb[4][3];
    } _mb;
    _Bool _mbValid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_44038c2d)stateAtTime:(double)arg1;
- (_Bool)hasStateAtTime:(double)arg1;
- (void)appendPosition:(Matrix_6e1d3589)arg1 atTime:(double)arg2;
- (void)dealloc;
- (void)reset;
- (id)init;

@end

