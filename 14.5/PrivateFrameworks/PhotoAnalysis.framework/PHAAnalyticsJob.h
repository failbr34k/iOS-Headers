//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@interface PHAAnalyticsJob : PHAWorkerJob
{
    _Bool _complete;
    CDUnknownBlockType _actionBlock;
}

+ (id)analyticsJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)markAsFinishedWithCompletion:(_Bool)arg1;
- (float)completionScore;
- (_Bool)finished;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;

@end

