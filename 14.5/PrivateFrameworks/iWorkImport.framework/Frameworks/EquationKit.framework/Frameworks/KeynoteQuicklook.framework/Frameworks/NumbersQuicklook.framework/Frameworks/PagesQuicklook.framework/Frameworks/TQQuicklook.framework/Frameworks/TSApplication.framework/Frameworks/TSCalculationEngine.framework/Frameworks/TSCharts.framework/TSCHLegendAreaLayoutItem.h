//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartLayoutItem.h>

@class NSValue;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem
{
    NSValue *_legendGeometryFrame;
}

- (void).cxx_destruct;
- (const struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (void)iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(struct _NSRange)arg4 outElementSize:(struct CGSize *)arg5 outClipRect:(struct CGRect *)arg6;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 range:(struct _NSRange)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (struct CGAffineTransform)transformForRenderingBadge:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;
- (struct CGAffineTransform)p_transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(struct _NSRange *)arg4 outElementSize:(struct CGSize *)arg5 outClipRect:(struct CGRect *)arg6;
- (id)renderersWithRep:(id)arg1;
- (void)updateLegendGeometryFrameFromLegendModelCache;
@property(nonatomic) struct CGRect legendModelGeometryFrame;
- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSize;
- (double)p_legendModelWidth;
- (void)setLayoutSize:(struct CGSize)arg1;
- (void)clearAll;
- (void)clearLayoutSize;
- (void)resetLayoutSize;
- (id)initWithParent:(id)arg1;

@end

