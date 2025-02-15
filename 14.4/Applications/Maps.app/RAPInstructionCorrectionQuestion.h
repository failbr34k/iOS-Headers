//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPCommentQuestion.h"

@class GEOComposedRouteStep, NSData, TransitDirectionsListItem;

__attribute__((visibility("hidden")))
@interface RAPInstructionCorrectionQuestion : RAPCommentQuestion
{
    NSData *_cellScreenshotImageData;
    GEOComposedRouteStep *_composedRouteStep;
    TransitDirectionsListItem *_listItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TransitDirectionsListItem *listItem; // @synthesize listItem=_listItem;
@property(readonly, nonatomic) GEOComposedRouteStep *composedRouteStep; // @synthesize composedRouteStep=_composedRouteStep;
@property(copy, nonatomic) NSData *cellScreenshotImageData; // @synthesize cellScreenshotImageData=_cellScreenshotImageData;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 composedRouteStep:(id)arg3 listItem:(id)arg4;
- (id)_commentsPlaceholderText;
- (id)commentsTitle;
- (void)fillIndexesForResponse:(id)arg1 problemAticRouteIndex:(id)arg2 correction:(id)arg3;
- (void)_fillSubmissionParameters:(id)arg1;
- (unsigned long long)maximumNumberOfPhotos;

@end

