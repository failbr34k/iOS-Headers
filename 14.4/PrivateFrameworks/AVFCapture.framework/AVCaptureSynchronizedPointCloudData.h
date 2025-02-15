//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVPointCloudData;

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData
{
    AVPointCloudData *_pointCloudData;
    _Bool _pointCloudDataWasDropped;
    long long _droppedReason;
}

@property(readonly) long long droppedReason;
@property(readonly) _Bool pointCloudDataWasDropped;
@property(readonly) AVPointCloudData *pointCloudData;
- (void)dealloc;
- (id)_initWithPointCloudDataBuffer:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 pointCloudDataWasDropped:(_Bool)arg3 droppedReason:(long long)arg4;

@end

