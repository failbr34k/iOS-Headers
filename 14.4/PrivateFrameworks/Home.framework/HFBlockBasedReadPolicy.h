//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    CDUnknownBlockType _readPolicyBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType readPolicyBlock; // @synthesize readPolicyBlock=_readPolicyBlock;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)initWithReadPolicyBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

