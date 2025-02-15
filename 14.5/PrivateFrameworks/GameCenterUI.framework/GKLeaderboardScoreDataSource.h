//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKGameLayerCollectionDataSource.h>

@class GKLeaderboard, GKLeaderboardAddFriendsCell, GKLeaderboardEntry, NSArray, NSSet, NSString, UICollectionView;
@protocol GKLeaderboardScoreDelegate;

@interface GKLeaderboardScoreDataSource : GKGameLayerCollectionDataSource
{
    _Bool _restrictToFriendsOnly;
    _Bool _autoScrollToLocalPlayerPosition;
    _Bool _isLoadingData;
    _Bool _isLoadingNextData;
    _Bool _isLoadingPreviousData;
    _Bool _firstLoad;
    GKLeaderboard *_leaderboard;
    long long _leaderboardOccurrence;
    id <GKLeaderboardScoreDelegate> _leaderboardScoreDelegate;
    long long _startingRank;
    NSArray *_entries;
    NSString *_additionalNextDataLoadToken;
    NSString *_additionalPreviousDataLoadToken;
    long long _topLoadingCellItem;
    long long _bottomLoadingCellItem;
    long long _addFriendCellItem;
    long long _noFriendsCellItem;
    long long _maxRange;
    GKLeaderboardEntry *_localPlayerEntry;
    UICollectionView *_collectionView;
    long long _friendCount;
    NSSet *_localPlayerFriendIDs;
    GKLeaderboardAddFriendsCell *_sizingAddFriendsCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKLeaderboardAddFriendsCell *sizingAddFriendsCell; // @synthesize sizingAddFriendsCell=_sizingAddFriendsCell;
@property(retain, nonatomic) NSSet *localPlayerFriendIDs; // @synthesize localPlayerFriendIDs=_localPlayerFriendIDs;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GKLeaderboardEntry *localPlayerEntry; // @synthesize localPlayerEntry=_localPlayerEntry;
@property(nonatomic) long long maxRange; // @synthesize maxRange=_maxRange;
@property(nonatomic) long long noFriendsCellItem; // @synthesize noFriendsCellItem=_noFriendsCellItem;
@property(nonatomic) long long addFriendCellItem; // @synthesize addFriendCellItem=_addFriendCellItem;
@property(nonatomic) long long bottomLoadingCellItem; // @synthesize bottomLoadingCellItem=_bottomLoadingCellItem;
@property(nonatomic) long long topLoadingCellItem; // @synthesize topLoadingCellItem=_topLoadingCellItem;
@property(retain, nonatomic) NSString *additionalPreviousDataLoadToken; // @synthesize additionalPreviousDataLoadToken=_additionalPreviousDataLoadToken;
@property(retain, nonatomic) NSString *additionalNextDataLoadToken; // @synthesize additionalNextDataLoadToken=_additionalNextDataLoadToken;
@property(nonatomic) _Bool isLoadingPreviousData; // @synthesize isLoadingPreviousData=_isLoadingPreviousData;
@property(nonatomic) _Bool isLoadingNextData; // @synthesize isLoadingNextData=_isLoadingNextData;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(nonatomic) _Bool autoScrollToLocalPlayerPosition; // @synthesize autoScrollToLocalPlayerPosition=_autoScrollToLocalPlayerPosition;
@property(nonatomic) long long startingRank; // @synthesize startingRank=_startingRank;
@property(nonatomic) __weak id <GKLeaderboardScoreDelegate> leaderboardScoreDelegate; // @synthesize leaderboardScoreDelegate=_leaderboardScoreDelegate;
@property(nonatomic) long long leaderboardOccurrence; // @synthesize leaderboardOccurrence=_leaderboardOccurrence;
@property(nonatomic) _Bool restrictToFriendsOnly; // @synthesize restrictToFriendsOnly=_restrictToFriendsOnly;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (id)makeContextMenuForCell:(id)arg1 withScore:(id)arg2;
- (id)targetedPreviewForUIContextMenuConfiguration:(id)arg1 inCollectionView:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)cellSpacing;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)itemForIndexPath:(id)arg1;
- (_Bool)hasData;
- (long long)itemCount;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)localPlayerEntryIndexPath;
- (void)loadMoreDataWithStartIndex:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadInitialDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processEntries:(id)arg1 localPlayerEntry:(id)arg2 totalPlayerCount:(long long)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setupCollectionView:(id)arg1;
@property(nonatomic) long long timeScope;
@property(nonatomic) long long playerScope;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;

@end

