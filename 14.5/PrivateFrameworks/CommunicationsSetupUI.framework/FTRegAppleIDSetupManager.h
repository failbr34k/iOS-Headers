//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSAccountController, NSArray, NSMutableDictionary, NSString;

@interface FTRegAppleIDSetupManager : NSObject
{
    NSMutableDictionary *_setupOperations;
    CDUnknownBlockType _handler;
    NSArray *_candidateAliases;
    NSArray *_selectedAliases;
    NSString *_selectionSummaryText;
    IDSAccountController *_iMessageAccountController;
    IDSAccountController *_faceTimeAccountController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) IDSAccountController *faceTimeAccountController; // @synthesize faceTimeAccountController=_faceTimeAccountController;
@property(retain, nonatomic) IDSAccountController *iMessageAccountController; // @synthesize iMessageAccountController=_iMessageAccountController;
@property(copy, nonatomic) NSString *selectionSummaryText; // @synthesize selectionSummaryText=_selectionSummaryText;
@property(copy, nonatomic) NSArray *selectedAliases; // @synthesize selectedAliases=_selectedAliases;
@property(copy, nonatomic) NSArray *candidateAliases; // @synthesize candidateAliases=_candidateAliases;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableDictionary *setupOperations; // @synthesize setupOperations=_setupOperations;
- (_Bool)beginSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateCandidateAliases;
- (void)_updateSelectionSummaryText;
- (id)phoneNumberDisplayString;
- (_Bool)showsPhoneNumberDisplayString;
- (_Bool)aliasIsEnabled:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowAliasSelectionUI; // @dynamic shouldShowAliasSelectionUI;
- (_Bool)_shouldShowAliasSelectionUI;
- (void)addSetupDictionary:(id)arg1 forService:(long long)arg2;
- (_Bool)_shouldAttemptAccountRegistration;
- (id)_appleID;
- (id)_aliasesForDictionary:(id)arg1;
- (void)_notifyFailureWithError:(id)arg1;
- (void)_notifySuccess;
- (void)_notifySuccess:(_Bool)arg1 error:(id)arg2;
- (void)_cleanup;
- (id)accountControllerForService:(id)arg1;
- (id)init;

@end

