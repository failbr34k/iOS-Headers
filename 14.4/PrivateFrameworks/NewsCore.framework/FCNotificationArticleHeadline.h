//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

@class FCArticleAudioTrack, FCAssetManager, FCCoverArt, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;
@protocol FCChannelProviding;

@interface FCNotificationArticleHeadline : FCHeadline
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
    _Bool _paid;
    _Bool _webEmbedsEnabled;
    _Bool _bundlePaid;
    _Bool _issueOnly;
    _Bool _showBundleSoftPaywall;
    _Bool _useTransparentNavigationBar;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
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
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    NSArray *_publisherSpecifiedArticleIDs;
    NSString *_articleRecirculationConfigJSON;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    unsigned long long _role;
    long long _bodyTextLength;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    NSString *_callToActionText;
    NSString *_surfacedByArticleListID;
    FCArticleAudioTrack *_narrativeTrack;
    FCArticleAudioTrack *_narrativeTrackSample;
    NSString *_narrativeTrackTextRanges;
    NSString *_layeredThumbnailJSON;
    double _layeredThumbnailAspectRatio;
    FCAssetManager *_assetManager;
    NSDictionary *_articlePayload;
    NSString *_flintDocumentUrlString;
    NSData *_flintDocumentPrefetchedData;
    NSArray *_flintFontResourceIDs;
    NSString *_changeEtag;
    struct CGRect _thumbnailFocalFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *changeEtag; // @synthesize changeEtag=_changeEtag;
@property(retain, nonatomic) NSArray *flintFontResourceIDs; // @synthesize flintFontResourceIDs=_flintFontResourceIDs;
@property(retain, nonatomic) NSData *flintDocumentPrefetchedData; // @synthesize flintDocumentPrefetchedData=_flintDocumentPrefetchedData;
@property(retain, nonatomic) NSString *flintDocumentUrlString; // @synthesize flintDocumentUrlString=_flintDocumentUrlString;
@property(retain, nonatomic) NSDictionary *articlePayload; // @synthesize articlePayload=_articlePayload;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (double)layeredThumbnailAspectRatio;
- (id)layeredThumbnailJSON;
- (id)narrativeTrackTextRanges;
- (id)narrativeTrackSample;
- (id)narrativeTrack;
- (void)setSurfacedByArticleListID:(id)arg1;
- (id)surfacedByArticleListID;
- (void)setCallToActionText:(id)arg1;
- (id)callToActionText;
- (id)linkedIssueIDs;
- (id)linkedArticleIDs;
- (_Bool)useTransparentNavigationBar;
- (_Bool)showBundleSoftPaywall;
- (long long)bodyTextLength;
- (_Bool)isIssueOnly;
- (void)setRole:(unsigned long long)arg1;
- (unsigned long long)role;
- (void)setBundlePaid:(_Bool)arg1;
- (_Bool)isBundlePaid;
- (_Bool)webEmbedsEnabled;
- (id)coverArt;
- (void)setPaid:(_Bool)arg1;
- (_Bool)isPaid;
- (long long)minimumNewsVersion;
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
- (id)articleRecirculationConfigJSON;
- (id)publisherSpecifiedArticleIDs;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (_Bool)isFeatureCandidate;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (_Bool)isLocalDraft;
- (_Bool)isDraft;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (void)setSponsored:(_Bool)arg1;
- (_Bool)isSponsored;
- (double)videoDuration;
- (id)videoURL;
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
- (void)setSourceChannel:(id)arg1;
- (id)sourceChannel;
- (long long)backendArticleVersion;
- (long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setClusterID:(id)arg1;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)versionIdentifier;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (_Bool)isValid;
- (id)contentWithContext:(id)arg1;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;

@end

