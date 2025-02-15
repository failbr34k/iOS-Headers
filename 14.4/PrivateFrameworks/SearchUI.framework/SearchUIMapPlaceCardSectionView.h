//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>
#import <SearchUI/_MKPlaceViewControllerDelegate-Protocol.h>

@class NSString, SearchUIMapsViewController;

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, _MKPlaceViewControllerDelegate>
{
    _Bool _alreadyDispatchedOnMainQueue;
    SearchUIMapsViewController *_mapViewController;
    struct CGSize _placecardBoundsSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize placecardBoundsSize; // @synthesize placecardBoundsSize=_placecardBoundsSize;
@property _Bool alreadyDispatchedOnMainQueue; // @synthesize alreadyDispatchedOnMainQueue=_alreadyDispatchedOnMainQueue;
@property(retain) SearchUIMapsViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
- (_Bool)isReportAProblemAvailable;
- (void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (id)embeddedViewController;
- (void)placeViewControllerDidUpdateHeight:(id)arg1;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)updateTintColorProvider;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

