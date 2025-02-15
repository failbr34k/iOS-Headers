//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

#import <HomeUI/HFLocationManagerObserver-Protocol.h>

@class HFItem, HFTransformItem, NSString;

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver>
{
    HFItem *_anyLocationOptionItem;
    HFTransformItem *_anyUserAtHomeOptionItem;
    HFTransformItem *_currentUserAtHomeOptionItem;
    HFTransformItem *_noUserAtHomeOptionItem;
    HFTransformItem *_currentUserNotAtHomeOptionItem;
    HFTransformItem *_customOptionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFTransformItem *customOptionItem; // @synthesize customOptionItem=_customOptionItem;
@property(retain, nonatomic) HFTransformItem *currentUserNotAtHomeOptionItem; // @synthesize currentUserNotAtHomeOptionItem=_currentUserNotAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *noUserAtHomeOptionItem; // @synthesize noUserAtHomeOptionItem=_noUserAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *currentUserAtHomeOptionItem; // @synthesize currentUserAtHomeOptionItem=_currentUserAtHomeOptionItem;
@property(retain, nonatomic) HFTransformItem *anyUserAtHomeOptionItem; // @synthesize anyUserAtHomeOptionItem=_anyUserAtHomeOptionItem;
@property(retain, nonatomic) HFItem *anyLocationOptionItem; // @synthesize anyLocationOptionItem=_anyLocationOptionItem;
- (id)_createConditionItemForPresenceEventType:(unsigned long long)arg1 userType:(unsigned long long)arg2;
- (id)_conditionItemForPresenceEvent:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)buildConditionOptionItems;
- (_Bool)conditionIsDisabled;
- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)conditionForOptionItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

