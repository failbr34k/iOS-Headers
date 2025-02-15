//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSCopying-Protocol.h>
#import <SpringBoardServices/NSMutableCopying-Protocol.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_title;
    NSString *_value;
    _Bool _isSecure;
    _Bool _hasSetMaxLength;
    unsigned long long _maxLength;
    long long _keyboardType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
}

+ (id)_definitionsFromSerializedDefinitions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool _hasSetMaxLength; // @synthesize _hasSetMaxLength;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_isSecure;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)_copyPropertiesToDefinition:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)build;
- (id)_initWithDictionary:(id)arg1;
- (id)init;

@end

