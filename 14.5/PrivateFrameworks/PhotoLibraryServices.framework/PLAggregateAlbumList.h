//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

+ (id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int filter; // @synthesize filter=_filter;
- (id)containersRelationshipName;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(id)arg1;
@property(readonly, nonatomic) _Bool isFolder;
- (_Bool)canEditAlbums;
- (short)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
- (_Bool)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)albums;
- (id)identifier;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_invalidateAllAlbums;
- (void)dealloc;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

