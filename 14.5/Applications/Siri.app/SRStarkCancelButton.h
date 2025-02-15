//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SRCarPlayFocusView, UIImageView;

@interface SRStarkCancelButton : UIButton
{
    SRCarPlayFocusView *_focusView;
    UIImageView *_iconImageView;
}

+ (void)_configureStylingForCancelButton:(id)arg1;
+ (id)button;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)_updateAlphasForFocusedState:(_Bool)arg1 selected:(_Bool)arg2;
- (void)_updateCompsitingFilterForButton:(id)arg1 userInterfaceStyle:(long long)arg2 focused:(_Bool)arg3;
- (void)_updateButton:(id)arg1 forFocusedState:(_Bool)arg2 selectedState:(_Bool)arg3;
- (id)accessibilityIdentifier;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

