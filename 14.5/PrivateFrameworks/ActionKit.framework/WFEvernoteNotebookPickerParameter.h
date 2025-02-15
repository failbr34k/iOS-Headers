//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFEvernoteAccessResource *_evernoteAccessResource;
}

+ (id)referencedActionResourceClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // @synthesize evernoteAccessResource=_evernoteAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;
- (void)updateNotebooks;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (Class)singleStateClass;

@end

