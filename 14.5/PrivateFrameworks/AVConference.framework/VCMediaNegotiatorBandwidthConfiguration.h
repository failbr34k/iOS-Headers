//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBandwidthConfiguration : NSObject
{
    int _mode;
    int _connectionType;
    unsigned int _maxBandwidth;
    _Bool _isDefaultMode;
}

@property(nonatomic) _Bool isDefaultMode; // @synthesize isDefaultMode=_isDefaultMode;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned int)arg3;
- (id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned int)arg2;

@end

