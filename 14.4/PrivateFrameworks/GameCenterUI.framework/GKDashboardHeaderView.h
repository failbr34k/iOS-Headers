//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, UISegmentedControl;

@interface GKDashboardHeaderView : UICollectionReusableView
{
    _Bool _didSetupLikeButton;
    GKGameRecord *_gameRecord;
    UISegmentedControl *_segmentedControl;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool didSetupLikeButton; // @synthesize didSetupLikeButton=_didSetupLikeButton;
@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)awakeFromNib;
- (void)dealloc;

@end

