//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

#import <NewsCore/FCArticleAccessCheckable-Protocol.h>
#import <NewsCore/FCContentArchivable-Protocol.h>
#import <NewsCore/FCHeadlineStocksFields-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, FCArticleAudioTrack, FCContentArchive, FCCoverArt, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCInterestToken, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL, NTPBArticleRecord;
@protocol FCChannelProviding;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable>
{
    _Bool _hasThumbnail;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _isLocalDraft;
    _Bool _featureCandidate;
    _Bool _needsRapidUpdates;
    _Bool _showMinimalChrome;
    _Bool _boundToContext;
    _Bool _hiddenFromFeeds;
    _Bool _pressRelease;
    _Bool _hiddenFromAutoFavorites;
    _Bool _webEmbedsEnabled;
    _Bool _issueOnly;
    _Bool _paid;
    _Bool _bundlePaid;
    _Bool _canBePurchased;
    _Bool _showBundleSoftPaywall;
    _Bool _useTransparentNavigationBar;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_titleCompact;
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    FCIssue *_masterIssue;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSString *_language;
    unsigned long long _role;
    unsigned long long _halfLife;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    long long _bodyTextLength;
    FCArticleAudioTrack *_narrativeTrack;
    FCArticleAudioTrack *_narrativeTrackSample;
    NSString *_narrativeTrackTextRanges;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVector;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVectorAlt;
    NSString *_layeredThumbnailJSON;
    double _layeredThumbnailAspectRatio;
    NTPBArticleRecord *_articleRecord;
    FCInterestToken *_articleInterestToken;
    long long _behaviorFlags;
    struct CGRect _thumbnailFocalFrame;
}

+ (id)_tempOverrideMIMETypeForURL:(id)arg1;
+ (_Bool)_fakeArticlesTimestamp;
+ (_Bool)_simulateTopStoriesBadges;
+ (_Bool)_forceArticlesToBeShownAsSponsored;
- (void).cxx_destruct;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(retain, nonatomic) FCInterestToken *articleInterestToken; // @synthesize articleInterestToken=_articleInterestToken;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
- (double)layeredThumbnailAspectRatio;
- (id)layeredThumbnailJSON;
- (id)personalizationVectorAlt;
- (id)personalizationVector;
- (id)narrativeTrackTextRanges;
- (id)narrativeTrackSample;
- (id)narrativeTrack;
- (long long)bodyTextLength;
- (id)linkedIssueIDs;
- (id)linkedArticleIDs;
- (void)setHalfLife:(unsigned long long)arg1;
- (unsigned long long)halfLife;
- (_Bool)useTransparentNavigationBar;
- (_Bool)showBundleSoftPaywall;
- (void)setRole:(unsigned long long)arg1;
- (unsigned long long)role;
- (id)language;
- (_Bool)canBePurchased;
- (id)videoCallToActionURL;
- (id)videoCallToActionTitle;
- (id)coverArt;
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid; // @synthesize bundlePaid=_bundlePaid;
@property(readonly, nonatomic, getter=isPaid) _Bool paid; // @synthesize paid=_paid;
- (_Bool)isIssueOnly;
- (_Bool)webEmbedsEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
- (_Bool)isHiddenFromAutoFavorites;
- (_Bool)isPressRelease;
- (_Bool)isHiddenFromFeeds;
- (_Bool)isBoundToContext;
- (_Bool)showMinimalChrome;
- (_Bool)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(unsigned long long)arg1;
- (unsigned long long)storyType;
- (id)masterIssue;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (_Bool)isFeatureCandidate;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, nonatomic) _Bool isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (void)setSponsored:(_Bool)arg1;
- (_Bool)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)publisherConversionStats;
- (id)globalConversionStats;
- (id)publisherCohorts;
- (id)globalCohorts;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)topics;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (void)setAccessoryText:(id)arg1;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetLQ;
- (void)setThumbnailUltraHQ:(id)arg1;
- (id)thumbnailUltraHQ;
- (void)setThumbnailHQ:(id)arg1;
- (id)thumbnailHQ;
- (void)setThumbnailMedium:(id)arg1;
- (id)thumbnailMedium;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setThumbnailLQ:(id)arg1;
- (id)thumbnailLQ;
- (void)setHasThumbnail:(_Bool)arg1;
- (_Bool)hasThumbnail;
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;
- (struct CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (long long)backendArticleVersion;
- (long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (id)experimentalTitleMetadata;
- (void)setTitleCompact:(id)arg1;
- (id)titleCompact;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setClusterID:(id)arg1;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)versionIdentifier;
- (void)_adoptNarrativeTrackFromArticleRecord:(id)arg1 assetManager:(id)arg2;
- (_Bool)hasAudioTrack;
- (id)publisherID;
@property(readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property(readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property(readonly, copy, nonatomic) NSString *stocksClusterID;
- (id)stocksFields;
@property(readonly, nonatomic) FCContentArchive *contentArchive;
- (id)publisherSpecifiedArticleIDs;
- (id)articleRecirculationConfigJSON;
- (id)backingArticleRecordData;
- (id)contentWithContext:(id)arg1;
- (id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 assetManager:(id)arg4;
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 masterIssue:(id)arg4 storyStyleConfigs:(id)arg5 storyTypeTimeout:(long long)arg6 rapidUpdatesTimeout:(long long)arg7 assetManager:(id)arg8 experimentalTitleProvider:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;

@end

