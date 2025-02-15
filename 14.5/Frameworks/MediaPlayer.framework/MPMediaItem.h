//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItemArtwork, NSArray, NSDate, NSString, NSURL;

@interface MPMediaItem : MPMediaEntity
{
}

+ (_Bool)_isValidItemProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (id)dynamicProperties;
+ (id)fallbackTitlePropertyForGroupingType:(long long)arg1;
+ (id)titlePropertyForGroupingType:(long long)arg1;
+ (id)ULIDPropertyForGroupingType:(long long)arg1;
+ (id)persistentIDPropertyForGroupingType:(long long)arg1;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)itemFromSong:(id)arg1;
+ (id)itemFromModelObject:(id)arg1;
+ (id)screenshotArtworkCatalogCacheProperties;
+ (id)artworkCatalogCacheProperties;
+ (id)MPSD_mediaItemPropertiesForDownloadability;
- (id)_libraryLinkURL;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkKind;
- (id)_libraryLinkArtist;
- (id)_directStoreURL;
@property(readonly, nonatomic, getter=isPreorder) _Bool preorder;
@property(readonly, nonatomic) NSDate *dateDownloaded;
@property(readonly, nonatomic) _Bool isUsableAsRepresentativeItem;
- (void)gaplessHeuristicInfo:(unsigned int *)arg1 durationInSamples:(unsigned long long *)arg2 lastPacketsResync:(unsigned long long *)arg3 encodingDelay:(unsigned int *)arg4 encodingDrain:(unsigned int *)arg5;
- (unsigned long long)countOfChaptersOfType:(long long)arg1;
- (id)chapterOfType:(long long)arg1 atTime:(double)arg2;
- (id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)chaptersOfType:(long long)arg1;
@property(readonly, nonatomic) NSString *userGrouping;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property(readonly, nonatomic) unsigned long long discCount;
@property(readonly, nonatomic) unsigned long long discNumber;
@property(readonly, nonatomic) unsigned long long albumTrackNumber;
@property(readonly, nonatomic) _Bool rememberBookmarkTime;
@property(readonly, nonatomic) NSString *playbackStoreID;
@property(nonatomic) _Bool hasBeenPlayed;
@property(copy, nonatomic) NSDate *lastSkippedDate;
@property(nonatomic) unsigned long long skipCountSinceSync;
- (void)setSkipCount:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long skipCount;
@property(copy, nonatomic) NSDate *dateAccessed;
@property(copy, nonatomic) NSDate *lastPlayedDate;
@property(nonatomic) unsigned long long playCountSinceSync;
- (void)setPlayCount:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long playCount;
- (id)predicateForProperty:(id)arg1;
@property(readonly, nonatomic) unsigned long long year;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDate *releaseDate;
- (void)setRating:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rating;
@property(readonly, nonatomic) unsigned long long podcastPersistentID;
@property(readonly, nonatomic) NSString *podcastTitle;
@property(readonly, nonatomic) double effectiveStopTime;
@property(readonly, nonatomic) double stopTime;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) double playbackDuration;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic, getter=hasProtectedAsset) _Bool protectedAsset;
@property(readonly, nonatomic, getter=isCloudItem) _Bool cloudItem;
@property(readonly, nonatomic, getter=isCompilation) _Bool compilation;
@property(readonly, nonatomic) _Bool isITunesU;
@property(readonly, nonatomic) _Bool isRental;
@property(readonly, nonatomic) unsigned long long genrePersistentID;
@property(readonly, nonatomic) NSString *genre;
@property(readonly, nonatomic) unsigned long long composerPersistentID;
@property(readonly, nonatomic) NSString *composer;
@property(readonly, nonatomic) NSString *comments;
@property(readonly, nonatomic) NSDate *dateAdded;
@property(readonly, nonatomic) double bookmarkTime;
@property(readonly, nonatomic) unsigned long long beatsPerMinute;
@property(readonly, nonatomic) NSURL *assetURL;
@property(readonly, nonatomic) MPMediaItemArtwork *artwork;
@property(readonly, nonatomic) unsigned long long artistPersistentID;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) unsigned long long albumTrackCount;
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) unsigned long long albumArtistPersistentID;
@property(readonly, nonatomic) unsigned long long albumPersistentID;
@property(readonly, nonatomic) NSString *effectiveAlbumArtist;
@property(readonly, nonatomic) NSString *albumArtist;
@property(readonly, nonatomic) NSArray *chapters;
- (id)multiverseIdentifier;
- (void)clearLocationProperties;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (_Bool)existsInLibrary;
- (id)representativeItem;
- (id)_bestStoreURL;
- (void)didReceiveMemoryWarning;
- (double)nominalHasBeenPlayedThreshold;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementPlayCount;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)_artworkCatalogWithArtworkType:(long long)arg1;
- (id)screenshotArtworkCatalog;
- (id)artworkCatalog;
- (_Bool)MPSD_isDownloadInProgress;
- (_Bool)MPSD_isDownloadable;

// Remaining properties
@property(readonly, nonatomic) unsigned long long persistentID; // @dynamic persistentID;

@end

