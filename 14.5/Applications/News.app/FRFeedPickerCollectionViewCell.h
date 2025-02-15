//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRFeedBasedCollectionViewCell.h"

#import "FRCollectionViewAccessibilityFocusRestoring-Protocol.h"

@class FCFeedDescriptor, FCSubscriptionController, NSString;
@protocol FRFeldsparContext, FRSubscriptionMonitorDelegate;

@interface FRFeedPickerCollectionViewCell : FRFeedBasedCollectionViewCell <FRCollectionViewAccessibilityFocusRestoring>
{
    FCFeedDescriptor *_populatedFeed;
    id <FRSubscriptionMonitorDelegate> _subscriptionMonitorDelegate;
    long long _subscribeLocation;
    id <FRFeldsparContext> _feldsparContext;
    FCSubscriptionController *_subscriptionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) __weak id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) long long subscribeLocation; // @synthesize subscribeLocation=_subscribeLocation;
@property(nonatomic) __weak id <FRSubscriptionMonitorDelegate> subscriptionMonitorDelegate; // @synthesize subscriptionMonitorDelegate=_subscriptionMonitorDelegate;
@property(readonly, nonatomic) FCFeedDescriptor *populatedFeed; // @synthesize populatedFeed=_populatedFeed;
- (void)_attemptSubscriptionToPopulatedFeed;
- (void)_unsubscribeToPopulatedFeed;
- (void)_animateUnsubscribeToPopulatedFeed;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateActionButtonPosition;
- (void)setMode:(unsigned long long)arg1;
- (id)accessibilityPublisherOrTopicName;
- (id)accessibilityHint;
- (id)_accessibilityUserTestingChildren;
- (_Bool)_accessibilityPerformUnsubscribeAction;
- (_Bool)_accessibilityPerformSubscribeAction;
- (id)accessibilityCustomActions;
- (id)accessibilityCollectionViewFocusRestoreIdentifier;
- (_Bool)hasNotificationsEnabled;
- (_Bool)isRemovable;
- (_Bool)isSubscribedTo;
- (_Bool)isAddable;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_updateHighlightedState;
- (void)populateWithFeed:(id)arg1 context:(id)arg2 subscribeLocation:(long long)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

