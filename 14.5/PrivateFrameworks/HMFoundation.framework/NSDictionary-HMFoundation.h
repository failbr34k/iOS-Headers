//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSDictionary (HMFoundation) <HMFObject>
+ (id)shortDescription;
- (id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2;
- (id)hmf_valueForKey:(id)arg1;
- (id)hmf_UUIDForKey:(id)arg1;
- (id)hmf_URLForKey:(id)arg1;
- (id)hmf_timeZoneForKey:(id)arg1;
- (id)hmf_stringForKey:(id)arg1;
- (id)hmf_mutableSetForKey:(id)arg1;
- (id)hmf_setForKey:(id)arg1;
- (id)hmf_numberForKey:(id)arg1;
- (long long)hmf_integerForKey:(id)arg1 error:(id *)arg2;
- (id)hmf_nullForKey:(id)arg1;
- (id)hmf_errorForKey:(id)arg1;
- (id)hmf_mutableDictionaryForKey:(id)arg1;
- (id)hmf_dictionaryForKey:(id)arg1;
- (id)hmf_dateComponentsForKey:(id)arg1;
- (id)hmf_dateForKey:(id)arg1;
- (id)hmf_dataForKey:(id)arg1;
- (id)hmf_calendarForKey:(id)arg1;
- (_Bool)hmf_boolForKey:(id)arg1 error:(id *)arg2;
- (_Bool)hmf_boolForKey:(id)arg1 isPresent:(_Bool *)arg2;
- (_Bool)hmf_boolForKey:(id)arg1;
- (id)hmf_base64EncodedDataForKey:(id)arg1;
- (id)hmf_mutableArrayForKey:(id)arg1;
- (id)hmf_arrayForKey:(id)arg1 ofClasses:(id)arg2;
- (id)hmf_arrayForKey:(id)arg1;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)nsValueForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)predicateFromDataForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)base64EncodedDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)setForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1 keyPresent:(_Bool *)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

