//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSGlobalLink.h>

@interface IDSGFTGL : IDSGlobalLink
{
}

- (_Bool)_setupNewQRLinkIfNecessary:(id)arg1;
- (long long)_getQRAllocateType;
- (_Bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithOptions:(id)arg1;

@end

