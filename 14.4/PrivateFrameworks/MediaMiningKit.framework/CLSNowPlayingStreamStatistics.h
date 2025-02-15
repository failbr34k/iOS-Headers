//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject
{
    NSArray *_sortedAlbums;
    NSArray *_sortedArtists;
    NSArray *_sortedTitles;
    NSArray *_sortedGenres;
    NSArray *_sortedSources;
    NSArray *_sortedSessions;
    double _maxDurationInSeconds;
    double _minDurationInSeconds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double minDurationInSeconds; // @synthesize minDurationInSeconds=_minDurationInSeconds;
@property(readonly, nonatomic) double maxDurationInSeconds; // @synthesize maxDurationInSeconds=_maxDurationInSeconds;
@property(readonly, nonatomic) NSArray *sortedSessions; // @synthesize sortedSessions=_sortedSessions;
@property(readonly, nonatomic) NSArray *sortedSources; // @synthesize sortedSources=_sortedSources;
@property(readonly, nonatomic) NSArray *sortedGenres; // @synthesize sortedGenres=_sortedGenres;
@property(readonly, nonatomic) NSArray *sortedTitles; // @synthesize sortedTitles=_sortedTitles;
@property(readonly, nonatomic) NSArray *sortedArtists; // @synthesize sortedArtists=_sortedArtists;
@property(readonly, nonatomic) NSArray *sortedAlbums; // @synthesize sortedAlbums=_sortedAlbums;
- (void)logStatistics;
- (void)computeStatistics;
- (id)initWithNowPlayingStreamSessions:(id)arg1;

@end

