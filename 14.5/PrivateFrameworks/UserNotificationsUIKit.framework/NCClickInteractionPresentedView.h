//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTVisualStylingRequiring-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSString, UILabel;

@interface NCClickInteractionPresentedView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>
{
    UILabel *_titleLabel;
    struct CGSize _cachedSizeThatFits;
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1;
- (void)_updateTitleLabelAnchorPointAndPosition;
- (void)_updateTitleLabelTextAttributes;
- (void)_updateTitleLabelVisualStyling;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

