//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFAccountAccessResource.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSString, WFImgurUploadAction;

@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver>
{
    _Bool _usesAccount;
    WFImgurUploadAction *_action;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesAccount; // @synthesize usesAccount=_usesAccount;
@property(nonatomic) __weak WFImgurUploadAction *action; // @synthesize action=_action;
- (unsigned long long)globalLevelStatus;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (Class)accountClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

