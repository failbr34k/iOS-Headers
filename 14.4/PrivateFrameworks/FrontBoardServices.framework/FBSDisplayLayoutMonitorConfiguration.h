//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject
{
    BSServiceConnectionEndpoint *_endpoint;
    _Bool _needsUserInteractivePriority;
    CDUnknownBlockType _transitionHandler;
}

+ (id)configurationWithEndpoint:(id)arg1;
+ (id)configurationForDefaultMainDisplayMonitor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) CDUnknownBlockType transitionHandler; // @synthesize transitionHandler=_transitionHandler;
@property(nonatomic) _Bool needsUserInteractivePriority; // @synthesize needsUserInteractivePriority=_needsUserInteractivePriority;
- (id)_initWithEndpoint:(id)arg1;
- (id)init;

@end

