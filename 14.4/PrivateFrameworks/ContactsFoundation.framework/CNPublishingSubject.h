//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNObservableContractEnforcement, NSMutableArray, NSString;
@protocol CNCancelable;

@interface CNPublishingSubject : CNObservable <CNObserver>
{
    CNObservable *_observable;
    id <CNCancelable> _upstreamToken;
    NSMutableArray *_observers;
    CNObservableContractEnforcement *_enforcement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNObservableContractEnforcement *enforcement; // @synthesize enforcement=_enforcement;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <CNCancelable> upstreamToken; // @synthesize upstreamToken=_upstreamToken;
@property(readonly, nonatomic) CNObservable *observable; // @synthesize observable=_observable;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)_subscribeToObservableIfNecessary;
- (id)_allObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

