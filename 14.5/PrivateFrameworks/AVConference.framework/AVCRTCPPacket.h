//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCRTCPPacket : NSObject
{
    unsigned char _packetType;
    unsigned int _SSRC;
}

+ (id)newPacketWithRTCPPacket:(struct tagRTCPPACKET *)arg1;
@property(nonatomic) unsigned int SSRC; // @synthesize SSRC=_SSRC;
@property(nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end

