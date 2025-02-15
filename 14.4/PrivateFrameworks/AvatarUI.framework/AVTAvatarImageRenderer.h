//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTSnapshotBuilder;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTAvatarImageRenderer : NSObject
{
    AVTSnapshotBuilder *_snapshotBuilder;
    id <AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_snapshotBuilderQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue; // @synthesize snapshotBuilderQueue=_snapshotBuilderQueue;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder; // @synthesize snapshotBuilder=_snapshotBuilder;
- (id)nts_imageForAvatar:(id)arg1 scope:(id)arg2;
- (id)imageForAvatar:(id)arg1 scope:(id)arg2;
- (id)initWithSnapshotBuilder:(id)arg1 lockProvider:(CDUnknownBlockType)arg2 logger:(id)arg3;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

@end

