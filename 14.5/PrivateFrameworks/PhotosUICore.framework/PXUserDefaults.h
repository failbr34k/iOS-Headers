//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;
@protocol PXUserDefaultsDataSource, PXZoomablePhotosUserDefaults;

@interface PXUserDefaults : NSObject
{
    NSNumber *_allPhotosColumns;
    NSNumber *_curatedLibraryZoomLevel;
    NSNumber *_daysMarginScale;
    NSNumber *_allPhotosCaptionsVisible;
    NSNumber *_allPhotosPreferredIndividualItemsColumns;
    NSNumber *_allPhotosAspectFit;
    NSNumber *_allPhotosAspectFitInCompact;
    NSNumber *_photosGridColumns;
    NSNumber *_photosGridPreferredIndividualItemsColumns;
    NSNumber *_photosGridAspectFit;
    NSNumber *_photosGridAspectFitInCompact;
    NSNumber *_didShowCurationFooter;
    NSNumber *_didShowCompletedCurationFooterAnimation;
    NSNumber *_lastRadarPromptAnsweredQuestionCount;
    NSDate *_lastSurveyQuestionsRadarPromptDate;
    NSDate *_surveyQuestionsHideDate;
    NSNumber *_axExposeAllVisibleElements;
    id <PXUserDefaultsDataSource> _dataSource;
}

+ (id)standardUserDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PXUserDefaultsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSNumber *axExposeAllVisibleElements; // @synthesize axExposeAllVisibleElements=_axExposeAllVisibleElements;
@property(copy, nonatomic) NSDate *surveyQuestionsHideDate; // @synthesize surveyQuestionsHideDate=_surveyQuestionsHideDate;
@property(copy, nonatomic) NSDate *lastSurveyQuestionsRadarPromptDate; // @synthesize lastSurveyQuestionsRadarPromptDate=_lastSurveyQuestionsRadarPromptDate;
@property(copy, nonatomic) NSNumber *lastRadarPromptAnsweredQuestionCount; // @synthesize lastRadarPromptAnsweredQuestionCount=_lastRadarPromptAnsweredQuestionCount;
@property(copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation; // @synthesize didShowCompletedCurationFooterAnimation=_didShowCompletedCurationFooterAnimation;
@property(copy, nonatomic) NSNumber *didShowCurationFooter; // @synthesize didShowCurationFooter=_didShowCurationFooter;
@property(copy, nonatomic) NSNumber *photosGridAspectFitInCompact; // @synthesize photosGridAspectFitInCompact=_photosGridAspectFitInCompact;
@property(copy, nonatomic) NSNumber *photosGridAspectFit; // @synthesize photosGridAspectFit=_photosGridAspectFit;
@property(copy, nonatomic) NSNumber *photosGridPreferredIndividualItemsColumns; // @synthesize photosGridPreferredIndividualItemsColumns=_photosGridPreferredIndividualItemsColumns;
@property(copy, nonatomic) NSNumber *photosGridColumns; // @synthesize photosGridColumns=_photosGridColumns;
@property(copy, nonatomic) NSNumber *allPhotosAspectFitInCompact; // @synthesize allPhotosAspectFitInCompact=_allPhotosAspectFitInCompact;
@property(copy, nonatomic) NSNumber *allPhotosAspectFit; // @synthesize allPhotosAspectFit=_allPhotosAspectFit;
@property(copy, nonatomic) NSNumber *allPhotosPreferredIndividualItemsColumns; // @synthesize allPhotosPreferredIndividualItemsColumns=_allPhotosPreferredIndividualItemsColumns;
@property(copy, nonatomic) NSNumber *allPhotosCaptionsVisible; // @synthesize allPhotosCaptionsVisible=_allPhotosCaptionsVisible;
@property(copy, nonatomic) NSNumber *daysMarginScale; // @synthesize daysMarginScale=_daysMarginScale;
@property(copy, nonatomic) NSNumber *curatedLibraryZoomLevel; // @synthesize curatedLibraryZoomLevel=_curatedLibraryZoomLevel;
@property(copy, nonatomic) NSNumber *allPhotosColumns; // @synthesize allPhotosColumns=_allPhotosColumns;
- (void)setNumberOfAnsweredQuestionsFromLastRadarPrompt:(id)arg1;
- (void)setSurveyQuestionsRadarPromptDate:(id)arg1;
- (void)setallPhotosAspectFitInCompact:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id <PXZoomablePhotosUserDefaults> photosGridsUserDefaults;
@property(readonly, nonatomic) id <PXZoomablePhotosUserDefaults> curatedLibraryUserDefaults;

@end

