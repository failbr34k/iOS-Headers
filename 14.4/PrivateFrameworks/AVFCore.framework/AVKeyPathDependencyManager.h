//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKeyPathDependencyRegistration-Protocol.h>

@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration>
{
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:(id)arg1;
- (void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2;
- (void)dependencyHostIsFullyInitialized;
- (void)dealloc;
- (id)initWithDependencyHost:(id)arg1;

@end

