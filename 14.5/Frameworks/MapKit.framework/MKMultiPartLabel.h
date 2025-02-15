//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKMultiPartAttributedString, NSDictionary, NSString, UIColor, UIFont, UITextView, _MKMultiPartLabelMetrics;

@interface MKMultiPartLabel : UIView
{
    UITextView *_textView;
    struct CGRect _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
    _Bool _highlighted;
    MKMultiPartAttributedString *_multiPartString;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    UIColor *_highlightedTextColor;
    _MKMultiPartLabelMetrics *_data;
}

+ (id)_formattedStringsCache;
- (void).cxx_destruct;
@property(retain, nonatomic) _MKMultiPartLabelMetrics *data; // @synthesize data=_data;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) MKMultiPartAttributedString *multiPartString; // @synthesize multiPartString=_multiPartString;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) struct UIEdgeInsets textInset;
- (void)layoutSubviews;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAdjustedMultiPartStringFromString:(id)arg1;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (void)_updateStrings;
@property(retain, nonatomic) NSString *text;
- (id)_textAttributes;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) unsigned long long numberOfLines;
- (void)_updateColorsForCurrentState;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_setupTextView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

