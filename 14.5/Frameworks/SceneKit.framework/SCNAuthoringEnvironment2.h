//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SCNGeometry, SCNManipulator, SCNNode, SCNRenderer, UIColor;

@interface SCNAuthoringEnvironment2 : NSObject
{
    NSMutableSet *_selection;
    struct __C3DScene *_scene;
    SCNNode *_layerRoot;
    SCNNode *_overlayLayerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_physicsFieldsRoot;
    SCNNode *_cameraTarget;
    SCNNode *_pointsOfViewRoot;
    struct __CFDictionary *_lightsDictionary;
    struct __CFDictionary *_camerasDictionary;
    struct __CFDictionary *_particlesDictionary;
    struct __CFDictionary *_physicsFieldsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraOrthographicFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_fieldGeometry;
    long long _displayMask;
    UIColor *_paleGreen;
    UIColor *_paleBlue;
    UIColor *_red;
    UIColor *_green;
    UIColor *_blue;
    UIColor *_cyan;
    UIColor *_yellow;
    UIColor *_orange;
    UIColor *_pink;
    UIColor *_grayLight;
    UIColor *_grayMedium;
    UIColor *_grayDark;
    UIColor *_white;
    SCNManipulator *_manipulator;
}

+ (id)authoringEnvironmentForScene:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)authoringEnvironmentForScene:(id)arg1;
- (id)authoringCamera:(long long)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (_Bool)didTapAtPoint:(struct CGPoint)arg1;
@property long long displayMask;
- (void)_updateRootsVisibility;
@property(readonly, nonatomic) SCNNode *authoringOverlayLayer;
@property(readonly, nonatomic) SCNNode *authoringLayer;
- (void)updateWithRenderer:(id)arg1;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 screenspaceScalingFactor:(float)arg4;
- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(id)arg2 light:(id)arg3;
- (void)cancelSelection;
- (void)selectNodes:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)addCameraNode:(id)arg1;
- (id)fieldGeometry;
- (id)cameraNearPlaneGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (void)addParticlesNode:(id)arg1;
- (void)setupParticleMeshEmitter:(id)arg1 authoringNode:(id)arg2;
- (id)particlesGeometry;
- (void)addLightNode:(id)arg1;
- (id)geometryForLightType:(id)arg1;
@property(readonly, nonatomic) SCNManipulator *manipulator;
- (id)authoringCameraNodes;
- (void)prepareScene:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

