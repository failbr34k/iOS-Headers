//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)item:(id)arg1 isDependencyOfItem:(id)arg2;
- (_Bool)containsItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markItem:(id)arg1 dependentOnItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPointerFunctions:(unsigned long long)arg1;
- (id)init;
- (void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(CDUnknownBlockType)arg5 warn:(_Bool)arg6;
- (id)topologicalSortedItemsWithComparator:(CDUnknownBlockType)arg1;
- (id)topologicalSortedItems;
@property(readonly, nonatomic) NSArray *allItems;

@end

