//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPLocationClientProtocol <PPFeedbackAccepting>
- (void)locationRecordBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)locationBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
@end

