//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaItem.h>

#import <VideosUI/VUISidebandMediaEntityImageLoadParamsCreating-Protocol.h>

@class VUISidebandMediaItemAssetController, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>
{
    VUIVideoManagedObject *_videoManagedObject;
    VUISidebandMediaItemAssetController *_assetController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISidebandMediaItemAssetController *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)brandName;
- (id)brandID;
- (_Bool)renewsOfflineKeysAutomatically;
- (_Bool)allowsManualDownloadRenewal;
- (id)availabilityEndDate;
- (id)downloadExpirationDate;
- (id)episodeIndexInSeries;
- (id)episodeNumber;
- (id)showCanonicalID;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)seasonTitle;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)showTitle;
- (id)isPlayable;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)storeID;
- (id)releaseDate;
- (id)addedDate;
- (id)genreTitle;
- (id)duration;
- (id)title;
- (_Bool)markedAsDeleted;
- (id)canonicalID;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end

