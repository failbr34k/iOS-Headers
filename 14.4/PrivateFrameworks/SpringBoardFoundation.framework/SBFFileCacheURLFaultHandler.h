//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheFaultHandler-Protocol.h>

@class NSArray, NSString, NSURLSession;

@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler>
{
    NSArray *_retryIntervals;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(copy) NSArray *retryIntervals; // @synthesize retryIntervals=_retryIntervals;
- (void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

