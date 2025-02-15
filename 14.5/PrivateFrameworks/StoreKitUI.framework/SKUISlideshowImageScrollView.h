//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowImageScrollView : UIScrollView
{
    UIImageView *_imageView;
    struct CGPoint _centerPointBeforeResize;
    double _scaleBeforeResize;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_resetMinMaxZoomScales;
- (void)_recoverFromResize;
- (void)_prepareToResize;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)visibleRect;
- (void)zoomIntoPoint:(struct CGPoint)arg1;
- (void)resetZoomScale;
- (id)initWithFrame:(struct CGRect)arg1;

@end

