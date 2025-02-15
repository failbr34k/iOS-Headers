//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPinnableBanner.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView, _SFDimmingButton;

@interface _SFLinkBanner : _SFPinnableBanner
{
    UIView *_separator;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_messageTopConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    _SFDimmingButton *_openButton;
    CDUnknownBlockType _openActionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openActionHandler; // @synthesize openActionHandler=_openActionHandler;
@property(retain, nonatomic) _SFDimmingButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void)invalidateBannerLayout;
- (void)contentSizeCategoryDidChange;
- (void)layoutSubviews;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)_open;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *messageLabelText;
- (id)_messageLabelFont;
- (id)_titleLabelFont;
- (id)init;

@end

