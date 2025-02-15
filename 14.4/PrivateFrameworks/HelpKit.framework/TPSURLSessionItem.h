//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HelpKit/TPSURLSessionTaskDelegate-Protocol.h>

@class NSString, TPSURLSessionTask;

@interface TPSURLSessionItem : NSObject <TPSURLSessionTaskDelegate>
{
    _Bool _cancelled;
    TPSURLSessionTask *_sessionTask;
    CDUnknownBlockType _completionHanlder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHanlder; // @synthesize completionHanlder=_completionHanlder;
@property(retain, nonatomic) TPSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)URLSessionSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)notifyWithSessionTask:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)resume;
@property(readonly, nonatomic) long long state; // @dynamic state;
- (id)initWithSessionTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

