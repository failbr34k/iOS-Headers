//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LTMultilingualSpeechRecognizer : NSObject
{
    NSDictionary *_recognizers;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (void)endAudio;
- (void)addSpeechAudioData:(id)arg1;
- (void)startRecognitionForLocale:(id)arg1 autoEndpoint:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)initWithModelURLs:(id)arg1 modelVersions:(id)arg2;

@end

