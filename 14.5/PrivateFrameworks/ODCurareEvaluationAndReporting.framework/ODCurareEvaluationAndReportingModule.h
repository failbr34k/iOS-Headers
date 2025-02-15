//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ODCurareEvaluationAndReportingModuleInternal;

@interface ODCurareEvaluationAndReportingModule : NSObject
{
    ODCurareEvaluationAndReportingModuleInternal *_underlyingObject;
}

- (void).cxx_destruct;
@property(readonly) ODCurareEvaluationAndReportingModuleInternal *underlyingObject; // @synthesize underlyingObject=_underlyingObject;
- (id)getEvaluationResults;
- (_Bool)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id *)arg3;
- (_Bool)evaluateDefaultModelWithDefaultModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id *)arg3;
- (id)initWithBundleIdentifier:(id)arg1 dataProviderInstance:(id)arg2 evaluationInstance:(id)arg3 personalizationInstance:(id)arg4 pruningPolicy:(id)arg5 error:(id *)arg6;

@end

