//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOLocation, GEOLogMsgEventPredExTrainingData, GEOLogMsgStateCuratedCollection, GEOLogMsgStateUGCPhoto, GEOMapRegion, GEOMapsServerMetadata, GEORouteDetails, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOAnalyticsPipelineStateData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _placeCardPossibleactions;
    CDStruct_95bda58d _placeCardUnactionableuielements;
    GEOCarInfo *_carPlayInfo;
    GEOLogMsgStateCuratedCollection *_curatedCollectionState;
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    GEOLocation *_lookaroundLocation;
    double _lookaroundSessionEndTime;
    double _lookaroundSessionStartTime;
    double _lookaroundZoom;
    NSString *_mapLaunchLaunchuri;
    NSString *_mapLaunchReferringwebsite;
    NSString *_mapLaunchSourceappid;
    NSString *_mapLaunchSourceHandoffDevice;
    double _mapViewLocationTouristTimestamp;
    GEOMapRegion *_mapViewMapRegion;
    double _mapViewStyleZoomLevel;
    double _mapViewZoomLevel;
    NSMutableArray *_mapsServerMetadataSuggestionEntryDisplayeds;
    NSData *_mapsServerMetadataSuggestionEntryTappedOn;
    GEOMapsServerMetadata *_mapsServerMetadata;
    NSString *_metroRegion;
    NSString *_placeCardPlaceactiondetailsActionurl;
    unsigned long long _placeCardPlaceactiondetailsAnimationid;
    unsigned long long _placeCardPlaceactiondetailsBusinessid;
    NSString *_placeCardPlaceactiondetailsDestinationapp;
    NSString *_placeCardPlaceactiondetailsPhotoid;
    long long _placeCardPlaceactiondetailsPlaceid;
    NSString *_placeCardPlaceactiondetailsRichproviderid;
    double _placeCardPlaceactiondetailsSearchresponserelativetimestamp;
    unsigned long long _placeCardPlaceactiondetailsTargetid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardIncidenttype;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
    unsigned long long _placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
    NSString *_placeCardPlacecardcategory;
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;
    GEORouteDetails *_routeRouteDetails;
    NSMutableArray *_suggestionsDisplayedresults;
    NSString *_suggestionsSearchstring;
    GEOLogMsgStateUGCPhoto *_ugcPhotoState;
    NSString *_userHomecountry;
    NSString *_userHomemetro;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _lookaroundHeading;
    unsigned int _lookaroundNumberPoisInView;
    int _mapSettingsLocationprecisiontype;
    int _mapSettingsNavVolume;
    int _mapSettingsTransportMode;
    unsigned int _mapUiCurrentTabIndex;
    int _mapUiLayoutInfo;
    int _mapUiLayoutStyle;
    unsigned int _mapUiNumberOfTabsOpen;
    int _mapUiShownActiveNavMode;
    int _mapViewMapType;
    int _placeCardPlaceactiondetailsLocalsearchproviderid;
    int _placeCardPlaceactiondetailsResultindex;
    int _placeCardPlaceactiondetailsTransitplacecardTransitcategory;
    int _placeCardPlacecardtype;
    int _restoreLayoutinfo;
    int _restoreLayoutstyle;
    int _restoreUitarget;
    int _suggestionsAcsequencenumber;
    int _suggestionsSearchfieldtype;
    int _suggestionsSelectedindex;
    _Bool _deviceInDarkMode;
    _Bool _landscape;
    _Bool _lookAroundEntryIconShown;
    _Bool _lookaroundIsLabelingShown;
    _Bool _lookaroundSessionHadMoveAction;
    _Bool _lookaroundSessionHadPanAction;
    _Bool _lookaroundSessionHadShareAction;
    _Bool _lookaroundSessionHadTapPoiAction;
    _Bool _lookaroundSessionHadZoomAction;
    _Bool _mapLaunchIsHandoff;
    _Bool _mapSettingsAvoidBusyRoads;
    _Bool _mapSettingsAvoidHighways;
    _Bool _mapSettingsAvoidHills;
    _Bool _mapSettingsAvoidStairs;
    _Bool _mapSettingsAvoidTolls;
    _Bool _mapSettingsEBike;
    _Bool _mapSettingsFindMyCarEnabled;
    _Bool _mapSettingsHeadingEnabled;
    _Bool _mapSettingsLabelEnabled;
    _Bool _mapSettingsPauseSpokenAudioEnabled;
    _Bool _mapSettingsSpeedLimitEnabled;
    _Bool _mapSettingsTrafficEnabled;
    _Bool _mapUiShownAqiShown;
    _Bool _mapUiShownWeatherShown;
    _Bool _mapViewLocationIsTourist;
    _Bool _mapViewLocationPuckInViewport;
    _Bool _placeCardTransitadvisorybanner;
    _Bool _rideBookingAppEnabled;
    _Bool _rideBookingAppInstalled;
    _Bool _tableBookingAppEnabled;
    _Bool _tableBookingAppInstalled;
    _Bool _venueExperienceShown;
    struct {
        unsigned int has_lookaroundSessionEndTime:1;
        unsigned int has_lookaroundSessionStartTime:1;
        unsigned int has_lookaroundZoom:1;
        unsigned int has_mapViewLocationTouristTimestamp:1;
        unsigned int has_mapViewStyleZoomLevel:1;
        unsigned int has_mapViewZoomLevel:1;
        unsigned int has_placeCardPlaceactiondetailsAnimationid:1;
        unsigned int has_placeCardPlaceactiondetailsBusinessid:1;
        unsigned int has_placeCardPlaceactiondetailsPlaceid:1;
        unsigned int has_placeCardPlaceactiondetailsSearchresponserelativetimestamp:1;
        unsigned int has_placeCardPlaceactiondetailsTargetid:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid:1;
        unsigned int has_lookaroundHeading:1;
        unsigned int has_lookaroundNumberPoisInView:1;
        unsigned int has_mapSettingsLocationprecisiontype:1;
        unsigned int has_mapSettingsNavVolume:1;
        unsigned int has_mapSettingsTransportMode:1;
        unsigned int has_mapUiCurrentTabIndex:1;
        unsigned int has_mapUiLayoutInfo:1;
        unsigned int has_mapUiLayoutStyle:1;
        unsigned int has_mapUiNumberOfTabsOpen:1;
        unsigned int has_mapUiShownActiveNavMode:1;
        unsigned int has_mapViewMapType:1;
        unsigned int has_placeCardPlaceactiondetailsLocalsearchproviderid:1;
        unsigned int has_placeCardPlaceactiondetailsResultindex:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitcategory:1;
        unsigned int has_placeCardPlacecardtype:1;
        unsigned int has_restoreLayoutinfo:1;
        unsigned int has_restoreLayoutstyle:1;
        unsigned int has_restoreUitarget:1;
        unsigned int has_suggestionsAcsequencenumber:1;
        unsigned int has_suggestionsSearchfieldtype:1;
        unsigned int has_suggestionsSelectedindex:1;
        unsigned int has_deviceInDarkMode:1;
        unsigned int has_landscape:1;
        unsigned int has_lookAroundEntryIconShown:1;
        unsigned int has_lookaroundIsLabelingShown:1;
        unsigned int has_lookaroundSessionHadMoveAction:1;
        unsigned int has_lookaroundSessionHadPanAction:1;
        unsigned int has_lookaroundSessionHadShareAction:1;
        unsigned int has_lookaroundSessionHadTapPoiAction:1;
        unsigned int has_lookaroundSessionHadZoomAction:1;
        unsigned int has_mapLaunchIsHandoff:1;
        unsigned int has_mapSettingsAvoidBusyRoads:1;
        unsigned int has_mapSettingsAvoidHighways:1;
        unsigned int has_mapSettingsAvoidHills:1;
        unsigned int has_mapSettingsAvoidStairs:1;
        unsigned int has_mapSettingsAvoidTolls:1;
        unsigned int has_mapSettingsEBike:1;
        unsigned int has_mapSettingsFindMyCarEnabled:1;
        unsigned int has_mapSettingsHeadingEnabled:1;
        unsigned int has_mapSettingsLabelEnabled:1;
        unsigned int has_mapSettingsPauseSpokenAudioEnabled:1;
        unsigned int has_mapSettingsSpeedLimitEnabled:1;
        unsigned int has_mapSettingsTrafficEnabled:1;
        unsigned int has_mapUiShownAqiShown:1;
        unsigned int has_mapUiShownWeatherShown:1;
        unsigned int has_mapViewLocationIsTourist:1;
        unsigned int has_mapViewLocationPuckInViewport:1;
        unsigned int has_placeCardTransitadvisorybanner:1;
        unsigned int has_rideBookingAppEnabled:1;
        unsigned int has_rideBookingAppInstalled:1;
        unsigned int has_tableBookingAppEnabled:1;
        unsigned int has_tableBookingAppInstalled:1;
        unsigned int has_venueExperienceShown:1;
        unsigned int read_placeCardPossibleactions:1;
        unsigned int read_placeCardUnactionableuielements:1;
        unsigned int read_carPlayInfo:1;
        unsigned int read_curatedCollectionState:1;
        unsigned int read_deviceInputLocale:1;
        unsigned int read_deviceOutputLocale:1;
        unsigned int read_lookaroundLocation:1;
        unsigned int read_mapLaunchLaunchuri:1;
        unsigned int read_mapLaunchReferringwebsite:1;
        unsigned int read_mapLaunchSourceappid:1;
        unsigned int read_mapLaunchSourceHandoffDevice:1;
        unsigned int read_mapViewMapRegion:1;
        unsigned int read_mapsServerMetadataSuggestionEntryDisplayeds:1;
        unsigned int read_mapsServerMetadataSuggestionEntryTappedOn:1;
        unsigned int read_mapsServerMetadata:1;
        unsigned int read_metroRegion:1;
        unsigned int read_placeCardPlaceactiondetailsActionurl:1;
        unsigned int read_placeCardPlaceactiondetailsDestinationapp:1;
        unsigned int read_placeCardPlaceactiondetailsPhotoid:1;
        unsigned int read_placeCardPlaceactiondetailsRichproviderid:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardIncidenttype:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitsystemname:1;
        unsigned int read_placeCardPlacecardcategory:1;
        unsigned int read_predExTrainingData:1;
        unsigned int read_routeRouteDetails:1;
        unsigned int read_suggestionsDisplayedresults:1;
        unsigned int read_suggestionsSearchstring:1;
        unsigned int read_ugcPhotoState:1;
        unsigned int read_userHomecountry:1;
        unsigned int read_userHomemetro:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionsDisplayedresultsType;
+ (Class)mapsServerMetadataSuggestionEntryDisplayedType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMapUiShownActiveNavMode:(id)arg1;
- (id)mapUiShownActiveNavModeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapUiShownActiveNavMode;
@property(nonatomic) int mapUiShownActiveNavMode;
@property(nonatomic) _Bool hasMapViewStyleZoomLevel;
@property(nonatomic) double mapViewStyleZoomLevel;
@property(retain, nonatomic) NSString *mapLaunchSourceHandoffDevice;
@property(readonly, nonatomic) _Bool hasMapLaunchSourceHandoffDevice;
@property(nonatomic) _Bool hasMapLaunchIsHandoff;
@property(nonatomic) _Bool mapLaunchIsHandoff;
@property(retain, nonatomic) NSString *userHomecountry;
@property(readonly, nonatomic) _Bool hasUserHomecountry;
@property(retain, nonatomic) NSString *userHomemetro;
@property(readonly, nonatomic) _Bool hasUserHomemetro;
@property(retain, nonatomic) NSString *mapLaunchReferringwebsite;
@property(readonly, nonatomic) _Bool hasMapLaunchReferringwebsite;
@property(retain, nonatomic) NSString *metroRegion;
@property(readonly, nonatomic) _Bool hasMetroRegion;
@property(nonatomic) _Bool hasMapSettingsEBike;
@property(nonatomic) _Bool mapSettingsEBike;
@property(retain, nonatomic) GEOLogMsgStateUGCPhoto *ugcPhotoState;
@property(readonly, nonatomic) _Bool hasUgcPhotoState;
- (int)StringAsMapSettingsLocationprecisiontype:(id)arg1;
- (id)mapSettingsLocationprecisiontypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapSettingsLocationprecisiontype;
@property(nonatomic) int mapSettingsLocationprecisiontype;
@property(nonatomic) _Bool hasMapSettingsAvoidBusyRoads;
@property(nonatomic) _Bool mapSettingsAvoidBusyRoads;
@property(nonatomic) _Bool hasMapSettingsAvoidStairs;
@property(nonatomic) _Bool mapSettingsAvoidStairs;
@property(nonatomic) _Bool hasMapSettingsAvoidHills;
@property(nonatomic) _Bool mapSettingsAvoidHills;
@property(retain, nonatomic) GEOLogMsgStateCuratedCollection *curatedCollectionState;
@property(readonly, nonatomic) _Bool hasCuratedCollectionState;
@property(retain, nonatomic) NSString *mapLaunchLaunchuri;
@property(readonly, nonatomic) _Bool hasMapLaunchLaunchuri;
@property(retain, nonatomic) NSString *mapLaunchSourceappid;
@property(readonly, nonatomic) _Bool hasMapLaunchSourceappid;
- (int)StringAsRestoreUitarget:(id)arg1;
- (id)restoreUitargetAsString:(int)arg1;
@property(nonatomic) _Bool hasRestoreUitarget;
@property(nonatomic) int restoreUitarget;
- (int)StringAsRestoreLayoutstyle:(id)arg1;
- (id)restoreLayoutstyleAsString:(int)arg1;
@property(nonatomic) _Bool hasRestoreLayoutstyle;
@property(nonatomic) int restoreLayoutstyle;
- (int)StringAsRestoreLayoutinfo:(id)arg1;
- (id)restoreLayoutinfoAsString:(int)arg1;
@property(nonatomic) _Bool hasRestoreLayoutinfo;
@property(nonatomic) int restoreLayoutinfo;
@property(nonatomic) _Bool hasLandscape;
@property(nonatomic) _Bool landscape;
- (id)suggestionsDisplayedresultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsDisplayedresultsCount;
- (void)addSuggestionsDisplayedresults:(id)arg1;
- (void)clearSuggestionsDisplayedresults;
@property(retain, nonatomic) NSMutableArray *suggestionsDisplayedresults;
@property(retain, nonatomic) NSString *suggestionsSearchstring;
@property(readonly, nonatomic) _Bool hasSuggestionsSearchstring;
@property(nonatomic) _Bool hasSuggestionsSelectedindex;
@property(nonatomic) int suggestionsSelectedindex;
- (int)StringAsSuggestionsSearchfieldtype:(id)arg1;
- (id)suggestionsSearchfieldtypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSuggestionsSearchfieldtype;
@property(nonatomic) int suggestionsSearchfieldtype;
@property(nonatomic) _Bool hasSuggestionsAcsequencenumber;
@property(nonatomic) int suggestionsAcsequencenumber;
@property(retain, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property(readonly, nonatomic) _Bool hasPredExTrainingData;
@property(retain, nonatomic) GEORouteDetails *routeRouteDetails;
@property(readonly, nonatomic) _Bool hasRouteRouteDetails;
@property(retain, nonatomic) GEOMapsServerMetadata *mapsServerMetadata;
@property(readonly, nonatomic) _Bool hasMapsServerMetadata;
- (id)mapsServerMetadataSuggestionEntryDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsServerMetadataSuggestionEntryDisplayedsCount;
- (void)addMapsServerMetadataSuggestionEntryDisplayed:(id)arg1;
- (void)clearMapsServerMetadataSuggestionEntryDisplayeds;
@property(retain, nonatomic) NSMutableArray *mapsServerMetadataSuggestionEntryDisplayeds;
@property(retain, nonatomic) NSData *mapsServerMetadataSuggestionEntryTappedOn;
@property(readonly, nonatomic) _Bool hasMapsServerMetadataSuggestionEntryTappedOn;
@property(nonatomic) _Bool hasLookAroundEntryIconShown;
@property(nonatomic) _Bool lookAroundEntryIconShown;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
- (int)StringAsPlaceCardPlaceactiondetailsTransitplacecardTransitcategory:(id)arg1;
- (id)placeCardPlaceactiondetailsTransitplacecardTransitcategoryAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardTransitcategory;
@property(nonatomic) int placeCardPlaceactiondetailsTransitplacecardTransitcategory;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardIncidenttype;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsTransitplacecardIncidenttype;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsResultindex;
@property(nonatomic) int placeCardPlaceactiondetailsResultindex;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsLocalsearchproviderid;
@property(nonatomic) int placeCardPlaceactiondetailsLocalsearchproviderid;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsTargetid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsTargetid;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsSearchresponserelativetimestamp;
@property(nonatomic) double placeCardPlaceactiondetailsSearchresponserelativetimestamp;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsRichproviderid;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsRichproviderid;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsPlaceid;
@property(nonatomic) long long placeCardPlaceactiondetailsPlaceid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsPhotoid;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsPhotoid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsDestinationapp;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsDestinationapp;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsBusinessid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsBusinessid;
@property(nonatomic) _Bool hasPlaceCardPlaceactiondetailsAnimationid;
@property(nonatomic) unsigned long long placeCardPlaceactiondetailsAnimationid;
@property(retain, nonatomic) NSString *placeCardPlaceactiondetailsActionurl;
@property(readonly, nonatomic) _Bool hasPlaceCardPlaceactiondetailsActionurl;
@property(nonatomic) _Bool hasPlaceCardTransitadvisorybanner;
@property(nonatomic) _Bool placeCardTransitadvisorybanner;
- (int)StringAsPlaceCardPlacecardtype:(id)arg1;
- (id)placeCardPlacecardtypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceCardPlacecardtype;
@property(nonatomic) int placeCardPlacecardtype;
@property(retain, nonatomic) NSString *placeCardPlacecardcategory;
@property(readonly, nonatomic) _Bool hasPlaceCardPlacecardcategory;
- (void)setPlaceCardUnactionableuielements:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeCardUnactionableuielementsAtIndex:(unsigned long long)arg1;
- (void)addPlaceCardUnactionableuielements:(int)arg1;
- (void)clearPlaceCardUnactionableuielements;
@property(readonly, nonatomic) int *placeCardUnactionableuielements;
@property(readonly, nonatomic) unsigned long long placeCardUnactionableuielementsCount;
- (void)setPlaceCardPossibleactions:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeCardPossibleactionsAtIndex:(unsigned long long)arg1;
- (void)addPlaceCardPossibleactions:(int)arg1;
- (void)clearPlaceCardPossibleactions;
@property(readonly, nonatomic) int *placeCardPossibleactions;
@property(readonly, nonatomic) unsigned long long placeCardPossibleactionsCount;
@property(nonatomic) _Bool hasVenueExperienceShown;
@property(nonatomic) _Bool venueExperienceShown;
@property(nonatomic) _Bool hasDeviceInDarkMode;
@property(nonatomic) _Bool deviceInDarkMode;
@property(nonatomic) _Bool hasLookaroundIsLabelingShown;
@property(nonatomic) _Bool lookaroundIsLabelingShown;
@property(nonatomic) _Bool hasLookaroundNumberPoisInView;
@property(nonatomic) unsigned int lookaroundNumberPoisInView;
@property(nonatomic) _Bool hasLookaroundZoom;
@property(nonatomic) double lookaroundZoom;
@property(nonatomic) _Bool hasLookaroundHeading;
@property(nonatomic) unsigned int lookaroundHeading;
@property(retain, nonatomic) GEOLocation *lookaroundLocation;
@property(readonly, nonatomic) _Bool hasLookaroundLocation;
@property(nonatomic) _Bool hasLookaroundSessionHadShareAction;
@property(nonatomic) _Bool lookaroundSessionHadShareAction;
@property(nonatomic) _Bool hasLookaroundSessionHadTapPoiAction;
@property(nonatomic) _Bool lookaroundSessionHadTapPoiAction;
@property(nonatomic) _Bool hasLookaroundSessionHadMoveAction;
@property(nonatomic) _Bool lookaroundSessionHadMoveAction;
@property(nonatomic) _Bool hasLookaroundSessionHadZoomAction;
@property(nonatomic) _Bool lookaroundSessionHadZoomAction;
@property(nonatomic) _Bool hasLookaroundSessionHadPanAction;
@property(nonatomic) _Bool lookaroundSessionHadPanAction;
@property(nonatomic) _Bool hasLookaroundSessionEndTime;
@property(nonatomic) double lookaroundSessionEndTime;
@property(nonatomic) _Bool hasLookaroundSessionStartTime;
@property(nonatomic) double lookaroundSessionStartTime;
@property(nonatomic) _Bool hasMapUiShownWeatherShown;
@property(nonatomic) _Bool mapUiShownWeatherShown;
@property(nonatomic) _Bool hasMapUiShownAqiShown;
@property(nonatomic) _Bool mapUiShownAqiShown;
@property(nonatomic) _Bool hasMapUiCurrentTabIndex;
@property(nonatomic) unsigned int mapUiCurrentTabIndex;
@property(nonatomic) _Bool hasMapUiNumberOfTabsOpen;
@property(nonatomic) unsigned int mapUiNumberOfTabsOpen;
- (int)StringAsMapUiLayoutStyle:(id)arg1;
- (id)mapUiLayoutStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasMapUiLayoutStyle;
@property(nonatomic) int mapUiLayoutStyle;
- (int)StringAsMapUiLayoutInfo:(id)arg1;
- (id)mapUiLayoutInfoAsString:(int)arg1;
@property(nonatomic) _Bool hasMapUiLayoutInfo;
@property(nonatomic) int mapUiLayoutInfo;
@property(nonatomic) _Bool hasMapSettingsTrafficEnabled;
@property(nonatomic) _Bool mapSettingsTrafficEnabled;
@property(nonatomic) _Bool hasMapSettingsSpeedLimitEnabled;
@property(nonatomic) _Bool mapSettingsSpeedLimitEnabled;
@property(nonatomic) _Bool hasMapSettingsPauseSpokenAudioEnabled;
@property(nonatomic) _Bool mapSettingsPauseSpokenAudioEnabled;
@property(nonatomic) _Bool hasMapSettingsLabelEnabled;
@property(nonatomic) _Bool mapSettingsLabelEnabled;
@property(nonatomic) _Bool hasMapSettingsHeadingEnabled;
@property(nonatomic) _Bool mapSettingsHeadingEnabled;
@property(nonatomic) _Bool hasMapSettingsFindMyCarEnabled;
@property(nonatomic) _Bool mapSettingsFindMyCarEnabled;
@property(nonatomic) _Bool hasMapSettingsAvoidTolls;
@property(nonatomic) _Bool mapSettingsAvoidTolls;
@property(nonatomic) _Bool hasMapSettingsAvoidHighways;
@property(nonatomic) _Bool mapSettingsAvoidHighways;
- (int)StringAsMapSettingsTransportMode:(id)arg1;
- (id)mapSettingsTransportModeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapSettingsTransportMode;
@property(nonatomic) int mapSettingsTransportMode;
- (int)StringAsMapSettingsNavVolume:(id)arg1;
- (id)mapSettingsNavVolumeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapSettingsNavVolume;
@property(nonatomic) int mapSettingsNavVolume;
@property(nonatomic) _Bool hasMapViewLocationPuckInViewport;
@property(nonatomic) _Bool mapViewLocationPuckInViewport;
@property(nonatomic) _Bool hasMapViewLocationTouristTimestamp;
@property(nonatomic) double mapViewLocationTouristTimestamp;
@property(nonatomic) _Bool hasMapViewLocationIsTourist;
@property(nonatomic) _Bool mapViewLocationIsTourist;
- (int)StringAsMapViewMapType:(id)arg1;
- (id)mapViewMapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapViewMapType;
@property(nonatomic) int mapViewMapType;
@property(retain, nonatomic) GEOMapRegion *mapViewMapRegion;
@property(readonly, nonatomic) _Bool hasMapViewMapRegion;
@property(nonatomic) _Bool hasMapViewZoomLevel;
@property(nonatomic) double mapViewZoomLevel;
@property(nonatomic) _Bool hasTableBookingAppEnabled;
@property(nonatomic) _Bool tableBookingAppEnabled;
@property(nonatomic) _Bool hasTableBookingAppInstalled;
@property(nonatomic) _Bool tableBookingAppInstalled;
@property(nonatomic) _Bool hasRideBookingAppEnabled;
@property(nonatomic) _Bool rideBookingAppEnabled;
@property(nonatomic) _Bool hasRideBookingAppInstalled;
@property(nonatomic) _Bool rideBookingAppInstalled;
@property(retain, nonatomic) GEOCarInfo *carPlayInfo;
@property(readonly, nonatomic) _Bool hasCarPlayInfo;
@property(retain, nonatomic) NSString *deviceOutputLocale;
@property(readonly, nonatomic) _Bool hasDeviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale;
@property(readonly, nonatomic) _Bool hasDeviceInputLocale;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

