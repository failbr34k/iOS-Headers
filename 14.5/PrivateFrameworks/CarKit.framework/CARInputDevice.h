//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CARInputDevice : NSObject
{
    NSString *_UUID;
    unsigned long long _senderID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setUUID:(id)arg1;
- (id)initWithServiceClient:(struct __IOHIDServiceClient *)arg1 UUID:(id)arg2;

@end

