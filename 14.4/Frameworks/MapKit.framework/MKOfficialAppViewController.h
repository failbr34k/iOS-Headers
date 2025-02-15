//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKOfficialAppViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKOfficialAppView, MKPlaceSectionHeaderView, NSString;
@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _Bool _isShowing;
    MKMapItem *_mapItem;
    MKOfficialAppView *_officialAppView;
    MKPlaceSectionHeaderView *_officialAppHeaderView;
    id <_MKInfoCardAnalyticsDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) MKPlaceSectionHeaderView *officialAppHeaderView; // @synthesize officialAppHeaderView=_officialAppHeaderView;
@property(retain, nonatomic) MKOfficialAppView *officialAppView; // @synthesize officialAppView=_officialAppView;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)officialAppViewDidSelectPunchOutButton:(id)arg1;
- (void)_updateAppImage:(id)arg1 error:(id)arg2;
- (void)setAppStoreApp:(id)arg1;
- (void)_loadAppArtwork:(id)arg1;
- (void)_loadOfficialApp;
- (void)updateOfficialViewButtonText;
- (void)viewDidLoad;
- (id)initWithMKMapItem:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

