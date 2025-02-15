//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode, SCNOffscreenRenderer, SCNScene, SKTransition;

__attribute__((visibility("hidden")))
@interface SCNRendererTransitionContext : NSObject
{
    double _transitionStartTime;
    SKTransition *_transition;
    SCNScene *_outgoingScene;
    SCNNode *_outgoingPointOfView;
    CDUnknownBlockType completionHandler;
    struct __C3DFXPass *_transitionPass;
    SCNOffscreenRenderer *_renderers[2];
}

@property(retain, nonatomic) SCNNode *outgoingPointOfView; // @synthesize outgoingPointOfView=_outgoingPointOfView;
@property(nonatomic) double transitionStartTime; // @synthesize transitionStartTime=_transitionStartTime;
@property(retain, nonatomic) SKTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SCNScene *outgoingScene; // @synthesize outgoingScene=_outgoingScene;
- (void)dealloc;
- (id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(struct CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5;
- (struct __C3DFXPass *)transitionPass;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

