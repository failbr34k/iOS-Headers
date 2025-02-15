//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKMacToolbarViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIView, UIVisualEffectView, UIWindowScene;
@protocol CKMacToolbarItemProvider;

@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate>
{
    _Bool _shouldDrawPrimaryBlur;
    _Bool _shouldDrawSecondaryBlur;
    _Bool _isInStandaloneWindow;
    NSString *_sceneSessionIdentifier;
    id <CKMacToolbarItemProvider> _primaryItemProvider;
    id <CKMacToolbarItemProvider> _secondaryItemProvider;
    double _splitViewDividerXPosition;
    UIWindowScene *_windowScene;
    NSMutableDictionary *_toolbarItemCache;
    UIVisualEffectView *_primaryVirtualBackgroundView;
    UIVisualEffectView *_secondaryVirtualBackgroundView;
    double _preferredPrimaryHeight;
    double _preferredSecondaryHeight;
    UIView *_primaryProvidedVirtualView;
    UIView *_secondaryProvidedVirtualView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *secondaryProvidedVirtualView; // @synthesize secondaryProvidedVirtualView=_secondaryProvidedVirtualView;
@property(nonatomic) __weak UIView *primaryProvidedVirtualView; // @synthesize primaryProvidedVirtualView=_primaryProvidedVirtualView;
@property(nonatomic) double preferredSecondaryHeight; // @synthesize preferredSecondaryHeight=_preferredSecondaryHeight;
@property(nonatomic) double preferredPrimaryHeight; // @synthesize preferredPrimaryHeight=_preferredPrimaryHeight;
@property(readonly, nonatomic) UIVisualEffectView *secondaryVirtualBackgroundView; // @synthesize secondaryVirtualBackgroundView=_secondaryVirtualBackgroundView;
@property(readonly, nonatomic) UIVisualEffectView *primaryVirtualBackgroundView; // @synthesize primaryVirtualBackgroundView=_primaryVirtualBackgroundView;
@property(retain, nonatomic) NSMutableDictionary *toolbarItemCache; // @synthesize toolbarItemCache=_toolbarItemCache;
@property(nonatomic) _Bool isInStandaloneWindow; // @synthesize isInStandaloneWindow=_isInStandaloneWindow;
@property(readonly, nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(nonatomic) _Bool shouldDrawSecondaryBlur; // @synthesize shouldDrawSecondaryBlur=_shouldDrawSecondaryBlur;
@property(nonatomic) _Bool shouldDrawPrimaryBlur; // @synthesize shouldDrawPrimaryBlur=_shouldDrawPrimaryBlur;
@property(nonatomic) double splitViewDividerXPosition; // @synthesize splitViewDividerXPosition=_splitViewDividerXPosition;
@property(retain, nonatomic) id <CKMacToolbarItemProvider> secondaryItemProvider; // @synthesize secondaryItemProvider=_secondaryItemProvider;
@property(retain, nonatomic) id <CKMacToolbarItemProvider> primaryItemProvider; // @synthesize primaryItemProvider=_primaryItemProvider;
@property(readonly, nonatomic) __weak NSString *sceneSessionIdentifier; // @synthesize sceneSessionIdentifier=_sceneSessionIdentifier;
- (_Bool)macToolbarView:(id)arg1 shouldAllowTouchesForPoint:(struct CGPoint)arg2 andEvent:(id)arg3;
- (long long)_providerTypeForPointInsideVirtualView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldDisAllowTouchesToPassForProviderType:(long long)arg1;
- (void)_setVirtualView:(id)arg1 forProviderType:(long long)arg2;
- (id)_virtualBackgroundViewForProviderType:(long long)arg1;
- (id)_cachedVirtualViewForProviderType:(long long)arg1;
- (id)_providerForType:(long long)arg1;
- (long long)_providerTypeForItemIdentifier:(id)arg1;
- (void)_updateVirtualViewForProviderType:(long long)arg1;
- (void)updateVirtualViewForProvider:(id)arg1;
- (void)removeItemProvider:(id)arg1;
- (void)removeVirtualViewForProvider:(id)arg1;
- (void)removeToolbarItems;
- (void)removeItemProviders;
- (void)updateWithFrame:(struct CGRect)arg1;
- (_Bool)reparentToolbarItemsForProvider:(id)arg1;
- (void)reloadToolbarItems;
- (_Bool)_updateFrameWithPreferredHeightsForFrame:(struct CGRect)arg1;
- (void)_updateBackgroundViewsRefreshingViewHeights:(_Bool)arg1;
- (double)_getPreferredHeightForProviderType:(long long)arg1 withDefaultHeight:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithScene:(id)arg1 connectingToSession:(id)arg2 inStandaloneWindow:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

