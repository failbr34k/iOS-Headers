//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding>
{
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_inputStrokeIdentifiers;
    NSDictionary *_recognitionResultsByLocale;
    NSDictionary *_errorsByLocale;
}

+ (_Bool)supportsSecureCoding;
+ (id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2 outSortedLocales:(id *)arg3;
+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2 useCombinedScore:(_Bool)arg3;
+ (id)sortedLanguageGroups:(id)arg1 usingLanguageFitness:(id)arg2;
+ (id)localesByLanguageGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *errorsByLocale; // @synthesize errorsByLocale=_errorsByLocale;
@property(readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale; // @synthesize recognitionResultsByLocale=_recognitionResultsByLocale;
@property(readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // @synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStrokeGroupRecognitionResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (CDStruct_c3b9c2ee)languageFitnessForLocale:(id)arg1;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double *)arg2 doesContainUnfilteredMultiLocaleResults:(_Bool *)arg3;
- (id)localesSortedByCombinedLanguageFitness:(id)arg1;
- (id)localesSortedByRawLanguageFitness:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property(readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property(readonly, retain, nonatomic) CHDrawing *inputDrawing;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6;

@end

