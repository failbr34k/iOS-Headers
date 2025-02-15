//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorLayout-Protocol.h>

@class NSString;
@protocol AVTAvatarAttributeEditorLayout;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout>
{
    double _avatarContainerAlpha;
    id <AVTAvatarAttributeEditorLayout> _backingLayout;
    struct CGRect _avatarContainerFrame;
    struct CGRect _attributesContentViewFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AVTAvatarAttributeEditorLayout> backingLayout; // @synthesize backingLayout=_backingLayout;
@property(nonatomic) struct CGRect attributesContentViewFrame; // @synthesize attributesContentViewFrame=_attributesContentViewFrame;
@property(nonatomic) double avatarContainerAlpha; // @synthesize avatarContainerAlpha=_avatarContainerAlpha;
@property(nonatomic) struct CGRect avatarContainerFrame; // @synthesize avatarContainerFrame=_avatarContainerFrame;
@property(readonly, nonatomic) unsigned long long supportedLayoutOrientation;
@property(readonly, nonatomic) struct UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property(readonly, nonatomic) struct UIEdgeInsets attributesContentViewInsets;
@property(readonly, nonatomic) struct CGRect verticalRuleFrame;
@property(readonly, nonatomic) double verticalRuleAlpha;
@property(readonly, nonatomic) struct CGRect headerMaskingViewFrame;
@property(readonly, nonatomic) double headerMaskingViewAlpha;
@property(readonly, nonatomic) struct CGRect userInfoFrame;
@property(readonly, nonatomic) _Bool showSideGroupPicker;
@property(readonly, nonatomic) struct CGRect sideGroupContainerFrame;
@property(readonly, nonatomic) struct CGRect groupDialContainerFrame;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) struct CGSize containerSize;
@property(readonly, copy, nonatomic) NSString *contentSizeCategory;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool RTL;

@end

