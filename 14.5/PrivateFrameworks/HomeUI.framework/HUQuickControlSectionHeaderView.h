//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <HomeUI/HFItemSectionAccessoryButtonHeader-Protocol.h>

@class HFItemSection, NSArray, NSAttributedString, NSString, UIButton, UILabel;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView <HFItemSectionAccessoryButtonHeader>
{
    _Bool _hideSeparator;
    HFItemSection *itemSection;
    NSString *_titleText;
    NSAttributedString *_attributedTitleText;
    NSString *_accessoryButtonTitleText;
    id <HFItemSectionAccessoryButtonHeaderDelegate> _accessoryButtonTarget;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
    UIButton *_accessoryButton;
    NSArray *_accessoryButtonConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (double)estimatedHeight;
+ (id)_titleFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accessoryButtonConstraints; // @synthesize accessoryButtonConstraints=_accessoryButtonConstraints;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HFItemSectionAccessoryButtonHeaderDelegate> accessoryButtonTarget; // @synthesize accessoryButtonTarget=_accessoryButtonTarget;
@property(nonatomic) _Bool hideSeparator; // @synthesize hideSeparator=_hideSeparator;
@property(retain, nonatomic) NSString *accessoryButtonTitleText; // @synthesize accessoryButtonTitleText=_accessoryButtonTitleText;
@property(retain, nonatomic) NSAttributedString *attributedTitleText; // @synthesize attributedTitleText=_attributedTitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) HFItemSection *itemSection; // @synthesize itemSection;
- (void)updateUIForReachabilityState:(unsigned long long)arg1;
- (void)accessoryButtonTapped;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

