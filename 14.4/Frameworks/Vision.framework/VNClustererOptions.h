//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface VNClustererOptions : NSObject
{
    float _threshold;
    float _torsoThreshold;
    NSString *_type;
    NSString *_cachePath;
    NSData *_state;
    unsigned long long _requestRevision;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(nonatomic) float torsoThreshold; // @synthesize torsoThreshold=_torsoThreshold;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSData *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;

@end

