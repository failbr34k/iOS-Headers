//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/TSDAutoscrollDelegate-Protocol.h>
#import <TSReading/TSDTrackerManipulator-Protocol.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnobTracker, TSDRep, TSDiOSCanvasViewController, UITouch;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator>
{
    TSDiOSCanvasViewController *mCVC;
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    struct CGPoint mKnobToTouchOffset;
    TSDKnobTracker *mTracker;
    _Bool mKnobTouchHasMoved;
    _Bool mDelayHasElapsed;
    struct CGPoint mOriginalPointInWindow;
    UITouch *mSecondTouch;
    TSDRep *mLastHitRep;
    _Bool mTouchesMoved;
    TSDAutoscroll *mAutoscroll;
    struct CGPoint mAutoscrollPoint;
}

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
@property(nonatomic) struct CGPoint autoscrollPoint; // @synthesize autoscrollPoint=mAutoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
- (struct CGPoint)p_pointInUnscaledCanvas;
- (_Bool)p_hitRepIsValid:(id)arg1;
- (int)allowedAutoscrollDirections;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)p_triggerDelayedKnobTracking:(id)arg1;
- (void)p_requestDelayedKnobTracking:(double)arg1;
- (void)p_cancelDelayedKnobTracking;
- (void)operationDidEnd;
- (_Bool)readyToEndOperation;
- (id)tracker;
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;
- (void)cancelBecauseOfRotation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

