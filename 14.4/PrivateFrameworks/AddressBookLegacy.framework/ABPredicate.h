//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface ABPredicate : NSPredicate
{
}

+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 ranked:(_Bool)arg3 inAddressBook:(void *)arg4 withDelegate:(id)arg5;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 inAddressBook:(void *)arg3 withDelegate:(id)arg4;
+ (id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 ranked:(_Bool)arg3 addressBook:(void *)arg4 propertyIndices:(const struct __CFDictionary **)arg5;
+ (id)newQueryFromABPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 ranked:(_Bool)arg3 addressBook:(void *)arg4 propertyIndices:(const struct __CFDictionary **)arg5;
+ (id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(unsigned int)arg4 rankString:(id)arg5 groupByProperties:(id)arg6 addressBook:(void *)arg7 propertyIndices:(const struct __CFDictionary **)arg8;
+ (id)personPredicateWithGroup:(void *)arg1 source:(void *)arg2 account:(id)arg3;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3;
+ (id)personPredicateWithNameOnly:(id)arg1 account:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(_Bool)arg4 includePhotosInResults:(_Bool)arg5 addressBook:(void *)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(_Bool)arg4 addressBook:(void *)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void *)arg2 source:(void *)arg3 account:(id)arg4 includeSourceInResults:(_Bool)arg5 addressBook:(void *)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void *)arg2 source:(void *)arg3 account:(id)arg4 addressBook:(void *)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void *)arg2;
- (id)querySerializationIdentifier;
- (void)bindDouble:(double)arg1 toStatement:(struct CPSqliteStatement *)arg2 withBindingOffset:(int *)arg3;
- (void)bindString:(id)arg1 toStatement:(struct CPSqliteStatement *)arg2 withBindingOffset:(int *)arg3;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg1 predicateContext:(id)arg2 values:(struct sqlite3_value **)arg3 count:(int)arg4;
- (id)callbackContext;
- (_Bool)hasCallback;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(_Bool)arg1 predicateIdentifier:(int)arg2;
- (id)_querySelectStringForPredicateIdentifier:(int)arg1;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (_Bool)isValid;
- (id)predicateFormat;
- (void)dealloc;
- (id)init;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 addressBook:(void *)arg3 propertyIndices:(const struct __CFDictionary **)arg4;
- (void)ab_addCallbackContextToArray:(id)arg1;
- (_Bool)ab_hasCallback;

@end

