//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUIITunesPassConfiguration, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIRedeemConfiguration : NSObject
{
    long long _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    SKUIITunesPassConfiguration *_itunesPassConfiguration;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *successImage; // @synthesize successImage=_successImage;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) UIImage *landingImage; // @synthesize landingImage=_landingImage;
@property(readonly, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration; // @synthesize ITunesPassConfiguration=_itunesPassConfiguration;
@property(readonly, nonatomic) UIImage *inputImage; // @synthesize inputImage=_inputImage;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)_setSuccessImage:(id)arg1;
- (void)_setLandingImage:(id)arg1;
- (void)_setInputImage:(id)arg1;
- (id)_redeemPreflightRequestBodyData;
- (void)_loadDefaultImages;
- (void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_didLoadWithResponseDictionary:(id)arg1;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOperationQueue:(id)arg1 category:(long long)arg2 clientContext:(id)arg3;

@end

