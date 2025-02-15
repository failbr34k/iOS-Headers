//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLPreviewScrollViewZoomDelegate-Protocol.h>

@class NSString, QLPreviewScrollView, UITapGestureRecognizer, UIView;

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate>
{
    QLPreviewScrollView *_scrollView;
    UIView *_contentView;
    UITapGestureRecognizer *_doubleTapGesture;
    _Bool _isVisible;
    _Bool _shouldFit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldFit; // @synthesize shouldFit=_shouldFit;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg1;
- (double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2;
- (void)previewScrollViewWillBeginZooming:(id)arg1;
- (_Bool)shouldLayoutContentBasedOnPeripheryInsets;
- (void)_updateScrollViewZoomUpdate:(struct CGSize)arg1;
- (id)parallaxView;
- (id)scrollView;
- (_Bool)supportsScrollingUpAndDownUsingKeyCommands;
- (_Bool)canPinchToDismiss;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)didEndZoomingAtScale:(double)arg1;
- (void)willBeginZooming;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_doubleTapRecognized:(id)arg1;
- (void)loadView;
- (struct CGSize)imageSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

