//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver>
{
    struct {
        unsigned long long needsUpdate;
        unsigned long long updated;
        _Bool isPerformingUpdate;
    } _updateFlags;
    UIView *_successView;
    UIView *_errorView;
    UIActivityIndicatorView *_progressIndicatorView;
    _Bool __isPerformingChanges;
    PUAssetViewModel *_assetViewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateStatusView;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

