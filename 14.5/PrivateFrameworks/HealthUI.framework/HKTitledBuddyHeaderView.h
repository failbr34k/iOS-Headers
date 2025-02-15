//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;
@protocol HKTitledBuddyHeaderViewDelegate;

@interface HKTitledBuddyHeaderView : UIView
{
    UITextView *_bodyTextView;
    UIButton *_optionalLinkButton;
    NSString *_bodyText;
    long long _bodyTextAlignment;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    NSLayoutConstraint *_bodyFirstBaselineConstraint;
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    id <HKTitledBuddyHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKTitledBuddyHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)deactivateDefaultTitleLabelBaselineConstraint;
- (void)_linkButtonTapped:(id)arg1;
- (void)setBodyText:(id)arg1 alignment:(long long)arg2;
- (id)bodyTextView;
@property(nonatomic) long long bodyTextAlignment;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
- (double)bottomPadding;
- (void)_updateBodyTextViewConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;

@end

