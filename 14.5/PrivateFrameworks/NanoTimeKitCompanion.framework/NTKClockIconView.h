//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface NTKClockIconView : UIView
{
    _Bool _paused;
    double _fullDiameter;
}

@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) double fullDiameter; // @synthesize fullDiameter=_fullDiameter;
- (void)restoreBorrowedViews;
- (id)borrowTimeView;
- (id)borrowCircleView;

@end

