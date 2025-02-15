//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CPUIBannerViewButton : UIControl
{
    _Bool _wantsChevronImage;
    UILabel *_textLabel;
    UIView *_highlightView;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageCenterConstraint;
}

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)buttonWithChevronImage;
+ (id)buttonWithText:(id)arg1;
+ (id)buttonWithOK;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *imageCenterConstraint; // @synthesize imageCenterConstraint=_imageCenterConstraint;
@property(nonatomic) _Bool wantsChevronImage; // @synthesize wantsChevronImage=_wantsChevronImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_updateImageConstraint;
- (void)_updateFontIfNecessary;
- (void)_setupImagesIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

