//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PULivePhotoKeyFrameSelectionViewControllerDelegate-Protocol.h>
#import <PhotosUI/PXLivePhotoTrimScrubberDelegate-Protocol.h>
#import <PhotosUI/PXSlowMotionEditorDelegate-Protocol.h>
#import <PhotosUI/PXTrimToolPlayerObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AVPlayerItem, NSLayoutConstraint, NSNumber, NSString, PICompositionController, PLEditSource, PLPhotoEditRenderer, PULivePhotoKeyFrameSelectionViewController, PUTimeCodeOverlayView, PXLivePhotoTrimScrubber, PXLivePhotoTrimScrubberSnapStripController, PXLivePhotoTrimScrubberSpec, PXSlowMotionEditor, UIButton, UIImage, UILabel, UIView, UIVisualEffectView;
@protocol PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;

__attribute__((visibility("hidden")))
@interface PUTrimToolController : UIViewController <PXTrimToolPlayerObserver, PXLivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXSlowMotionEditorDelegate>
{
    PXLivePhotoTrimScrubber *_trimScrubber;
    PXSlowMotionEditor *_slomoView;
    _Bool _needsUpdateRenderForVisualChanges;
    PUTimeCodeOverlayView *_timeCodeOverlayView;
    NSLayoutConstraint *_timeCodeHorizontalConstraint;
    PXLivePhotoTrimScrubberSpec *_spec;
    _Bool _disabled;
    _Bool _slomoEnabled;
    _Bool _slomoDraggingStartHandle;
    _Bool _playButtonEnabled;
    UIButton *_playPauseButton;
    id <PUTrimToolControllerDelegate> _delegate;
    id <PXTrimToolPlayerWrapper> _playerWrapper;
    PICompositionController *_compositionController;
    unsigned long long _state;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    UIVisualEffectView *_auxilaryContainerView;
    UIVisualEffectView *_scrubberPlayButtonContainerView;
    NSLayoutConstraint *_scrubberContainerToAuxiliaryContainerConstraint;
    PULivePhotoKeyFrameSelectionViewController *_livePhotoKeyFramePicker;
    PLPhotoEditRenderer *__renderer;
    AVPlayerItem *_currentVideoPlayerItem;
    PXLivePhotoTrimScrubberSnapStripController *_snapStripController;
    unsigned long long _playheadStyle;
    unsigned long long _internalState;
    NSNumber *_slomoTimeForPlayheadUpdate;
    UILabel *_debugTimeCodeLabel;
    UILabel *_debugPlayerTimeLabel;
    UILabel *_debugOriginalTimeLabel;
    UILabel *_debugTrimToolStateLabel;
    UILabel *_debugTrimToolPlayheadStyleLabel;
    UIView *_debugStartRectView;
    UIView *_debugEndRectView;
    UIView *_debugStartOffsetView;
    UIView *_debugEndOffsetView;
    CDStruct_1b6d18a9 _unadjustedStillImageTime;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _originalEndTime;
    CDStruct_1b6d18a9 _suggestedKeyFrameTime;
    CDStruct_1b6d18a9 _cachedFrameDuration;
    CDStruct_1b6d18a9 _unadjustedAssetDuration;
    CDStruct_1b6d18a9 _debugPlayerTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *debugEndOffsetView; // @synthesize debugEndOffsetView=_debugEndOffsetView;
@property(retain, nonatomic) UIView *debugStartOffsetView; // @synthesize debugStartOffsetView=_debugStartOffsetView;
@property(retain, nonatomic) UIView *debugEndRectView; // @synthesize debugEndRectView=_debugEndRectView;
@property(retain, nonatomic) UIView *debugStartRectView; // @synthesize debugStartRectView=_debugStartRectView;
@property(retain, nonatomic) UILabel *debugTrimToolPlayheadStyleLabel; // @synthesize debugTrimToolPlayheadStyleLabel=_debugTrimToolPlayheadStyleLabel;
@property(retain, nonatomic) UILabel *debugTrimToolStateLabel; // @synthesize debugTrimToolStateLabel=_debugTrimToolStateLabel;
@property(retain, nonatomic) UILabel *debugOriginalTimeLabel; // @synthesize debugOriginalTimeLabel=_debugOriginalTimeLabel;
@property(retain, nonatomic) UILabel *debugPlayerTimeLabel; // @synthesize debugPlayerTimeLabel=_debugPlayerTimeLabel;
@property(nonatomic) CDStruct_1b6d18a9 debugPlayerTime; // @synthesize debugPlayerTime=_debugPlayerTime;
@property(retain, nonatomic) UILabel *debugTimeCodeLabel; // @synthesize debugTimeCodeLabel=_debugTimeCodeLabel;
@property(retain, nonatomic) NSNumber *slomoTimeForPlayheadUpdate; // @synthesize slomoTimeForPlayheadUpdate=_slomoTimeForPlayheadUpdate;
@property(readonly, nonatomic) _Bool playButtonEnabled; // @synthesize playButtonEnabled=_playButtonEnabled;
@property(nonatomic) _Bool slomoDraggingStartHandle; // @synthesize slomoDraggingStartHandle=_slomoDraggingStartHandle;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
@property(nonatomic) CDStruct_1b6d18a9 unadjustedAssetDuration; // @synthesize unadjustedAssetDuration=_unadjustedAssetDuration;
@property(retain, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController; // @synthesize snapStripController=_snapStripController;
@property(nonatomic) CDStruct_1b6d18a9 cachedFrameDuration; // @synthesize cachedFrameDuration=_cachedFrameDuration;
@property(retain, nonatomic) AVPlayerItem *currentVideoPlayerItem; // @synthesize currentVideoPlayerItem=_currentVideoPlayerItem;
@property(retain, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer; // @synthesize _renderer=__renderer;
@property(nonatomic) __weak PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker; // @synthesize livePhotoKeyFramePicker=_livePhotoKeyFramePicker;
@property(retain, nonatomic) NSLayoutConstraint *scrubberContainerToAuxiliaryContainerConstraint; // @synthesize scrubberContainerToAuxiliaryContainerConstraint=_scrubberContainerToAuxiliaryContainerConstraint;
@property(retain, nonatomic) UIVisualEffectView *scrubberPlayButtonContainerView; // @synthesize scrubberPlayButtonContainerView=_scrubberPlayButtonContainerView;
@property(retain, nonatomic) UIVisualEffectView *auxilaryContainerView; // @synthesize auxilaryContainerView=_auxilaryContainerView;
@property(retain, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic, getter=isSlomoEnabled) _Bool slomoEnabled; // @synthesize slomoEnabled=_slomoEnabled;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) CDStruct_1b6d18a9 suggestedKeyFrameTime; // @synthesize suggestedKeyFrameTime=_suggestedKeyFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) CDStruct_1b6d18a9 originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) CDStruct_1b6d18a9 unadjustedStillImageTime; // @synthesize unadjustedStillImageTime=_unadjustedStillImageTime;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) id <PXTrimToolPlayerWrapper> playerWrapper; // @synthesize playerWrapper=_playerWrapper;
@property(nonatomic) __weak id <PUTrimToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)slowMotionEditorRequestForceUnzoom:(id)arg1;
- (_Bool)slowMotionEditorRequestForceZoom:(id)arg1;
- (void)slowMotionEditorEndValueChanged:(id)arg1;
- (void)slowMotionEditorStartValueChanged:(id)arg1;
- (void)slowMotionEditorDidEndEditing:(id)arg1;
- (void)slowMotionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)playerWrapper:(id)arg1 timeChanged:(CDStruct_1b6d18a9)arg2;
- (void)playerStatusChangedForPlayerWrapper:(id)arg1;
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;
- (id)_slomoMapperForCurrentConfiguration;
- (CDStruct_1b6d18a9)_originalTimeFromCurrentPlayerScaledTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_currentPlayerScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
- (void)_handlePlayPauseButton:(id)arg1;
- (void)_updatePlayPauseButton;
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;
- (struct CGRect)_presentationRectFromLoupeRect;
- (void)_resetScrubberToStillPhotoFrame;
- (CDStruct_1b6d18a9)_frameDuration;
- (id)_currentVideoAsset;
- (void)_updatePlayerItem;
- (void)_updateSnappingDots;
- (void)_updateScrubberTimes;
- (void)_updateScrubberContents;
- (void)_updatePlayerWrapperTrim;
- (void)_updateCompositionController;
- (void)_updateTimeCodeOverlay;
- (void)_updateScrubberPresentedPlayhead;
- (void)_updatePlayerWrapperTimeObserver;
- (void)_updatePlayheadStyle;
- (void)_updatePublicState;
- (void)_updateDebugPlayheadStyleLabel;
- (void)_updateDebugTrimToolStateLabel;
- (void)_updateDebugPlayerTimeLabel;
- (void)_updateDebugTimeCodeLabel;
- (void)_showKeyFrameSelection;
- (_Bool)_allowsKeyFrameCreation;
- (void)_setState:(unsigned long long)arg1;
@property(nonatomic) CDStruct_1b6d18a9 adjustedStillFrameTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentStillFrameTime;
- (id)currentEditSource;
- (void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2;
- (void)releaseAVObjects;
@property(readonly, nonatomic) double scrubberHeight;
- (void)trimScrubberDidLayoutSubviews:(id)arg1;
- (void)trimScrubberDidUnzoom:(id)arg1;
- (void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)trimScrubber:(id)arg1 didChangeLoupeRect:(struct CGRect)arg2;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(_Bool)arg3;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (_Bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;
- (void)_seekToTimeForElement:(long long)arg1 exact:(_Bool)arg2;
@property(nonatomic) CDStruct_1b6d18a9 playheadTime;
- (id)_playPauseButtonIfLoaded;
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void)_createRendererIfNeeded;
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)livePhotoRenderDidChange:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)trimScrubber:(id)arg1 debugEndOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugEndRect:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartRect:(struct CGRect)arg2;
- (void)viewDidLoad;
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(_Bool)arg2 slomoEnabled:(_Bool)arg3;
- (id)initWithPlayerWrapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

