//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/INSpeakable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSMutableDictionary, NSString;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_valueForKeyDictionary;
    NSString *_identifier;
    NSString *_displayString;
    NSString *_pronunciationHint;
    NSString *_subtitleString;
    INImage *_displayImage;
    NSArray *_alternativeSpeakableMatches;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *alternativeSpeakableMatches; // @synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches;
@property(retain, nonatomic) INImage *displayImage; // @synthesize displayImage=_displayImage;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(readonly, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(readonly, copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *descriptionString;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *spokenPhrase;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_valueForKeyDictionary; // @synthesize _valueForKeyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 subtitleString:(id)arg4 displayImage:(id)arg5;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_displayImageWithLocalizer:(id)arg1;
- (id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

