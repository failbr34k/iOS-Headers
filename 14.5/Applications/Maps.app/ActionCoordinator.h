//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ActionCoordination-Protocol.h"
#import "CollectionPickerDelegate-Protocol.h"
#import "DeleteDelegate-Protocol.h"
#import "LineCardViewControllerDelegate-Protocol.h"
#import "MapSelectionManagerDelegate-Protocol.h"
#import "MapViewResponderHandling-Protocol.h"
#import "MapsSuggestionsDeleteActionDelegate-Protocol.h"
#import "MarkedLocationRefinementDelegate-Protocol.h"
#import "NavTrafficIncidentReportSubmissionContaineeDelegate-Protocol.h"
#import "PPTTestChromeTrayProtocol-Protocol.h"
#import "PPTTestCollectionsProtocol-Protocol.h"
#import "PPTTestDirectionsDetailsProtocol-Protocol.h"
#import "PPTTestETAProtocol-Protocol.h"
#import "PPTTestGuidanceProtocol-Protocol.h"
#import "PPTTestMuninProtocol-Protocol.h"
#import "PPTTestNavigationProtocol-Protocol.h"
#import "PPTTestPlaceCardProtocol-Protocol.h"
#import "PPTTestProactiveProtocol-Protocol.h"
#import "PPTTestRecentsProtocol-Protocol.h"
#import "PPTTestSearchProtocol-Protocol.h"
#import "PPTTestSettingsProtocol-Protocol.h"
#import "PPTTestVenuesProtocol-Protocol.h"
#import "PlaceCardDismissable-Protocol.h"
#import "PlaceCardViewControllerDelegate-Protocol.h"
#import "RoutePlanningDataCoordinatorPresentationDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegatePrivate-Protocol.h"
#import "SearchSessionManagerDelegate-Protocol.h"
#import "SearchSessionManagerObserver-Protocol.h"
#import "SharedTripsActionCoordination-Protocol.h"
#import "ShortcutEditSessionControllerDelegate-Protocol.h"
#import "SimpleResultsViewControllerDelegate-Protocol.h"
#import "UGCPOIEnrichmentCoordinatorDelegate-Protocol.h"
#import "UGCPOIEnrichmentPresentationDelegate-Protocol.h"
#import "UGCPOIEnrichmentSubmissionStatusDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "VenueCardCoordinatorDataSource-Protocol.h"
#import "ViewModeDelegate-Protocol.h"

@class AllCollectionsViewController, AppCoordinator, CollectionPicker, ControlContainerViewController, CuratedCollectionViewController, CuratedCollectionsListViewController, DirectionItem, EVOnboardingController, GEOMapServiceTraits, LineCardViewController, MKMapItem, MKMuninView, MacCollectionEditCoordinator, MapSelectionManager, MapSelectionManagerState, NSString, ParkedCarViewController, PersonalizedItemManager, PersonalizedItemSource, PlaceCardViewController, PlatformController, PublisherViewController, ResultsViewController, RouteAnnotationContaineeViewController, RouteAnnotationsController, RouteIncidentsViewController, RoutePlanningDataCoordinator, RoutePlanningMapController, RoutePlanningOverviewViewController, RouteSearchViewController, RouteStepsViewController, SearchPinsManager, SearchSession, SearchSessionManager, SearchViewController, SettingsController, SimpleResultsViewController, TrafficIncidentContaineeViewController, TransitLineSelectionActionController, UGCPOIEnrichmentCoordinator, UIScrollView, UIView, UIViewController, UserLocationSearchResult, VenueCardCoordinator, VenuesManager;
@protocol ContaineeProtocol, GEOTransitLineItem, MKLocationManagerOperation, MapCameraFraming, ShortcutEditSessionController;

