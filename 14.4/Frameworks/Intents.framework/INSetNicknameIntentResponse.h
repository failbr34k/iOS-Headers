//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INSetNicknameIntentResponseExport-Protocol.h>

@class INContactCard, NSString;

@interface INSetNicknameIntentResponse : INIntentResponse <INSetNicknameIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) INContactCard *meCard;
- (long long)_codeWithName:(id)arg1;
- (long long)_intentResponseCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

