//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, OKPresentationGuideline, OKSynopsisView;

@protocol OKSynopsisViewDelegate <NSObject>
- (NSArray *)visibleWidgets;
- (void)synopsisView:(OKSynopsisView *)arg1 didSelectItem:(OKPresentationGuideline *)arg2;

@optional
- (void)synopsisViewUpdated:(OKSynopsisView *)arg1 withProgress:(double)arg2;
- (void)synopsisViewDidEnd:(OKSynopsisView *)arg1;
- (void)synopsisViewDidBegin:(OKSynopsisView *)arg1;
- (void)synopsisViewWillBegin:(OKSynopsisView *)arg1;
- (_Bool)shouldShowSynopsisView;
@end

