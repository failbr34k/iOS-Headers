//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>
#import <NewsUI/NULinkedArticleContentProvider-Protocol.h>

@class FCArticle, NSString;

@protocol NUArticleDataProvider <NSObject, NULinkedArticleContentProvider>
@property(readonly, nonatomic) FCArticle *article;
@property(readonly, copy, nonatomic) NSString *articleID;
- (void)cancelAssetPrefetch;
- (void)prefetchAssets;
- (void)loadContextWithCompletionBlock:(void (^)(SXContext *, id <NUFontRegistrator>, NSError *))arg1;
@end

