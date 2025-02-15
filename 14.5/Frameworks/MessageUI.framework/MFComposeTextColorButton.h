//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface MFComposeTextColorButton : UIButton
{
    UIColor *_color;
    UIView *_colorView;
    UIView *_colorRingView;
}

+ (id)buttonWithColor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorRingView; // @synthesize colorRingView=_colorRingView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)layoutSubviews;

@end

