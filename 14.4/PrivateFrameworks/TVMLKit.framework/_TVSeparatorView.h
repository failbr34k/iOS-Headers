//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _TVSeparatorView : UIView
{
    UIView *_line1;
    UIView *_line2;
    UIView *_separatorComponent;
    UIColor *_tintColor;
    double _lineHeight;
}

+ (id)separatorViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) __weak UIView *separatorComponent; // @synthesize separatorComponent=_separatorComponent;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;

@end

