//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext;
@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject
{
    id <CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
    CDPContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 handler:(id)arg2;

@end

