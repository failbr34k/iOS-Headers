//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SagaImportControllerParserDelegate : NSObject <DKDAAPParserDelegate>
{
    _Bool _shouldRestart;
    unsigned int _totalItemCount;
    unsigned int _currentItemCount;
    unsigned int _processedItemCount;
    NSString *_currentPaginationToken;
    long long _currentCloudID;
    NSString *_currentLyricsToken;
    NSMutableDictionary *_mutableCloudIDToLyricsTokenMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableCloudIDToLyricsTokenMap; // @synthesize mutableCloudIDToLyricsTokenMap=_mutableCloudIDToLyricsTokenMap;
@property(readonly, nonatomic) NSString *currentLyricsToken; // @synthesize currentLyricsToken=_currentLyricsToken;
@property(readonly, nonatomic) long long currentCloudID; // @synthesize currentCloudID=_currentCloudID;
@property(readonly, nonatomic) NSString *currentPaginationToken; // @synthesize currentPaginationToken=_currentPaginationToken;
@property(readonly, nonatomic) unsigned int processedItemCount; // @synthesize processedItemCount=_processedItemCount;
@property(readonly, nonatomic) unsigned int currentItemCount; // @synthesize currentItemCount=_currentItemCount;
@property(readonly, nonatomic) unsigned int totalItemCount; // @synthesize totalItemCount=_totalItemCount;
@property(readonly, nonatomic) _Bool shouldRestart; // @synthesize shouldRestart=_shouldRestart;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;
- (void)parserDidStart:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

