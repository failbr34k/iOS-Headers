//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBSceneViewControlling-Protocol.h>
#import <SpringBoard/SBSceneViewPresentationConfiguring-Protocol.h>

@class NSString, SBSceneHandle, SBSceneView, UIView;
@protocol SBScenePlaceholderContentContext;

@interface SBSceneViewController : UIViewController <SBSceneViewPresentationConfiguring, SBSceneViewControlling>
{
    SBSceneHandle *_sceneHandle;
    long long _displayMode;
    long long _contentOrientation;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    UIView *_customContentView;
    SBSceneView *_sceneView;
    struct CGSize _contentReferenceSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_sceneView) SBSceneView *sceneView; // @synthesize sceneView=_sceneView;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext; // @synthesize placeholderContentContext=_placeholderContentContext;
@property(readonly, nonatomic) long long contentInterfaceOrientation; // @synthesize contentInterfaceOrientation=_contentOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize; // @synthesize contentReferenceSize=_contentReferenceSize;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
- (void)viewDidLoad;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (void)_setSceneView:(id)arg1;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)newSnapshotView;
- (id)newSnapshot;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSceneHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

