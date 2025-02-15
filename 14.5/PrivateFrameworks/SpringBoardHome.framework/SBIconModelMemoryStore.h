//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconModelStore-Protocol.h>

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore>
{
    NSDictionary *_currentState;
    NSDictionary *_desiredState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *desiredState; // @synthesize desiredState=_desiredState;
@property(copy, nonatomic) NSDictionary *currentState; // @synthesize currentState=_currentState;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithCurrentState:(id)arg1 desiredState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

