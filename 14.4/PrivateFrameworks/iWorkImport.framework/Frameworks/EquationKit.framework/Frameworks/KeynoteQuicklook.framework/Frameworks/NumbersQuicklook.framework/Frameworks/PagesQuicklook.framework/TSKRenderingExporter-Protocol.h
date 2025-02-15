//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/TSKExporter-Protocol.h>

@class NSURL;
@protocol TSDImportExportDelegate;

@protocol TSKRenderingExporter <TSKExporter>
@property(nonatomic) _Bool paginate;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) double progressForCurrentPage;
@property(readonly, nonatomic) struct CGRect unscaledClipRect;
@property(readonly, nonatomic) struct CGRect boundsRect;
- (void)performBlockWithImager:(void (^)(TSDImager *))arg1;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)exportToURL:(NSURL *)arg1 pageNumber:(unsigned long long)arg2 delegate:(id <TSDImportExportDelegate>)arg3 error:(id *)arg4;
@end

