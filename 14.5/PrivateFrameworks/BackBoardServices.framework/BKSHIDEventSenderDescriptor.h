//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDisplay, NSString;

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding>
{
    long long _hardwareType;
    BKSHIDEventDisplay *_associatedDisplay;
    _Bool _authenticated;
    unsigned int _primaryPage;
    unsigned int _primaryUsage;
    unsigned long long _senderID;
}

+ (_Bool)supportsSecureCoding;
+ (id)protobufSchema;
+ (id)wildcard;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(readonly, nonatomic) unsigned int primaryUsage; // @synthesize primaryUsage=_primaryUsage;
@property(readonly, nonatomic) unsigned int primaryPage; // @synthesize primaryPage=_primaryPage;
@property(readonly, nonatomic) BKSHIDEventDisplay *associatedDisplay; // @synthesize associatedDisplay=_associatedDisplay;
@property(readonly, nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) long long hardwareType; // @synthesize hardwareType=_hardwareType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(_Bool)arg3 primaryPage:(unsigned int)arg4 primaryUsage:(unsigned int)arg5 senderID:(unsigned long long)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

