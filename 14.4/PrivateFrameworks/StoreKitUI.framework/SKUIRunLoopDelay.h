//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIRunLoopDelay : NSObject
{
    NSString *_mode;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    double _timeout;
}

- (void).cxx_destruct;
- (void)endDelay;
- (void)delayRunLoop;
- (void)dealloc;
- (id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2;

@end

