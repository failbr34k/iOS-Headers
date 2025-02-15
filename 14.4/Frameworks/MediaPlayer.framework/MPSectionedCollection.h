//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class NSArray, NSString;

@interface MPSectionedCollection : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_sectionedItems;
    NSArray *_sections;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_initializeAsEmptySectionedCollection;
- (id)_stateDumpObject;
- (id)changeDetailsToSectionedCollection:(id)arg1 applyingUIKitWorkarounds:(_Bool)arg2 isEqualBlock:(CDUnknownBlockType)arg3 isUpdatedBlock:(CDUnknownBlockType)arg4;
- (id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long totalItemCount;
@property(readonly, nonatomic) id lastSection;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (long long)globalIndexForIndexPath:(id)arg1;
@property(readonly, nonatomic) id firstSection;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfSections;
- (id)allSections;
- (id)allItems;
@property(readonly, nonatomic) id lastItem;
@property(readonly, nonatomic) id firstItem;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIdentifiersUsingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

