//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject
{
    WebScriptWorldPrivate *_private;
}

+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg1;
+ (id)world;
+ (id)standardWorld;
+ (id)findOrCreateWorld:(struct DOMWrapperWorld *)arg1;
- (void)dealloc;
- (void)unregisterWorld;
- (id)init;
- (id)initWithWorld:(Ref_526bc8c1 *)arg1;

@end

