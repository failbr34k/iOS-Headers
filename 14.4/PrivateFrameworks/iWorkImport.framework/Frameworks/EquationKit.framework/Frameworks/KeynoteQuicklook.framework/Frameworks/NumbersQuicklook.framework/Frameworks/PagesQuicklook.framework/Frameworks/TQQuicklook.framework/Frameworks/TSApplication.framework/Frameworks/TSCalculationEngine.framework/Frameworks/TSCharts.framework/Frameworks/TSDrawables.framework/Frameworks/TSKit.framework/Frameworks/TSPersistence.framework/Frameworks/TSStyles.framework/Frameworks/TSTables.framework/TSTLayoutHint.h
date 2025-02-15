//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/NSCopying-Protocol.h>
#import <TSTables/TSDHint-Protocol.h>

@class NSNumber, NSString, TSTLayout;
@protocol TSDHint;

@interface TSTLayoutHint : NSObject <NSCopying, TSDHint>
{
    _Bool mIsValid;
    _Bool mHorizontal;
    struct TSUCellRect mCellRange;
    struct TSUCellCoord mCacheHintID;
    NSNumber *mPartitioningPass;
    unsigned int mPartitionPosition;
    struct CGSize mMaximumSize;
    struct CGSize mEffectiveSize;
    TSTLayout *mLayout;
}

+ (Class)archivedHintClass;
@property(retain, nonatomic) NSNumber *partitioningPass; // @synthesize partitioningPass=mPartitioningPass;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=mHorizontal;
@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
@property(nonatomic) struct CGSize effectiveSize; // @synthesize effectiveSize=mEffectiveSize;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=mMaximumSize;
@property(nonatomic) unsigned int partitionPosition; // @synthesize partitionPosition=mPartitionPosition;
@property(nonatomic) struct TSUCellCoord cacheHintID; // @synthesize cacheHintID=mCacheHintID;
@property(nonatomic) struct TSUCellRect cellRange; // @synthesize cellRange=mCellRange;
@property(nonatomic) _Bool isValid; // @synthesize isValid=mIsValid;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)saveToArchive:(struct LayoutHintArchive *)arg1;
- (id)initWithArchive:(const struct LayoutHintArchive *)arg1;
@property(readonly, nonatomic) _Bool isFirstHint;
@property(readonly, nonatomic) id <TSDHint> lastChildHint;
@property(readonly, nonatomic) id <TSDHint> firstChildHint;
- (_Bool)overlapsWithSelectionPath:(id)arg1;
- (id)copyForArchiving;
- (oneway void)release;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRange:(struct TSUCellRect)arg1 hintId:(struct TSUCellCoord)arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize)arg4 effectiveSize:(struct CGSize)arg5 layout:(id)arg6 validity:(_Bool)arg7 horizontal:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

