//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString, VKCameraController;

__attribute__((visibility("hidden")))
@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController>
{
    _Bool _pinching;
    struct CGPoint _pinchStartFocusPoint;
    _Bool _panning;
    struct CGPoint _panStartFocusPoint;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    _Bool _rotating;
    struct CGPoint _rotateStartFocusPoint;
    double _lastRotation;
    _Bool _shouldRotationRubberband;
    _Bool _pitching;
    struct CGPoint _pitchStartFocusPoint;
    struct CGPoint _pitchStartScreenPoint;
    _Bool _notifyCameraStateChanges;
    VKCameraController *_cameraController;
}

- (_Bool)isRotating;
- (_Bool)isPanning;
- (_Bool)isPinching;
- (_Bool)isPitching;
- (_Bool)isGesturing;
- (void)endPitch:(struct CGPoint)arg1;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)endPan:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)beginPan:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)endZoom:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferGestureState:(id)arg1;
- (void)dealloc;
- (id)initWithCameraController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

