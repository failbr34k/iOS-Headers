//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartBoundsLayout, TSCH3DChartResizerHelper;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader
{
    TSCH3DChartResizerHelper *_resizerHelper;
    TSCH3DChartBoundsLayout *_boundsLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout; // @synthesize boundsLayout=_boundsLayout;
@property(readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper; // @synthesize resizerHelper=_resizerHelper;
- (id)boundsLayoutByResizingToLayoutSize:(const tvec2_84d5962d *)arg1;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect)arg2;
- (struct CGRect)oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(CDStruct_b1c75024)arg1;

@end

