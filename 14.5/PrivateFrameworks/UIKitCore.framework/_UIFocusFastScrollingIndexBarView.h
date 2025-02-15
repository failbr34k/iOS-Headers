//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIFont;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarView : UIView
{
    UIView *_indicatorView;
    double _preferredIndicatorWidth;
    double _preferredLabelFontSize;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    long long _deflectedIndex;
    double _deflectionAmount;
    UIFont *_backgroundFont;
    UIFont *_foregroundFont;
    UIView *_emphasisBackgroundView;
    NSArray *_entries;
    long long _focusProminence;
    long long _style;
    struct CGPoint _minimumContentOffset;
    struct CGPoint _maximumContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct CGPoint maximumContentOffset; // @synthesize maximumContentOffset=_maximumContentOffset;
@property(nonatomic) struct CGPoint minimumContentOffset; // @synthesize minimumContentOffset=_minimumContentOffset;
@property(nonatomic) long long focusProminence; // @synthesize focusProminence=_focusProminence;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)_backgroundLabelTextColor;
- (_Bool)_shouldUseDarkAppearance;
- (id)_indicatorShadowPath;
- (id)_backgroundFont;
- (id)_foregroundFont;
- (void)_determinePreferredSizes;
- (void)_updateEmphasisBackgroundColor;
- (void)_updateColors;
- (void)_createLabels;
- (void)_showReducedFocusProminence;
- (void)_showNormalFocusProminence;
- (void)layoutSubviews;
- (void)destroyEmphasisBackgroundIfNecessary;
- (void)toggleEmphasisBackgroundVisible:(_Bool)arg1;
- (void)createEmphasisBackgroundIfNecessary;
- (void)resetDeflection:(_Bool)arg1;
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;
- (id)_lowerEntryForOffset:(double)arg1;
- (id)_upperEntryForOffset:(double)arg1;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint)arg1;
- (void)updateForContentOffset:(struct CGPoint)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

