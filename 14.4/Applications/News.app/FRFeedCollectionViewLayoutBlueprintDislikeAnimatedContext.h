//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintAnimatedContextType-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintDiff, NSIndexSet, NSSet, NSString;

@interface FRFeedCollectionViewLayoutBlueprintDislikeAnimatedContext : NSObject <FRFeedCollectionViewLayoutBlueprintAnimatedContextType>
{
    FRFeedCollectionViewLayoutBlueprint *_fromBlueprint;
    FRFeedCollectionViewLayoutBlueprint *_toBlueprint;
    FRFeedCollectionViewLayoutBlueprintDiff *_diff;
    NSSet *_removedIndexPathsToZoomAndFade;
    NSIndexSet *_removedSections;
    struct CGPoint _centerOfRemovedSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *removedSections; // @synthesize removedSections=_removedSections;
@property(retain, nonatomic) NSSet *removedIndexPathsToZoomAndFade; // @synthesize removedIndexPathsToZoomAndFade=_removedIndexPathsToZoomAndFade;
@property(nonatomic) struct CGPoint centerOfRemovedSection; // @synthesize centerOfRemovedSection=_centerOfRemovedSection;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *toBlueprint; // @synthesize toBlueprint=_toBlueprint;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *fromBlueprint; // @synthesize fromBlueprint=_fromBlueprint;
- (struct CGAffineTransform)_transformForFinalLayoutAttributesInContiguousArea:(id)arg1;
- (void)_calculateContiguousRegionsInUpdateForAnimationTransform;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 withTopOffsetBlock:(CDUnknownBlockType)arg3;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 withTopOffsetBlock:(CDUnknownBlockType)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 withTopOffsetBlock:(CDUnknownBlockType)arg3;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 withTopOffsetBlock:(CDUnknownBlockType)arg2;
- (id)initWithFromBlueprint:(id)arg1 toBlueprint:(id)arg2 andDiff:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

