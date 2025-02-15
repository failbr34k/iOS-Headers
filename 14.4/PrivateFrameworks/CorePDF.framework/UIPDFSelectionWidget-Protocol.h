//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIPDFPageView, UIPDFSelection;

@protocol UIPDFSelectionWidget
@property(nonatomic) UIPDFPageView *pageView;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (struct CGRect)selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint)arg1;
- (void)layout;
- (struct CGPoint)viewOffset;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (void)hide;
- (void)remove;
- (void)setSelection:(UIPDFSelection *)arg1;
@end

