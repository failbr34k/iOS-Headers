//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl
{
    _Bool _lastTouchRemainedOnSelectedSegment;
}

+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;
+ (_Bool)_cursorInteractionEnabled;
@property(readonly, nonatomic) _Bool lastTouchRemainedOnSelectedSegment; // @synthesize lastTouchRemainedOnSelectedSegment=_lastTouchRemainedOnSelectedSegment;
- (void)_highlightSegment:(long long)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

