//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUScript;

@interface NURenderPipelineFilter : NSObject
{
    NUScript *_script;
    CDUnknownBlockType _filterBlock;
}

+ (id)stopAtTagFilter:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) NUScript *script; // @synthesize script=_script;
- (id)description;
- (id)initWithScript:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithScript:(id)arg1;
- (id)init;

@end

