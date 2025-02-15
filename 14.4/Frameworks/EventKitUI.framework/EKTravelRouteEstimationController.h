//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore, EKStructuredLocation, NSDate, NSDictionary, NSMutableArray;
@protocol EKStyleProvider, EKTravelRouteEstimationControllerDelegate;

@interface EKTravelRouteEstimationController : NSObject
{
    EKEventStore *_eventStore;
    id <EKStyleProvider> _styleProvider;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
    _Bool _isEstimating;
    id <EKTravelRouteEstimationControllerDelegate> _delegate;
    NSDate *_arrivalDate;
    EKStructuredLocation *_destinationStructuredLocation;
    EKStructuredLocation *_evaluatedOriginLocation;
    NSDictionary *_travelTimeEstimatedValues;
    NSDictionary *_travelTimeLookupErrors;
}

+ (id)_basedOnLocationLocalizedString;
- (void).cxx_destruct;
@property(retain) NSDictionary *travelTimeLookupErrors; // @synthesize travelTimeLookupErrors=_travelTimeLookupErrors;
@property(retain) NSDictionary *travelTimeEstimatedValues; // @synthesize travelTimeEstimatedValues=_travelTimeEstimatedValues;
@property(retain) EKStructuredLocation *evaluatedOriginLocation; // @synthesize evaluatedOriginLocation=_evaluatedOriginLocation;
@property _Bool isEstimating; // @synthesize isEstimating=_isEstimating;
@property(retain) EKStructuredLocation *destinationStructuredLocation; // @synthesize destinationStructuredLocation=_destinationStructuredLocation;
@property(retain) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(nonatomic) __weak id <EKTravelRouteEstimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)arg1;
- (id)_imageForCellAtIndex:(unsigned long long)arg1;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfOutputRows;
- (_Bool)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (_Bool)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1;
@property(retain, nonatomic) EKStructuredLocation *originStructuredLocation;
- (void)_lookupTimedOut;
- (void)beginTravelTimeEstimationLookup;
- (id)_routingModeTypesAsEnum;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)beginOriginLocationEstimationLookup;
- (void)dealloc;
- (id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3;

@end

