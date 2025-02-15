//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFItem, HUGridServiceCell, UIImageView;
@protocol HFServiceLikeItem;

@interface HUHomeAccessoryTileView : UIView
{
    _Bool _iconOnlyTile;
    UIImageView *_homeView;
    HUGridServiceCell *_tileView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool iconOnlyTile; // @synthesize iconOnlyTile=_iconOnlyTile;
@property(readonly, nonatomic) HUGridServiceCell *tileView; // @synthesize tileView=_tileView;
@property(readonly, nonatomic) UIImageView *homeView; // @synthesize homeView=_homeView;
- (void)layoutSubviews;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
- (id)initWithFrame:(struct CGRect)arg1 categoryType:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2 iconOnlyTile:(_Bool)arg3;

@end

