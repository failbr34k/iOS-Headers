//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface FCMockURLProtocol : NSURLProtocol
{
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)URLForError:(id)arg1;
+ (id)URLForData:(id)arg1 mimeType:(id)arg2;
+ (id)URLForData:(id)arg1 mimeType:(id)arg2 statusCode:(unsigned long long)arg3;
- (void)stopLoading;
- (void)startLoading;

@end

