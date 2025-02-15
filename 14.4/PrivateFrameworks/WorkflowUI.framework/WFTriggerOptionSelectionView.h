//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WFCircularGlyphView;

@interface WFTriggerOptionSelectionView : UIView
{
    _Bool _highlighted;
    UIImageView *_imageView;
    UILabel *_label;
    WFCircularGlyphView *_selectedView;
    WFCircularGlyphView *_unselectedView;
}

+ (double)scaledValueForValue:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFCircularGlyphView *unselectedView; // @synthesize unselectedView=_unselectedView;
@property(readonly, nonatomic) WFCircularGlyphView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateAlpha;
@property(nonatomic) _Bool selected;
- (id)init;

@end

