//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction
{
    NSArray *_contentClasses;
}

+ (id)userInterfaceXPCInterface;
+ (id)userInterfaceProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
- (id)targetContentAttribution;
- (id)selectedApp;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (void)updateContentClasses;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)openContentInSelectedApp:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

