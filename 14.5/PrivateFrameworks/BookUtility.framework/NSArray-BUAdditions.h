//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (BUAdditions)
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;
- (id)bu_arrayByRemovingDuplicates;
- (id)bu_arrayByInvokingBlock:(CDUnknownBlockType)arg1;
- (id)bu_arrayByRemovingNSNulls;
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)bu_sortDescriptorComparator;
- (id)arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectsMatching:(CDUnknownBlockType)arg1;
- (_Bool)containsLocalizedStringCaseInsensitive:(id)arg1;
- (_Bool)containsStringCaseInsensitive:(id)arg1;
- (id)imReversedArray;
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
@end

