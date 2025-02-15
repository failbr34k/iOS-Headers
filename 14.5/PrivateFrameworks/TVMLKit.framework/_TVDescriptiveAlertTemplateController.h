//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement, NSArray, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;
    NSArray *_templateSubviews;
    NSArray *_templateSubcontrollers;
    UIView *_preferredFocusView;
    UIColor *_backgroundColor;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
}

- (void).cxx_destruct;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (long long)_blurEffectStyle;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (void)_normalizeButtonsInViews:(id)arg1;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;

@end

