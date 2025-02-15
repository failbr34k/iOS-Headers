//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class INControlHomeIntent, NSArray, NSString;

@interface HMDAssistantIntent : NSObject <HMFLogging>
{
    NSArray *_homeKitObjects;
    INControlHomeIntent *_intent;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;
- (id)_getObjectsWithUUID;
- (void)_handleIntentRequestMessage:(id)arg1;
- (void)performWithGather:(id)arg1 message:(id)arg2;
- (id)initWithIntent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

