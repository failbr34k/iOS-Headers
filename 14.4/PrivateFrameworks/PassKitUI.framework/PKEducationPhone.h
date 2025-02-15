//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPaymentSetupInitialCardEducationIconsView, PKPhoneHeroView, UIImageView;

@interface PKEducationPhone : UIView
{
    struct CGSize _screenSize;
    _Bool _hasPearl;
    _Bool _isAnimating;
    unsigned long long _screenType;
    PKPhoneHeroView *_phoneBackgroundView;
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    UIView *_homeButtonView;
    UIView *_homeButtonOutlineView;
    UIImageView *_walletImageView;
    UIImageView *_cardImageView;
    UIImageView *_biometricsImageView;
    UIImageView *_powerIndicatorView;
    UIImageView *_powerArrowImageView;
}

- (void).cxx_destruct;
- (void)_startPowerIndicatorAnimation;
- (double)_deviceIconsPadding;
- (double)_topPadding;
- (void)_setHomeButtonOutlineColor;
- (void)startAnimation;
- (void)setPassImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 displayOptions:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

