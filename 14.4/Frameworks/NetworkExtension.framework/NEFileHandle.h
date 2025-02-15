//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject
{
    _Bool _launchOwnerWhenReadable;
    NSFileHandle *_handle;
}

+ (id)fileHandleFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSFileHandle *handle; // @synthesize handle=_handle;
@property(readonly) _Bool launchOwnerWhenReadable; // @synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable;
@property(readonly) unsigned long long type;
@property(readonly) NSObject<OS_xpc_object> *dictionary;
- (id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(_Bool)arg2;
- (id)initFromDictionary:(id)arg1;

@end

