//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface FRSpinnerView : UIView
{
    _Bool _isAnimating;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

+ (void)initialize;
+ (id)loadingText;
+ (struct CGSize)loadingLabelSize;
+ (id)loadingFont;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_setupViews;
- (id)_init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

