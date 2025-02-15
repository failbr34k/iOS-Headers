//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFParameterComponent.h>

@class WFLocationParameterState, WFParameter, WFVariableChooserParameterLayoutComponent;
@protocol WFComponentNavigationContext, WFVariableProvider;

@interface WFLocationParameterComponent : WFParameterComponent
{
    _Bool _processing;
    WFParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFLocationParameterState *_state;
    id <WFComponentNavigationContext> _navigationContext;
    id <WFVariableProvider> _variableProvider;
    WFVariableChooserParameterLayoutComponent *_layoutComponent;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
- (void).cxx_destruct;
@property(nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, nonatomic) WFVariableChooserParameterLayoutComponent *layoutComponent; // @synthesize layoutComponent=_layoutComponent;
@property(readonly, nonatomic) id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFLocationParameterState *state; // @synthesize state=_state;
- (CDUnknownBlockType)updateBlock;
- (id)parameter;
- (void)presentTokenChooser:(id)arg1;

@end

