//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject
{
    NSXPCConnection *_connection;
    id <INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)settingsService;
- (id)_syncService;
- (id)_connection;
- (void)_clearConnection;
- (id)init;

@end

