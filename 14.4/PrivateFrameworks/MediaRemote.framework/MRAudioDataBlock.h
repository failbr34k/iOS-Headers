//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class MRAudioBuffer, NSData, _MRAudioDataBlockProtobuf;

__attribute__((visibility("hidden")))
@interface MRAudioDataBlock : NSObject <NSMutableCopying>
{
    MRAudioBuffer *_buffer;
    CDStruct_ace97b7a _time;
    float _gain;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float gain; // @synthesize gain=_gain;
@property(readonly, nonatomic) CDStruct_ace97b7a time; // @synthesize time=_time;
@property(readonly, nonatomic) MRAudioBuffer *buffer; // @synthesize buffer=_buffer;
- (void)_parseGain:(id)arg1;
- (void)_parseTimestamp:(id)arg1;
- (void)_parseBuffer:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithData:(id)arg1;

@end

