//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageFeaturesView : UIView
{
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    long long _features;
    NSMutableArray *_featureViews;
    unsigned long long _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long gameCenterFeatures; // @synthesize gameCenterFeatures=_gameCenterFeatures;
@property(nonatomic) long long features; // @synthesize features=_features;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)_gameCenterStringWithFeatures:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

