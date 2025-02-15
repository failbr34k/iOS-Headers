//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class CALayer, NSString, TSKToolbarTitleView, UIColor, UINavigationItem;

@interface TSKToolbar : UINavigationBar
{
    UINavigationItem *_navigationItem;
    CALayer *_shadowLayer;
    _Bool _shadowEnabled;
    TSKToolbarTitleView *_navigationTitleView;
    double _leftToolbarItemsInset;
    double _rightToolbarItemsInset;
    double _leftToolbarItemsMaximumWidth;
    double _rightToolbarItemsMaximumWidth;
}

@property(nonatomic) double rightToolbarItemsMaximumWidth; // @synthesize rightToolbarItemsMaximumWidth=_rightToolbarItemsMaximumWidth;
@property(nonatomic) double leftToolbarItemsMaximumWidth; // @synthesize leftToolbarItemsMaximumWidth=_leftToolbarItemsMaximumWidth;
@property(nonatomic) double rightToolbarItemsInset; // @synthesize rightToolbarItemsInset=_rightToolbarItemsInset;
@property(nonatomic) double leftToolbarItemsInset; // @synthesize leftToolbarItemsInset=_leftToolbarItemsInset;
@property(nonatomic) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(retain, nonatomic) TSKToolbarTitleView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *title;
- (void)setItems:(id)arg1 animated:(_Bool)arg2 height:(double)arg3 isLeft:(_Bool)arg4;
- (void)setLeftItems:(id)arg1 title:(id)arg2 rightItems:(id)arg3 duration:(double)arg4;
- (id)itemWithTag:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

