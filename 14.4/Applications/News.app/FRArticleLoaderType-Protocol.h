//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FRArticleViewContext, NSArray, NSDictionary, NSString;
@protocol FCHeadlineProviding;

@protocol FRArticleLoaderType
- (void)loadArticleViewControllerWithHeadline:(id <FCHeadlineProviding>)arg1 frame:(struct CGRect)arg2 articleContext:(FRArticleViewContext *)arg3 notificationSenderChannelID:(NSString *)arg4 articlePresentationStyle:(long long)arg5 showShareSheet:(_Bool)arg6 editorialTabName:(NSString *)arg7 completion:(void (^)(id <FRArticlePageViewDataSource>, FRArticlePageViewController *, unsigned long long))arg8;
- (void)loadArticleViewControllerWithID:(NSString *)arg1 frame:(struct CGRect)arg2 articleList:(NSArray *)arg3 prefetchedHeadlines:(NSArray *)arg4 sectionDataByArticleID:(NSDictionary *)arg5 articleOpenedFrom:(long long)arg6 notificationSenderChannelID:(NSString *)arg7 articleContext:(FRArticleViewContext *)arg8 articlePresentationStyle:(long long)arg9 showShareSheet:(_Bool)arg10 forceArticleUpdate:(_Bool)arg11 editorialTabName:(NSString *)arg12 completion:(void (^)(id <FCHeadlineProviding>, id <FRArticlePageViewDataSource>, FRArticlePageViewController *, unsigned long long))arg13;
@end

