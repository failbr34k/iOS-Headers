//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MediaControlsEndpointController, NSString;

__attribute__((visibility("hidden")))
@interface MRUTVRemoteController : NSObject
{
    _Bool _isCoverSheet;
    MediaControlsEndpointController *_endpointController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCoverSheet; // @synthesize isCoverSheet=_isCoverSheet;
@property(readonly, nonatomic) MediaControlsEndpointController *endpointController; // @synthesize endpointController=_endpointController;
- (void)presentLanguageOptionsAtCenter:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentTVRemote;
- (void)prewarmIfNeeded;
@property(readonly, nonatomic) _Bool shouldShowTVRemoteButton;
@property(readonly, nonatomic) NSString *airplayIdentifier;
@property(readonly, nonatomic) NSString *mediaRemoteIdentifier;
- (id)initWithEndpointController:(id)arg1;

@end

