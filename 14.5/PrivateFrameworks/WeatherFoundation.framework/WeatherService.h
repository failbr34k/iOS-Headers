//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WeatherServicePrivateProtocol-Protocol.h>
#import <WeatherFoundation/WeatherServiceProtocol-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, WFQueryDispatcher, WFTemperatureUnitProvider, WFWeatherStoreService;
@protocol OS_dispatch_queue;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol>
{
    WFTemperatureUnitProvider *_temperatureUnitProvider;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    WFWeatherStoreService *_internalService;
    WFQueryDispatcher *_queryDispatcher;
    NSMapTable *_clientDictionary;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(retain) NSMapTable *clientDictionary; // @synthesize clientDictionary=_clientDictionary;
@property(retain) WFQueryDispatcher *queryDispatcher; // @synthesize queryDispatcher=_queryDispatcher;
@property(retain) WFWeatherStoreService *internalService; // @synthesize internalService=_internalService;
@property(retain, nonatomic) WFTemperatureUnitProvider *temperatureUnitProvider; // @synthesize temperatureUnitProvider=_temperatureUnitProvider;
- (void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
- (void)temperatureUnitWithIdentifier:(id)arg1;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
- (void)invalidateCache:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)reachabilityConfigurationForIdentifier:(id)arg1;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5 requestOptions:(id)arg6;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5;
- (void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
- (void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
- (void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (id)clientForPid:(int)arg1;
@property(readonly, nonatomic) NSArray *clients;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1 forPid:(int)arg2;
- (void)addClient:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

