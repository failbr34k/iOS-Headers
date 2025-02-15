//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer
{
    struct CGSize _constraintSize;
    _Bool _custom;
    UIColor *_gradientEndColor;
    double _gradientHeight;
}

+ (id)consumerWithConstraintSize2:(struct CGSize)arg1;
+ (id)consumerWithConstraintSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(nonatomic) struct CGSize constraintSize; // @synthesize constraintSize=_constraintSize;
- (void)_drawGradientWithContext:(struct CGContext *)arg1 imageRect:(struct CGRect)arg2;
- (id)imageForImage:(id)arg1;

@end

