//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/CREngine-Protocol.h>

@class CRLanguageCorrection, CRPerformanceStatistics, NSDictionary, NSString;

@interface CREngineFast : NSObject <CREngine>
{
    _Bool _shouldCancel;
    CRPerformanceStatistics *_textRecognitionStats;
    CRPerformanceStatistics *_languageCorrectionStats;
    unsigned long long _revision;
    NSDictionary *_options;
    CRLanguageCorrection *_languageCorrection;
}

+ (id)supportedLanguagesForRevision:(long long)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) CRLanguageCorrection *languageCorrection; // @synthesize languageCorrection=_languageCorrection;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property unsigned long long revision; // @synthesize revision=_revision;
@property(retain) CRPerformanceStatistics *languageCorrectionStats; // @synthesize languageCorrectionStats=_languageCorrectionStats;
@property(retain) CRPerformanceStatistics *textRecognitionStats; // @synthesize textRecognitionStats=_textRecognitionStats;
- (_Bool)validateProbability:(id)arg1 validRangeMin:(double)arg2 validRangeMax:(double)arg3 options:(id)arg4;
- (_Bool)noLMValidateProbability:(id)arg1 options:(id)arg2;
- (_Bool)lmValidateProbability:(id)arg1 options:(id)arg2;
- (id)applyLanguageCorrectionToResults:(id)arg1 image:(id)arg2 latticeResults:(id *)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (id)filterResultsForTextFeatures:(id)arg1;
- (id)textResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
@property(readonly) float highConfidenceThreshold;
@property(readonly) float mediumConfidenceThreshold;
- (struct CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize)arg2;
- (void)cancel;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

