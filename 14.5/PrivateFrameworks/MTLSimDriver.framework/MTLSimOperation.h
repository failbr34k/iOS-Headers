//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLSimDriver/MTLSerializerAllocator-Protocol.h>

@class NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLSimOperation : NSObject <MTLSerializerAllocator>
{
    NSObject<OS_dispatch_data> *_data;
}

@property(readonly) NSObject<OS_dispatch_data> *data; // @synthesize data=_data;
- (char *)allocateOperationBytes:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

