//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, _Badge;

__attribute__((visibility("hidden")))
@interface SKUICrossFadingTabBarButton : UIControl
{
    UILabel *_selectedTitleLabel;
    UIImageView *_selectedImageView;
    UILabel *_standardTitleLabel;
    UIImageView *_standardImageView;
    _Badge *_badge;
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    double _selectionProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double selectionProgress; // @synthesize selectionProgress=_selectionProgress;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_positionBadge;
- (void)_setBadgeValue:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

