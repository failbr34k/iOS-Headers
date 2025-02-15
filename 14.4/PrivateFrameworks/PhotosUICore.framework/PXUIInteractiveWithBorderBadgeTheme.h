//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIBadgeTheme-Protocol.h>

@class CAFilter, NSString, UIBlurEffect, UIColor, UIFont, UIImageSymbolConfiguration;

@interface PXUIInteractiveWithBorderBadgeTheme : NSObject <PXUIBadgeTheme>
{
    UIImageSymbolConfiguration *_imageConfiguration;
    double _imageAlpha;
    UIColor *_imageTintColor;
    CAFilter *_imageCompositingFilter;
    UIFont *_labelFont;
    double _labelAlpha;
    UIColor *_labelTextColor;
    CAFilter *_labelCompositingFilter;
    Class _backgroundViewClass;
    double _backgroundCornerRadius;
    double _backgroundBorderWidth;
    double _backgroundAlpha;
    UIColor *_backgroundColor;
    UIColor *_backgroundBorderColor;
    UIBlurEffect *_backgroundBlurEffect;
}

+ (id)sharedToggledOffBadgeTheme;
+ (id)sharedToggledOnBadgeTheme;
+ (id)sharedToggledOffOverContentBadgeTheme;
+ (id)sharedToggledOnOverContentBadgeTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(readonly, nonatomic) UIColor *backgroundBorderColor; // @synthesize backgroundBorderColor=_backgroundBorderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(readonly, nonatomic) double backgroundBorderWidth; // @synthesize backgroundBorderWidth=_backgroundBorderWidth;
@property(readonly, nonatomic) double backgroundCornerRadius; // @synthesize backgroundCornerRadius=_backgroundCornerRadius;
@property(readonly, nonatomic) Class backgroundViewClass; // @synthesize backgroundViewClass=_backgroundViewClass;
@property(readonly, nonatomic) CAFilter *labelCompositingFilter; // @synthesize labelCompositingFilter=_labelCompositingFilter;
@property(readonly, nonatomic) UIColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(readonly, nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(readonly, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(readonly, nonatomic) CAFilter *imageCompositingFilter; // @synthesize imageCompositingFilter=_imageCompositingFilter;
@property(readonly, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(readonly, nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageConfiguration; // @synthesize imageConfiguration=_imageConfiguration;
- (id)init;
- (id)initWithIsToggledOn:(_Bool)arg1 isOverContent:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

