//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;

@interface SKUISegmentedTableHeaderView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    UIView *_segmentedControl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (id)_borderView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool hidesBorderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

