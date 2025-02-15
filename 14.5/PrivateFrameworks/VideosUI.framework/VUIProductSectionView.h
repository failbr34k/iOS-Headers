//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUILabel, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionView : UIView
{
    VUIProductMetadataLayout *_layout;
    VUILabel *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
    UIView *_defaultFocusView;
    VUILabel *_prototypeInfoHeaderLabel;
}

+ (id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4;
+ (id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) VUILabel *prototypeInfoHeaderLabel; // @synthesize prototypeInfoHeaderLabel=_prototypeInfoHeaderLabel;
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) VUILabel *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VUIProductMetadataLayout *layout; // @synthesize layout=_layout;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

