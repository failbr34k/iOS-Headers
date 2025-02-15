//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest
{
    _Bool _withSocial;
    _Bool _withPlainEditorialNotes;
    _Bool _withRecentlyPlayed;
    long long _filteringPolicy;
    long long _requestEndpoint;
    long long _mode;
    long long _types;
    long long _displayFilterKinds;
    NSURL *_customForYouURL;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *customForYouURL; // @synthesize customForYouURL=_customForYouURL;
@property(nonatomic) _Bool withRecentlyPlayed; // @synthesize withRecentlyPlayed=_withRecentlyPlayed;
@property(nonatomic) long long displayFilterKinds; // @synthesize displayFilterKinds=_displayFilterKinds;
@property(nonatomic) _Bool withPlainEditorialNotes; // @synthesize withPlainEditorialNotes=_withPlainEditorialNotes;
@property(nonatomic) _Bool withSocial; // @synthesize withSocial=_withSocial;
@property(nonatomic) long long types; // @synthesize types=_types;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

