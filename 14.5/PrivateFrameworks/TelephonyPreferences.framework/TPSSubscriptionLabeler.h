//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface TPSSubscriptionLabeler : NSObject
{
    NSMutableDictionary *_labelDictionary;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_url;
    NSArray *_applicableUnlocalizedLabels;
    NSString *_applicableLanguage;
    NSLocale *_updatingLocale;
    NSArray *_cachedResult;
}

+ (id)_resultWithAllCharacters:(CDUnknownBlockType)arg1 string:(id)arg2;
+ (_Bool)isString:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;
+ (_Bool)isExclusivelyCJKString:(id)arg1 characterSets:(id)arg2;
+ (id)standardLabelIdentifiers;
+ (id)_groupStringsByCollationEquivalency:(id)arg1;
+ (_Bool)_dictionary:(id)arg1 containsCollationEquivalentKey:(id)arg2;
+ (id)stringsByNumericallyDisambiguatingStrings:(id)arg1;
+ (id)stringByShorteningString:(id)arg1 maximumWidth:(double)arg2 attributes:(id)arg3;
+ (double)widthOfString:(id)arg1 attributes:(id)arg2;
+ (id)fontAttributeDictionary;
+ (id)stringsByClippingStrings:(id)arg1 toWidthOfString:(id)arg2;
+ (id)stringsByAbbreviatingToPrefixesOfStrings:(id)arg1;
+ (id)displayShortLabelStringsForLongFormShortLabels:(id)arg1;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)localizedLabelForLabel:(id)arg1 longForm:(_Bool)arg2 languageStringOverrides:(id)arg3;
+ (id)localizedLabelsForLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)localizedLabelsForLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)localizedLabelForLabel:(id)arg1;
+ (id)localizedStringDictionaryForLanguageIdentifiers:(id)arg1 selectedLanguage:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedResult; // @synthesize cachedResult=_cachedResult;
@property(retain, nonatomic) NSLocale *updatingLocale; // @synthesize updatingLocale=_updatingLocale;
@property(retain, nonatomic) NSString *applicableLanguage; // @synthesize applicableLanguage=_applicableLanguage;
@property(retain, nonatomic) NSArray *applicableUnlocalizedLabels; // @synthesize applicableUnlocalizedLabels=_applicableUnlocalizedLabels;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSMutableDictionary *labelDictionary; // @synthesize labelDictionary=_labelDictionary;
- (void)_validateLabelsForInstalledUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)initWithLabelStorage:(id)arg1;

@end

