//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class CSVTUITrainingSession, NSData, NSString;

@protocol CSVTUITrainingSessionDelegate <NSObject>
- (void)CSVTUITrainingSessionStopListen;
- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;

@optional
- (_Bool)CSVTUITrainingSession:(CSVTUITrainingSession *)arg1 hasTrainUtterance:(NSData *)arg2 languageCode:(NSString *)arg3 payload:(_Bool)arg4;
@end

