//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/_TtC7NewsUI223FollowingViewController.h>

#import <NewsUI2/TSFollowingViewControllerType-Protocol.h>
#import <NewsUI2/TSViewControllerTabbable-Protocol.h>

@class UIView;

@interface _TtC7NewsUI223FollowingViewController (NewsUI2) <TSFollowingViewControllerType, TSViewControllerTabbable>
@property(nonatomic, readonly) UIView *contentView;
- (void)editButtonTapped;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)contentScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
@end

