//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, _UIBackdropView;

@interface AKCalloutBar : UIView
{
    double _arrowX;
    _Bool _up;
    NSArray *_controls;
    _UIBackdropView *_backgroundView;
    _UIBackdropView *_separatorBackgroundView;
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    UIImageView *_separatorMaskView;
    struct CGRect _highlightRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(nonatomic) _Bool up; // @synthesize up=_up;
@property(nonatomic) double arrowX; // @synthesize arrowX=_arrowX;
- (struct CGSize)sizeThatFitsControls:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)dividerLineRectForControl:(long long)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 forControl:(id)arg2;
- (void)setBlurDisabled:(_Bool)arg1;
- (id)newMaskView:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

