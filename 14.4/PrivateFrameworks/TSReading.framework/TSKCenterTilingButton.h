//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSKCenterTilingButton : UIButton
{
    UIImage *mLeftCapImage_Normal;
    UIImage *mLeftCapImage_Disabled;
    UIImage *mLeftCapImage_Active;
    UIImage *mLeftCapImage_Selected;
    UIImage *mLeftCapImage_ActiveSelected;
    UIImage *mRightCapImage_Normal;
    UIImage *mRightCapImage_Disabled;
    UIImage *mRightCapImage_Active;
    UIImage *mRightCapImage_Selected;
    UIImage *mRightCapImage_ActiveSelected;
    UIImage *mCenterTileImage_Normal;
    UIImage *mCenterTileImage_Disabled;
    UIImage *mCenterTileImage_Active;
    UIImage *mCenterTileImage_Selected;
    UIImage *mCenterTileImage_ActiveSelected;
    UIImage *mLeftCenterTileImage_Normal;
    UIImage *mLeftCenterTileImage_Disabled;
    UIImage *mLeftCenterTileImage_Active;
    UIImage *mLeftCenterTileImage_Selected;
    UIImage *mLeftCenterTileImage_ActiveSelected;
    UIImage *mRightCenterTileImage_Normal;
    UIImage *mRightCenterTileImage_Disabled;
    UIImage *mRightCenterTileImage_Active;
    UIImage *mRightCenterTileImage_Selected;
    UIImage *mRightCenterTileImage_ActiveSelected;
    int mTilingType;
}

- (void)p_tileHorizCenterOutwardwithLeft:(id)arg1 andRight:(id)arg2 inRect:(struct CGRect)arg3;
- (void)p_tileButtedToCapRtoL:(id)arg1 inRect:(struct CGRect)arg2;
- (void)p_tileButtedToCapLtoR:(id)arg1 inRect:(struct CGRect)arg2;
- (void)p_tileSimple:(id)arg1 inRect:(struct CGRect)arg2;
- (void)p_resetBackgroundImageForState:(unsigned long long)arg1;
- (void)setRightCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRightCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)rightCenterTileImageForState:(unsigned long long)arg1;
- (id)leftCenterTileImageForState:(unsigned long long)arg1;
- (id)centerTileImageForState:(unsigned long long)arg1;
- (id)rightCapImageForState:(unsigned long long)arg1;
- (id)leftCapImageForState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTilingType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

