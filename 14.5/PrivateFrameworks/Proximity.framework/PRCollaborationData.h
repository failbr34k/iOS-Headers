//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData, PRPeer;

@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    PRPeer *_sendingPeer;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) PRPeer *sendingPeer; // @synthesize sendingPeer=_sendingPeer;
@property(readonly) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 sendingPeer:(id)arg2;

@end

