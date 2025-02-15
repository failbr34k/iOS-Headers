//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUILabelViewElement, SKUIPaletteViewElement, SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement
{
    SKUIPhysicalCirclesTemplateDOMFeature *_scriptInterface;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface; // @synthesize scriptInterface=_scriptInterface;
@property(readonly, nonatomic) SKUILabelViewElement *titleElement;
@property(readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property(readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;
@property(readonly, nonatomic) NSArray *circleItemElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

