//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9Magnifier36FreezeFramePageContentViewController : UIViewController
{
    MISSING_TYPE *pageSelectionDelegate;
    MISSING_TYPE *imageView;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *asset;
    MISSING_TYPE *filterSet;
    MISSING_TYPE *image;
    MISSING_TYPE *thumbnailWorkItem;
    MISSING_TYPE *fullSizeWorkItem;
    MISSING_TYPE *documentFilterWorkItem;
    MISSING_TYPE *imageProcessingQueue;
    MISSING_TYPE *delayedAssetSubscription;
    MISSING_TYPE *zoomSubscription;
    MISSING_TYPE *documentFilterSubscription;
    MISSING_TYPE *isShowingFullSizeImage;
    MISSING_TYPE *$__lazy_storage_$_singleTapGestureRecognizer;
    MISSING_TYPE *$__lazy_storage_$_longPressGestureRecognizer;
    MISSING_TYPE *$__lazy_storage_$_doubleTapGestureRecognizer;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)shareFreezeFrameMenuItemAction:(id)arg1;
- (void)longPress:(id)arg1;
- (void)doubleTap:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;

@end

