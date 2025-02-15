//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCArticle, FRArticlePageViewController, FRArticleViewContext, SXContext, UIView;
@protocol FCHeadlineProviding, FRFeldsparContext, FRFlintArticleProvider;

@protocol FRFlintArticleDataSource <NSObject>
- (UIView *)presentationViewForProvider:(id <FRFlintArticleProvider>)arg1;
- (FCArticle *)articleForProvider:(id <FRFlintArticleProvider>)arg1;
- (id <FCHeadlineProviding>)articleHeadlineForProvider:(id <FRFlintArticleProvider>)arg1;
- (FRArticlePageViewController *)articlePageViewControllerForProvider:(id <FRFlintArticleProvider>)arg1;
- (FRArticleViewContext *)articleViewContextForProvider:(id <FRFlintArticleProvider>)arg1;
- (SXContext *)silexContextForProvider:(id <FRFlintArticleProvider>)arg1;
- (id <FRFeldsparContext>)feldsparContextForProvider:(id <FRFlintArticleProvider>)arg1;
@end

