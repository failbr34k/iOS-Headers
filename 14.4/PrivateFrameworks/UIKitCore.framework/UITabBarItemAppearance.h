//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UITabBarAppearance, UITabBarItemStateAppearance, _UITabBarItemData;

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding>
{
    UITabBarItemStateAppearance *_states[5];
    _UITabBarItemData *_data;
    UITabBarAppearance *_owningAppearance;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setOwningAppearance:) __weak UITabBarAppearance *_owningAppearance; // @synthesize _owningAppearance;
@property(retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // @synthesize _data;
- (void)configureWithDefaultForStyle:(long long)arg1;
@property(readonly, nonatomic) UITabBarItemStateAppearance *focused;
@property(readonly, nonatomic) UITabBarItemStateAppearance *disabled;
@property(readonly, nonatomic) UITabBarItemStateAppearance *selected;
@property(readonly, nonatomic) UITabBarItemStateAppearance *highlighted;
@property(readonly, nonatomic) UITabBarItemStateAppearance *normal;
- (id)_proxyForState:(long long)arg1;
- (void)_writeToStorage:(CDUnknownBlockType)arg1;
- (void)_updateDataTo:(id)arg1;
- (void)_describeInto:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarItemAppearance:(id)arg1;
- (id)_initWithTabBarItemData:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (void)dealloc;

@end

