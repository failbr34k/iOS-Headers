//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreLibraryPersonalizationRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreLibraryPersonalizationRequest *_request;
    CDUnknownBlockType _responseHandler;
}

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreLibraryPersonalizationRequest *request; // @synthesize request=_request;
- (void)execute;
- (void)cancel;

@end

