//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface DOCChainedTagsView : UIView
{
    NSArray *_tagColors;
    UIColor *_borderColor;
    double _knockOutBorderWidth;
    unsigned long long _spacing;
    double _tagDimension;
    struct CGPoint _alignmentOffset;
}

+ (void)drawTagsInContext:(struct CGContext *)arg1 diameter:(double)arg2 horizontalSpacing:(unsigned long long)arg3 layoutDirection:(long long)arg4 tagColors:(id)arg5 ringColor:(id)arg6 borderColor:(id)arg7 knockOutBorderWidth:(double)arg8;
+ (struct CGSize)sizeForDiameter:(double)arg1 horizontalSpacing:(unsigned long long)arg2 tags:(id)arg3;
+ (double)horizontalSpacingForSpace:(unsigned long long)arg1 tagDiameter:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint alignmentOffset; // @synthesize alignmentOffset=_alignmentOffset;
@property(nonatomic) double tagDimension; // @synthesize tagDimension=_tagDimension;
@property(nonatomic) unsigned long long spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double knockOutBorderWidth; // @synthesize knockOutBorderWidth=_knockOutBorderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSArray *tagColors; // @synthesize tagColors=_tagColors;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)horizontalSpacing;
- (void)setknockOutBorderWidth:(double)arg1;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

