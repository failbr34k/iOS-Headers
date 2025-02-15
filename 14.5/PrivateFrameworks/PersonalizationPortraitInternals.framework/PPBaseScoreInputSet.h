//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPBaseScoreInputSet : NSObject
{
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}

+ (CDUnknownBlockType)coreMLModelPathBlock;
- (void).cxx_destruct;
- (unsigned long long)indexForObjectScoreName:(id)arg1;
- (id)nameForObjectScoreIndex:(unsigned long long)arg1;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)indexForArrayScoreName:(id)arg1;
- (id)nameForArrayScoreIndex:(unsigned long long)arg1;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)indexForScalarScoreName:(id)arg1;
- (id)nameForScalarScoreIndex:(unsigned long long)arg1;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;
- (id)init;

@end

