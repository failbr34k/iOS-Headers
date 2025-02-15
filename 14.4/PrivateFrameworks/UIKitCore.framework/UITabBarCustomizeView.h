//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UILabel, UINavigationBar, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView
{
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    _Bool _isBeingDismissed;
    NSArray *_availableItems;
    UINavigationBar *_navigationBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSArray *availableItems; // @synthesize availableItems=_availableItems;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (long long)_barMetrics;
- (void)setIsBeingDismissed;
- (void)updateProxiesSelection;
- (void)tintTabBarItemsForEdit:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)titleLabelFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

