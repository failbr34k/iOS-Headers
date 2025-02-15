//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString;

@interface CKTextTighteningLabel : UILabel
{
    NSString *_managedText;
    NSAttributedString *_tightenedAttributedText;
    double _tightenedAttributedTextBoundsWidth;
    NSAttributedString *_untightenedAttributedText;
    double _untightenedAttributedTextBoundsWidth;
}

+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (_Bool)attributedText:(id)arg1 fitsInRect:(struct CGRect)arg2;
+ (id)_attributedStringWithText:(id)arg1 font:(id)arg2 sizeCategory:(id)arg3 textRect:(struct CGRect)arg4 forFittingSize:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) double untightenedAttributedTextBoundsWidth; // @synthesize untightenedAttributedTextBoundsWidth=_untightenedAttributedTextBoundsWidth;
@property(retain, nonatomic) NSAttributedString *untightenedAttributedText; // @synthesize untightenedAttributedText=_untightenedAttributedText;
@property(nonatomic) double tightenedAttributedTextBoundsWidth; // @synthesize tightenedAttributedTextBoundsWidth=_tightenedAttributedTextBoundsWidth;
@property(retain, nonatomic) NSAttributedString *tightenedAttributedText; // @synthesize tightenedAttributedText=_tightenedAttributedText;
@property(copy, nonatomic) NSString *managedText; // @synthesize managedText=_managedText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateAttributedTextForFittingSize:(_Bool)arg1 boundsSize:(struct CGSize)arg2;
- (id)_attributedTextForFittingSize:(_Bool)arg1 boundsSize:(struct CGSize)arg2;
- (void)_updateTightenedAttributedText;
- (void)_clearTextTighteningCaches;
- (void)setFont:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end

