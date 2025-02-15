//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSceneRenderPipeline.h>

#import <TSCharts/TSCH3DSceneObjectDelegator-Protocol.h>

@class NSArray, TSCH3DPickedPoint, TSCH3DRayPickPipelineDelegate;

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator>
{
    tvec2_84d5962d mPickPosition;
    TSCH3DRayPickPipelineDelegate *mSceneObjectDelegate;
}

+ (id)pipelineWithScene:(id)arg1 position:(const tvec2_84d5962d *)arg2;
- (id).cxx_construct;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
@property(readonly, nonatomic) TSCH3DPickedPoint *pickedPoint;
- (id)p_frontMostPickedPoint;
- (id)p_closestPickedPoint;
@property(nonatomic) float slack;
@property(readonly, nonatomic) NSArray *pickedPoints;
- (id)p_renderProcessor;
- (id)p_unsortedPickedPoints;
- (_Bool)run;
- (void)rayPick:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1 position:(const tvec2_84d5962d *)arg2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

