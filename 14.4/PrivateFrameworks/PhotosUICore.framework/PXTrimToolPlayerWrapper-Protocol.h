//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class UIView;
@protocol PXTrimToolPlayerObserver;

@protocol PXTrimToolPlayerWrapper <NSObject>
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) UIView *loupePlayerView;
@property(readonly, nonatomic) CDStruct_e83c9415 trimRange;
@property(nonatomic) __weak id <PXTrimToolPlayerObserver> playerObserver;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)pause;
- (void)play;
- (void)invalidateComposition;
- (void)requestPlayerItemWithCompletion:(void (^)(AVPlayerItem *))arg1;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(_Bool)arg2 exact:(_Bool)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@end

