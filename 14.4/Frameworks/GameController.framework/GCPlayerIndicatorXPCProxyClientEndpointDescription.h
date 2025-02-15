//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerComponentDescription-Protocol.h>

@class GCPlayerIndicatorXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCPlayerIndicatorXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription>
{
    long long _initialPlayerIndex;
    GCPlayerIndicatorXPCProxyClientEndpoint *_materializedObject;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

