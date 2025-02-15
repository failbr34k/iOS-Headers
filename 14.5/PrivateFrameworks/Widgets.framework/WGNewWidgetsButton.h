//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSCache, NSString, _UILegibilitySettings;

@interface WGNewWidgetsButton : UIButton
{
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
    NSCache *_numberAttributedStringCache;
    unsigned long long _badgeNumber;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_text;
    NSString *_numberText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *numberText; // @synthesize numberText=_numberText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (struct CGSize)_numberLabelSizeForText:(id)arg1 withAttributes:(id)arg2;
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;
- (id)_attributedStringWithColor:(id)arg1;
- (id)_numberTextAttributes;
- (id)_textAttributesWithColor:(id)arg1;
- (id)_numberFont;
- (id)_textFont;
- (void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2;
- (void)_updateButtons;
- (void)_buttonStateChanged:(id)arg1;
- (void)_buttonPushed:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateForContentCategorySizeChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

