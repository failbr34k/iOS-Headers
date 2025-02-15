//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection, NSData;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse
{
    MPModelResponse *_personalizationResponse;
    _Bool _firstResponse;
    _Bool _finalResponse;
    NSData *_adamIDData;
    MPCModelGenericAVItemTimedMetadataStreamFields *_streamFields;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields; // @synthesize streamFields=_streamFields;
@property(copy, nonatomic) NSData *adamIDData; // @synthesize adamIDData=_adamIDData;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(nonatomic, getter=isFirstResponse) _Bool firstResponse; // @synthesize firstResponse=_firstResponse;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 firstResponse:(_Bool)arg3 finalResponse:(_Bool)arg4;

@end

