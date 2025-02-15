//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSError, NSNumber, NSProgress, NSString, PICompositionController, PLEditSource;

@protocol PXEditSourceLoader <NSObject>
@property(readonly, nonatomic) NSNumber *loadDuration;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long baseVersion;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property(readonly, copy, nonatomic) PICompositionController *originalCompositionController;
@property(readonly, copy, nonatomic) PICompositionController *compositionController;
@property(readonly, nonatomic) PLEditSource *activeEditSource;
@property(readonly, nonatomic) PLEditSource *overcaptureEditSource;
@property(readonly, nonatomic) PLEditSource *editSource;
@property(readonly, nonatomic) NSProgress *progress;
- (void)beginLoading;
@end

