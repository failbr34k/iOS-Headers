//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImage;

@interface CertInfoGradientLabel : UIView
{
    NSString *_text;
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor *_patternColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGColor *)_patternColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;

@end

