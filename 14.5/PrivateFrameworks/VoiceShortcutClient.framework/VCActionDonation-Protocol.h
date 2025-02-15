//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class INShortcut, NSDate, NSString;

@protocol VCActionDonation <NSObject>
@property(readonly, nonatomic) INShortcut *shortcut;
@property(readonly, nonatomic) id uniqueProperty;
@property(readonly, copy, nonatomic) NSString *suggestedPhrase;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