__attribute__((visibility("hidden")))
@interface ActionCoordinator : NSObject <VenueCardCoordinatorDataSource, PlaceCardViewControllerDelegate, SimpleResultsViewControllerDelegate, LineCardViewControllerDelegate, MapSelectionManagerDelegate, SKStoreProductViewControllerDelegatePrivate, ViewModeDelegate, MarkedLocationRefinementDelegate, PPTTestPlaceCardProtocol, PPTTestSearchProtocol, PPTTestETAProtocol, PPTTestDirectionsDetailsProtocol, PPTTestGuidanceProtocol, PPTTestNavigationProtocol, PPTTestSettingsProtocol, PPTTestProactiveProtocol, PPTTestRecentsProtocol, PPTTestCollectionsProtocol, PPTTestChromeTrayProtocol, PPTTestVenuesProtocol, RoutePlanningDataCoordinatorPresentationDelegate, UGCPOIEnrichmentCoordinatorDelegate, CollectionPickerDelegate, SharedTripsActionCoordination, ShortcutEditSessionControllerDelegate, UGCPOIEnrichmentSubmissionStatusDelegate, UGCPOIEnrichmentPresentationDelegate, SearchSessionManagerDelegate, SearchSessionManagerObserver, PlaceCardDismissable, UIPopoverPresentationControllerDelegate, NavTrafficIncidentReportSubmissionContaineeDelegate, PPTTestMuninProtocol, ActionCoordination, MapViewResponderHandling, DeleteDelegate, MapsSuggestionsDeleteActionDelegate>
{
    MapSelectionManagerState *_routePlanningSelectionRestorationState;
    PlaceCardViewController *_placeCardViewController;
    PlaceCardViewController *_placeCardForRoutePlanningViewController;
    RoutePlanningOverviewViewController *_routePlanningOverviewViewController;
    EVOnboardingController *_vehicleOnboardingController;
    SearchViewController *_searchModeViewController;
    MapSelectionManager *_mapSelectionManager;
    ParkedCarViewController *_parkedCarViewController;
    LineCardViewController *_lineCardViewController;
    LineCardViewController *_lineCardForRoutePlanningViewController;
    RoutePlanningDataCoordinator *_routePlanningDataCoordinator;
    RoutePlanningMapController *_routePlanningMapController;
    RouteSearchViewController *_routeSearchVC;
    RouteStepsViewController *_routeStepsVC;
    RouteIncidentsViewController *_incidentsVC;
    ResultsViewController *_resultsViewController;
    RouteAnnotationContaineeViewController *_routeAnnotationVC;
    TrafficIncidentContaineeViewController *_trafficIncidentViewController;
    id <MKLocationManagerOperation> _locationUpdateOperationForRouting;
    VenueCardCoordinator *_venueCardCoordinator;
    VenuesManager *_venuesManager;
    CollectionPicker *_collectionPicker;
    id _containerViewControllerWillPresentContaineeObserver;
    id <ShortcutEditSessionController> _shortcutEditSessionController;
    SearchSessionManager *_searchSessionManager;
    UGCPOIEnrichmentCoordinator *_poiEnrichmentCoordinator;
    MacCollectionEditCoordinator *_collectionEditCoordinator;
    CuratedCollectionViewController *_curatedCollectionsVC;
    PublisherViewController *_publisherVC;
    AllCollectionsViewController *_allCollectionsVC;
    CuratedCollectionsListViewController *_collectionsListVC;
    _Bool _is3dModeSelected;
    _Bool _isRoutePlanningPresented;
    DirectionItem *_currentDirectionItem;
    AppCoordinator *_appCoordinator;
    TransitLineSelectionActionController *_lineSelectionAction;
    SimpleResultsViewController *_simpleListResultsVC;
    long long _visibleViewModeBeforeDoingDirectionItem;
    PlatformController *_platformController;
    ControlContainerViewController *_containerViewController;
    UIView *_incidentsVCSourceView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *incidentsVCSourceView; // @synthesize incidentsVCSourceView=_incidentsVCSourceView;
@property(nonatomic) _Bool isRoutePlanningPresented; // @synthesize isRoutePlanningPresented=_isRoutePlanningPresented;
@property(nonatomic) __weak ControlContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(nonatomic) long long visibleViewModeBeforeDoingDirectionItem; // @synthesize visibleViewModeBeforeDoingDirectionItem=_visibleViewModeBeforeDoingDirectionItem;
@property(retain, nonatomic) TransitLineSelectionActionController *lineSelectionAction; // @synthesize lineSelectionAction=_lineSelectionAction;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
@property(retain, nonatomic) DirectionItem *currentDirectionItem; // @synthesize currentDirectionItem=_currentDirectionItem;
@property(readonly, nonatomic) _Bool is3dModeSelected; // @synthesize is3dModeSelected=_is3dModeSelected;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)didDismissViewController:(id)arg1 mapItem:(id)arg2;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;
- (_Bool)pptTestIsTrayType:(long long)arg1;
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (void)pptTestOpenFirstCollection;
- (void)pptTestOpenCollections;
- (void)pptTestOpenRecents;
@property(readonly, nonatomic) UIScrollView *pptTestScrollViewForProactive;
- (void)mapsDragDestinationHandler:(id)arg1 didReceiveMapKitHandle:(id)arg2 title:(id)arg3;
- (void)mapsDragDestinationHandler:(id)arg1 didReceiveString:(id)arg2 nearCoordinate:(struct CLLocationCoordinate2D)arg3;
- (_Bool)mapsDragDestinationHandler:(id)arg1 didReceiveURL:(id)arg2;
- (_Bool)mapsDragDestinationHandler:(id)arg1 didReceiveVCard:(id)arg2;
- (void)mapsDragDestinationHandler:(id)arg1 didReceiveMapItem:(id)arg2;
- (void)_prepareToReceiveDrop;
- (void)markedLocationRefinementViewControllerDidCancel:(id)arg1;
- (void)markedLocationRefinementViewControllerSelectedRemoveMarkedLocation:(id)arg1;
- (void)locationRefinementViewController:(id)arg1 didSelectCoordinate:(struct CLLocationCoordinate2D)arg2;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)pptTestExitMunin;
- (void)pptTestEnterMuninWithEntryPoint:(id)arg1 muninView:(id)arg2 showsFullScreen:(_Bool)arg3;
- (void)pptTestSelectVenueSearchResult:(id)arg1;
- (void)pptTestPresentVenueForMapItem:(id)arg1 searchCategory:(id)arg2;
- (void)pptTestPresentPlacecardWithMapItem:(id)arg1;
- (void)pptTestOpenSettings;
- (void)pptTestTransitionBetweenFullAndLightGuidance;
- (void)pptTestEndNavigation;
- (void)pptTestStartNavigation;
- (void)pptTestDoDirectionItem:(id)arg1;
@property(readonly, nonatomic) UIScrollView *pptTestScrollViewForDirectionsDetails;
@property(readonly, nonatomic) UIViewController *pptTestContaineeForDirectionsDetails;
- (void)pptTestPresentDirectionsDetails;
- (void)pptTestCreateCustomSearchResultForDroppedPinAtPoint:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)pptSelectFirstGuidePublisher;
- (void)pptSelectSeeAllCuratedCollections;
- (void)pptTestSearchCancel;
- (void)pptTestEnterSearchMode;
- (void)pptTestRefreshSearch;
- (void)pptTestSearchForFieldItem:(id)arg1;
- (void)pptAssertSearch;
- (void)pptTestSearchEndEditing;
- (void)pptTestAutocompleteSearchForFieldItem:(id)arg1;
- (void)pptTestSearchRetainQueryForSelectedSearchCompletion:(id)arg1;
- (void)pptTestSearchNearbyCategoryWithIndex:(unsigned long long)arg1;
- (void)pptTestMediumizePlaceCardAnimated:(_Bool)arg1;
- (void)pptTestMinimizePlaceCardAnimated:(_Bool)arg1;
- (void)pptTestMaximizePlaceCardAnimated:(_Bool)arg1;
@property(readonly, nonatomic) _Bool pptTestCanResizePlacecard;
- (void)pptTestPresentPlaceCardForSearchResult:(id)arg1 animated:(_Bool)arg2;
- (void)deferPresentingMapPopoversInsideBlock:(CDUnknownBlockType)arg1;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)viewControllerPresentPOIEnrichmentWithCoordinator:(id)arg1;
- (void)poiEnrichmentCoordinator:(id)arg1 didUpdateUserConsent:(_Bool)arg2;
- (void)poiEnrichmentCoordinatorDidFinish:(id)arg1;
- (void)poiEnrichmentCoordinator:(id)arg1 requestPresentingViewControllerWithBlock:(CDUnknownBlockType)arg2;
- (void)addRatingsForMapItem:(id)arg1;
- (void)presentPOIEnrichmentInformedConsentWithCompletion:(CDUnknownBlockType)arg1;
- (void)ensureRoutePlanningContentIsVisible;
- (void)selectDestinationSearchField;
- (void)selectOriginSearchFieldWithTitle:(id)arg1 exitPlanningIfCancelTapped:(_Bool)arg2;
- (void)presentScheduleForStep:(id)arg1;
- (void)setRoutePlanningAdvisoryCards:(id)arg1;
- (void)setRoutePlanningRestrictionIncidents:(id)arg1;
- (void)setRoutePlanningIncidentsSourceView:(id)arg1;
- (void)setRoutePlanningTransitIncidents:(id)arg1;
- (void)closeRoutePlanningViewController:(id)arg1;
- (void)_presentRouteEditingWithEditRequired:(unsigned long long)arg1;
- (void)presentVehicleOnboardingWithVehicles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_carPlayWantsToDisplayEVOnboarding:(id)arg1;
- (void)presentRoutePlanningViewType:(long long)arg1;
- (void)_setRouteSelectionMapState;
- (void)_cleanupRoutePlanningIfNeededAnimated:(_Bool)arg1;
- (void)_exitRoutePlanningIfNeededAnimated:(_Bool)arg1 restoreStashedMapSelection:(_Bool)arg2;
- (void)exitRoutePlanningIfNeededAnimated:(_Bool)arg1;
- (void)_enterRoutePlanningOverviewAnimated:(_Bool)arg1 saveMapCamera:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enterRoutePlanningOverviewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 isEnabled:(_Bool)arg2;
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;
- (void)updateSearchFieldWithSearchFieldItem:(id)arg1;
- (void)retainSearchQueryForSelectedSearchResult:(id)arg1;
- (void)presentLPRWithVehicle:(id)arg1 scenario:(long long)arg2 presenter:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateResultsViewContent;
- (void)updateFloatingControlsWithSearchSession:(id)arg1;
- (void)searchSessionManagerSessionWillPerformSearch;
- (void)searchSessionManagerSessionDidFail;
- (void)searchSessionManagerSessionDidInvalidate;
- (void)searchSessionManagerSessionDidReceiveUpdate;
- (void)showAnnouncementForFlyover:(id)arg1;
- (void)actionControlDidDeactivate:(id)arg1;
- (void)zoomOut;
- (void)zoomIn;
- (void)updateHistoricalLocations;
- (void)refreshCurrentSearch;
- (void)updateMapApplicationState:(int)arg1;
@property(readonly, nonatomic) int mapApplicationState;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(unsigned int)arg3;
- (void)setUserTrackingViewUserTrackingMode:(long long)arg1;
- (void)chromeViewController:(id)arg1 didUpdateViewMode:(long long)arg2;
- (void)updateViewMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setViewMode:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long displayedViewMode;
- (void)select3dMode;
- (void)exit3dMode;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)containeeViewController:(id)arg1 didCreateKeyboardProxy:(id)arg2;
- (void)placeViewControllerViewContactsClosed;
- (void)containeeViewControllerGoToPreviousState:(id)arg1;
- (void)confirmDeleteCollection:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteItem:(id)arg1 sourceView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteMarkedLocation:(id)arg1;
- (void)closeSharedTripDetail;
- (void)closeSharedTrips;
- (void)didSelectSharedTrip:(id)arg1;
- (void)didRequestContactsCard;
- (void)didRequestDirectionsForSharedTrip:(id)arg1;
- (void)exitMunin;
- (void)enterMuninWithEntryPoint:(id)arg1 muninView:(id)arg2 showsFullScreen:(_Bool)arg3 originFrame:(struct CGRect)arg4;
- (void)enterMuninPIP:(id)arg1;
- (void)dismissPlaceCardViewController:(id)arg1;
- (_Bool)shouldReusePlaceCardViewController:(id)arg1;
- (void)dismissLastVenuePlaceCard;
- (void)closeVenueFloorCardViewController:(id)arg1;
- (void)viewController:(id)arg1 presentVenueFloorCardViewController:(id)arg2;
- (void)closeVenueViewController:(id)arg1;
- (void)viewController:(id)arg1 presentVenuesClusteredSearchResult:(id)arg2;
- (void)viewController:(id)arg1 selectVenueSearchResult:(id)arg2 source:(unsigned long long)arg3;
- (void)viewController:(id)arg1 presentPlacesWithPlacesCardItem:(id)arg2 source:(unsigned long long)arg3;
- (void)viewController:(id)arg1 presentVenueWithVenueCardItem:(id)arg2 source:(unsigned long long)arg3;
- (void)viewController:(id)arg1 presentVenueForMapItem:(id)arg2 searchCategory:(id)arg3 source:(unsigned long long)arg4;
- (void)viewController:(id)arg1 presentVenueFromAutoCompleteWithVenueIdentifier:(id)arg2 searchCategory:(id)arg3 source:(unsigned long long)arg4;
- (void)viewController:(id)arg1 dismissMenuControllerAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 presentMenuController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)displayIncidentReportSubmissionWithItem:(id)arg1 report:(id)arg2;
- (void)incidentReportSubmissionContaineeDidFinish:(id)arg1;
- (void)viewController:(id)arg1 displayTransitSchedulesForMapItem:(id)arg2 departureSequence:(id)arg3;
- (_Bool)viewController:(id)arg1 shouldDisplayTransitSchedulesForMapItem:(id)arg2 departureSequence:(id)arg3;
- (_Bool)clusterIsPartOfVenues:(id)arg1;
- (void)viewController:(id)arg1 presentCluster:(id)arg2;
- (void)viewController:(id)arg1 openWebsiteForSearchResult:(id)arg2;
- (void)viewController:(id)arg1 doAudioCallToSearchResult:(id)arg2;
- (void)viewController:(id)arg1 doShareSheetForShareItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2 clientIdentifier:(id)arg3;
- (void)viewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;
- (void)viewController:(id)arg1 createMarkedLocationAtCoordinate:(struct CLLocationCoordinate2D)arg2 floorOrdinal:(int)arg3;
- (void)viewController:(id)arg1 createDroppedPin:(id)arg2;
- (void)viewController:(id)arg1 removeDroppedPin:(id)arg2;
- (void)viewController:(id)arg1 continueRideBookingSessionWithApplicationIdentifier:(id)arg2;
- (void)viewController:(id)arg1 startRideBookingSessionWithRideBookingRideOption:(id)arg2;
- (void)viewController:(id)arg1 startNavigationWithRouteCollection:(id)arg2 navigationDetailsOptions:(struct NavigationDetailsOptions)arg3;
- (void)viewControllerClosed:(id)arg1 animated:(_Bool)arg2;
- (void)viewControllerOpenSettings:(id)arg1;
- (void)closeSettingsIfNeeded;
- (void)viewControllerOpenNearby:(id)arg1 animated:(_Bool)arg2;
- (void)viewControllerSelectLastDirectionItemEnd:(id)arg1 destinationComposedWaypoint:(id)arg2;
- (void)viewControllerDoLastDirectionItem:(id)arg1;
- (void)viewController:(id)arg1 doDirectionItem:(id)arg2 allowToPromptEditing:(_Bool)arg3 withUserInfo:(id)arg4;
- (void)viewController:(id)arg1 doDirectionItem:(id)arg2 withUserInfo:(id)arg3;
- (void)viewController:(id)arg1 doDirectionIntentWithLocalSearchCompletion:(id)arg2;
- (void)viewController:(id)arg1 doDirectionIntent:(id)arg2 withSearchResults:(id)arg3;
- (void)dismissRoutePlanningPlaceCardIfNeeded;
- (void)toggleRoutePlanning;
- (void)viewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewController:(id)arg1 selectClientResolvedItem:(id)arg2 fromSearchInfo:(id)arg3 withUserInfo:(id)arg4;
- (void)viewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;
- (void)viewControllerGoPreviousState:(id)arg1;
- (void)viewController:(id)arg1 removeMapsSuggestionsEntry:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 startBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)viewController:(id)arg1 editLocationForParkedCar:(id)arg2;
- (void)viewController:(id)arg1 selectDroppedPin:(id)arg2;
- (void)viewController:(id)arg1 selectParkedCar:(id)arg2 andPerformAction:(long long)arg3 selectPOIOnMap:(_Bool)arg4;
- (void)viewController:(id)arg1 selectParkedCar:(id)arg2 andPerformAction:(long long)arg3;
- (void)viewController:(id)arg1 displayTableBookingFor:(id)arg2;
- (void)viewController:(id)arg1 showCollectionWithID:(id)arg2;
- (void)viewController:(id)arg1 showFavoritesType:(long long)arg2;
- (void)viewController:(id)arg1 presentRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
- (void)viewController:(id)arg1 presentPlacesForMapItem:(id)arg2 searchCategory:(id)arg3 source:(unsigned long long)arg4;
- (void)viewController:(id)arg1 presentParentMapItem:(id)arg2;
- (void)viewControllerShowPhotoThumbnailGalleryWithMapItem:(id)arg1;
- (void)viewControllerShowAllCollections;
- (void)viewControllerShowPublisherWithID:(id)arg1 numberOfCollections:(unsigned long long)arg2 replaceViewController:(_Bool)arg3;
- (void)viewControllerShowPublisherWithID:(id)arg1;
- (void)viewControllerShowPublisher:(id)arg1 replaceViewController:(_Bool)arg2;
- (void)viewControllerShowPublisher:(id)arg1;
- (void)viewController:(id)arg1 showCuratedCollectionsList:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showCuratedCollectionViewController:(id)arg1 replaceViewController:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewController:(id)arg1 showFullyClientizedCuratedCollection:(id)arg2 replaceViewController:(_Bool)arg3;
- (void)viewController:(id)arg1 showCuratedCollectionIdentifier:(id)arg2 replaceViewController:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewController:(id)arg1 showCuratedCollectionIdentifier:(id)arg2;
- (void)viewController:(id)arg1 showCuratedCollection:(id)arg2 replaceViewController:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewController:(id)arg1 showCuratedCollection:(id)arg2;
- (void)collectionPickerNewCollection:(id)arg1;
- (void)collectionPickerClosed:(id)arg1;
- (void)viewController:(id)arg1 editCollection:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)viewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (void)viewController:(id)arg1 confirmDeleteCollection:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)viewController:(id)arg1 createNewCollectionWithSession:(id)arg2;
- (void)viewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)viewController:(id)arg1 addItemsFromACToCollection:(id)arg2;
- (void)viewController:(id)arg1 editCollection:(id)arg2;
- (void)viewController:(id)arg1 showCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewController:(id)arg1 showCollection:(id)arg2;
- (void)viewControllerShowCollections:(id)arg1;
- (void)shortcutEditSessionControllerFinished:(id)arg1;
- (id)shortcutEditSessionController;
- (void)viewController:(id)arg1 editShortcut:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)viewController:(id)arg1 openTransitLineCard:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)viewController:(id)arg1 editShortcut:(id)arg2;
- (void)viewController:(id)arg1 showAddShortcut:(id)arg2;
- (void)viewControllerShowMyShortcuts:(id)arg1;
- (void)viewControllerShowMyRecents:(id)arg1 includeRecentSearches:(_Bool)arg2;
- (void)viewController:(id)arg1 showMoreServicesForMapItem:(id)arg2;
- (void)viewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;
- (void)viewController:(id)arg1 selectTransitLineItem:(id)arg2 zoomToMapRegion:(_Bool)arg3 preferredLayout:(unsigned long long)arg4;
- (void)viewController:(id)arg1 selectTransitLineItem:(id)arg2 zoomToMapRegion:(_Bool)arg3;
- (void)_presentVenuesPlaceCardItem:(id)arg1 shouldSaveSelectionState:(_Bool)arg2 source:(unsigned long long)arg3 resetPlaceCardViewControllerBlock:(CDUnknownBlockType)arg4;
- (void)_cleanUpVenuesStackForNonVenuePlaceCardItem:(id)arg1;
- (long long)_excludedContentForPlaceCardItem:(id)arg1;
- (void)presentPlaceCardForItem:(id)arg1 addToHistory:(_Bool)arg2 source:(unsigned long long)arg3 saveSelectionState:(_Bool)arg4 replaceCurrentCard:(_Bool)arg5;
- (void)presentPlaceCardForItem:(id)arg1 addToHistory:(_Bool)arg2 source:(unsigned long long)arg3 saveSelectionState:(_Bool)arg4;
- (void)viewController:(id)arg1 selectSearchResult:(id)arg2 addToHistory:(_Bool)arg3 source:(unsigned long long)arg4 saveSelectionState:(_Bool)arg5 replaceCurrentCard:(_Bool)arg6;
- (void)viewController:(id)arg1 selectSearchResult:(id)arg2 addToHistory:(_Bool)arg3 source:(unsigned long long)arg4 saveSelectionState:(_Bool)arg5;
- (void)viewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3 addToHistory:(_Bool)arg4 source:(unsigned long long)arg5;
- (void)viewController:(id)arg1 selectPersonalizedItem:(id)arg2 source:(unsigned long long)arg3 saveSelectionState:(_Bool)arg4;
- (void)viewController:(id)arg1 openSearchResult:(id)arg2;
- (void)viewController:(id)arg1 openTransitIncidents:(id)arg2 fromView:(id)arg3 withUserInfo:(id)arg4;
- (id)_searchResultFromMapsSuggestionsEntry:(id)arg1;
- (void)viewController:(id)arg1 openCommuteEntry:(id)arg2;
- (void)viewController:(id)arg1 openMapsSuggestionEntry:(id)arg2 withUserInfo:(id)arg3;
- (void)containerViewControllerWillPresentContainee:(id)arg1 overContainee:(id)arg2;
- (void)addContainerViewControllerObserver;
- (void)removeContainerViewControllerObserver;
- (void)presentVenueCategoryWithVenueCategoryItem:(id)arg1;
- (void)presentLoadingResults;
- (void)clearSharedTrips;
- (void)presentUnsupportedTransportTypeOrProtocolAlertForSharedTrip:(id)arg1;
- (void)presentChinaAlertForSharedTrip:(id)arg1;
- (void)presentSharedTrip:(id)arg1 inPopoverFromView:(id)arg2;
- (void)presentSharedTrip:(id)arg1;
- (void)presentSharedTrips;
- (void)presentSearchAnimated:(_Bool)arg1;
- (void)viewControllerPresentSearchEndEditingAnimated:(_Bool)arg1;
- (void)viewControllerPresentSearchEndEditing;
- (void)viewControllerPresentSearchEditing;
- (void)presentSearch;
- (void)ensureMapSelectionVisible;
- (void)presentLineCardForItem:(id)arg1 labelMarker:(id)arg2 loading:(_Bool)arg3 overDisambiguation:(_Bool)arg4 preferredLayout:(unsigned long long)arg5;
- (void)presentLineCardForItem:(id)arg1 loading:(_Bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)presentLineCardForItem:(id)arg1 loading:(_Bool)arg2 overDisambiguation:(_Bool)arg3;
- (void)presentPlaceCard:(id)arg1 canReplaceCurrentIfNecessary:(_Bool)arg2;
- (void)presentPlaceCard:(id)arg1;
- (void)presentSimpleList:(id)arg1;
@property(readonly, nonatomic) double isTouristHere;
@property(readonly, nonatomic) SearchSessionManager *searchSessionManager;
@property(readonly, nonatomic) VenueCardCoordinator *venueCardCoordinator;
@property(readonly, nonatomic) VenuesManager *venuesManager;
@property(readonly, nonatomic) RouteAnnotationContaineeViewController *routeAnnotationVC;
@property(readonly, nonatomic) TrafficIncidentContaineeViewController *trafficIncidentVC;
- (id)routingAppsVC;
- (id)incidentsVC;
- (id)routeOptionsVC;
- (id)timePickingVC;
- (id)routeStepsVC;
- (id)routeSearchVC;
- (id)routePlanningMapController;
@property(readonly, nonatomic) RoutePlanningDataCoordinator *routePlanningDataCoordinator;
- (id)mapView;
@property(readonly, nonatomic) id <MapCameraFraming> mapCameraController;
@property(readonly, nonatomic) MapSelectionManager *mapSelectionManager;
@property(readonly, nonatomic) LineCardViewController *lineCardVC;
@property(readonly, nonatomic) PlaceCardViewController *placeCardViewControllerIfLoaded;
@property(readonly, nonatomic) PlaceCardViewController *placeCardViewController;
- (id)placeCardForVenuesViewController:(id)arg1;
- (id)placeCardForRoutePlanningViewController;
- (id)settingsViewController;
@property(readonly, nonatomic) SearchViewController *searchViewControllerIfLoaded;
- (id)searchModeViewController;
- (id)resultsViewController;
@property(readonly, nonatomic) SimpleResultsViewController *simpleListResultsVC; // @synthesize simpleListResultsVC=_simpleListResultsVC;
@property(readonly, nonatomic) RoutePlanningOverviewViewController *routePlanningOverviewViewControllerIfLoaded;
@property(readonly, nonatomic) RoutePlanningOverviewViewController *routePlanningOverviewViewController;
@property(readonly, nonatomic) PersonalizedItemSource *suggestionsItemSource;
@property(readonly, nonatomic) PersonalizedItemManager *personalizedItemManager;
@property(readonly, nonatomic) SettingsController *settingsController;
@property(readonly, nonatomic) SearchPinsManager *searchPinsManager;
@property(readonly, nonatomic) RouteAnnotationsController *routeAnnotationsController;
@property(readonly, nonatomic) UserLocationSearchResult *userLocationSearchResult;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SearchSession *currentSearchSession;
@property(readonly, nonatomic) UIViewController<ContaineeProtocol> *currentViewController;
@property(readonly, nonatomic) MKMuninView *currentMuninView;
@property(readonly, nonatomic) MKMapItem *currentMapItem;
@property(retain, nonatomic) id <GEOTransitLineItem> currentTransitLineItem;
- (void)setCurrentTransitLineItem:(id)arg1 zoomToMapRegion:(_Bool)arg2 preferredLayout:(unsigned long long)arg3;
- (void)setCurrentTransitLineItem:(id)arg1 zoomToMapRegion:(_Bool)arg2;
- (void)setCurrentDirectionItem:(id)arg1 withOptions:(id)arg2;
- (void)restoreSearchForItem:(id)arg1 withResults:(id)arg2 sessionOrigin:(unsigned long long)arg3;
- (void)restoreSearchForItem:(id)arg1 withResults:(id)arg2;
- (void)presentSearchAndRestoreSearchItem:(id)arg1;
- (void)clearSearchPins;
- (void)clearSearch;
- (void)dealloc;
- (id)initWithPlatformController:(id)arg1;
- (_Bool)_canCaptureSearchStateForCardItem:(id)arg1 previousItemInStack:(id)arg2;
- (id)searchFieldItemForVenueCardItem:(id)arg1 previousItemInStack:(id)arg2;
- (id)searchInfoForVenueCardItem:(id)arg1 previousItemInStack:(id)arg2;
- (id)mapSelectionStateForVenueCardItem:(id)arg1 savePlaceCardSelectionState:(_Bool)arg2;
- (void)placeCardViewController:(id)arg1 requestCopyLinkToClipboard:(id)arg2;
- (void)placeCardViewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)placeCardViewController:(id)arg1 presentPOIEnrichmentWithCoordinator:(id)arg2;
- (void)placeCardViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;
- (void)placeCardViewController:(id)arg1 showCuratedCollection:(id)arg2;
- (void)placeCardViewController:(id)arg1 editShortcut:(id)arg2;
- (void)placeCardViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
- (void)placeCardViewController:(id)arg1 editCollection:(id)arg2;
- (void)placeCardViewController:(id)arg1 showCollection:(id)arg2;
- (_Bool)placeCardViewController:(id)arg1 shouldShowTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;
- (void)placeCardViewController:(id)arg1 showTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;
- (void)placeCardViewController:(id)arg1 openServicesHours:(id)arg2;
- (void)placeCardViewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (void)placeCardViewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)placeCardViewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;
- (void)placeCardViewController:(id)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 didSelectParent:(id)arg2;
- (void)placeCardViewController:(id)arg1 presentCategoryPlacesListForMapItem:(id)arg2 searchCategory:(id)arg3;
- (void)placeCardViewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2;
- (void)placeCardViewController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
- (void)placeCardViewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectDisplayedAddressFromPlaceCardItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 createDroppedPin:(id)arg2;
- (void)placeCardViewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;
- (void)placeCardViewController:(id)arg1 removeDroppedPin:(id)arg2;
- (void)placeCardViewController:(id)arg1 showTransitIncidents:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectTransitLineItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3;
- (void)placeCardViewController:(id)arg1 doDirectionItem:(id)arg2 userInfo:(id)arg3;
- (void)simpleResultsViewContoller:(id)arg1 showUserGeneratedCollection:(id)arg2;
- (void)simpleResultsViewContoller:(id)arg1 showCuratedCollectionsList:(id)arg2 title:(id)arg3;
- (void)simpleResultsViewContoller:(id)arg1 showCuratedCollection:(id)arg2;
- (void)simpleResultsViewContoller:(id)arg1 selectClusteredLabelMarker:(id)arg2;
- (void)simpleResultsViewContoller:(id)arg1 selectSearchResult:(id)arg2;
- (void)lineCardViewControllerDidAppear:(id)arg1;
- (void)lineCardViewController:(id)arg1 showIncidents:(id)arg2;
- (void)lineCardViewController:(id)arg1 displayMapRegion:(id)arg2;
- (void)lineCardViewController:(id)arg1 selectMapItem:(id)arg2;
- (void)lineCardViewController:(id)arg1 doDirectionItem:(id)arg2;
- (void)_handleFallbackBusinessTap:(id)arg1;
- (void)_handleRouteAnnotationsTap:(id)arg1;
- (void)_handleRouteTap:(id)arg1;
- (void)_handleTrafficIncidentTap:(id)arg1;
- (void)_handleLineMarkerTap:(id)arg1;
- (void)_handleFlyoverMarkerTap:(id)arg1;
- (void)_handleRouteWaypointTap:(id)arg1;
- (void)_handleCustomPOIAnnotationTap:(id)arg1;
- (id)searchPinsManagerForMapSelectionManager:(id)arg1;
- (void)mapSelectionManagerClearSelection:(id)arg1;
- (void)mapSelectionManager:(id)arg1 selectAnnotationView:(id)arg2;
- (void)mapSelectionManager:(id)arg1 selectVKLabelMarker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

