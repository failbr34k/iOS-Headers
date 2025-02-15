//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

#import <SeymourUI/SMUFloatingContentView-Protocol.h>

@class NSString, UIImage, UIView;
@protocol SMUFocusAnimationConfiguration;

@interface _SMUFloatingContentView : _UIFloatingContentView <SMUFloatingContentView>
{
}


// Remaining properties
@property(nonatomic) _Bool _disableOutsetShadowPath;
@property(nonatomic) struct CGSize asymmetricFocusedSizeIncrease;
@property(nonatomic) struct CGSize asymmetricScaleFactor;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) _Bool clipsContentToBounds;
@property(nonatomic, getter=isContentOpaque) _Bool contentOpaque;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic, getter=isContinuousCornerEnabled) _Bool continuousCornerEnabled;
@property(nonatomic) unsigned long long controlState;
@property(nonatomic) NSString *cornerCurve;
@property(nonatomic) double cornerRadius;
@property(copy, nonatomic) id <SMUFocusAnimationConfiguration> focusAnimationConfiguration;
@property(nonatomic) struct CGPoint focusScaleAnchorPoint;
@property(nonatomic) double focusedSizeIncrease;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) long long highlightStyle;
@property(nonatomic) _Bool roundContentWhenDeselected;
@property(nonatomic) double scaleFactor;
@property(nonatomic) _Bool scalesBackwards;
@property(nonatomic) struct CGRect shadowContentsCenter;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled;
@property(nonatomic) struct CGSize shadowExpansion;
@property(retain, nonatomic) UIImage *shadowImage;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(nonatomic) struct CGSize shadowSize;
@property(nonatomic) double shadowVerticalOffset;
@property(nonatomic) _Bool showsHighContrastFocusIndicator;
@property(nonatomic) struct CGSize unfocusedShadowExpansion;
@property(nonatomic) double unfocusedShadowOpacity;
@property(nonatomic) double unfocusedShadowRadius;
@property(nonatomic) double unfocusedShadowVerticalOffset;
@property(nonatomic) _Bool useShadowImage;
@property(readonly, nonatomic) UIView *visualEffectContainerView;
@property(nonatomic) double visualEffectContainerViewScaleFactor;
@end

