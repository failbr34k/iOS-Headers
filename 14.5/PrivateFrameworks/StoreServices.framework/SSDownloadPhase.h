//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying>
{
    SSOperationProgress *_operationProgress;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) SSOperationProgress *operationProgress;
@property(readonly) long long totalProgressValue;
@property(readonly) long long progressValue;
@property(readonly) float progressChangeRate;
@property(readonly) long long progressUnits;
@property(readonly) long long phaseType;
@property(readonly) double estimatedSecondsRemaining;
- (void)dealloc;
- (id)initWithOperationProgress:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

