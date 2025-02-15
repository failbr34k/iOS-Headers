//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsJSONable-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>
#import <MapsSuggestions/NSCopying-Protocol.h>
#import <MapsSuggestions/NSSecureCoding-Protocol.h>

@class GEOMapItemStorage, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface MapsSuggestionsEntry : NSObject <NSCopying, NSSecureCoding, MapsSuggestionsObject, MapsSuggestionsJSONable>
{
    NSMutableSet *_typeHistory;
    NSMutableDictionary *_sourceSpecificInfo;
    _Bool _deleted;
    long long _type;
    NSString *_title;
    NSString *_titleWhenLocked;
    NSString *_subtitle;
    NSString *_subtitleWhenLocked;
    NSData *_iconData;
    NSString *_undecoratedTitle;
    NSString *_undecoratedTitleWhenLocked;
    NSString *_undecoratedSubtitle;
    NSString *_undecoratedSubtitleWhenLocked;
    double _weight;
    NSDate *_expires;
    GEOMapItemStorage *_geoMapItem;
    NSString *_originatingSourceName;
}

+ (id)entryFromSerializedString:(id)arg1;
+ (id)entryFromSerializedBase64String:(id)arg1 hasPrefix:(_Bool)arg2;
+ (id)entryFromSerializedHexString:(id)arg1 hasPrefix:(_Bool)arg2;
+ (id)entryWithData:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (int)defaultDirectionsTransportType;
+ (id)entryWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originatingSourceName; // @synthesize originatingSourceName=_originatingSourceName;
@property(retain, nonatomic) GEOMapItemStorage *geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *undecoratedSubtitleWhenLocked; // @synthesize undecoratedSubtitleWhenLocked=_undecoratedSubtitleWhenLocked;
@property(retain, nonatomic) NSString *undecoratedSubtitle; // @synthesize undecoratedSubtitle=_undecoratedSubtitle;
@property(retain, nonatomic) NSString *undecoratedTitleWhenLocked; // @synthesize undecoratedTitleWhenLocked=_undecoratedTitleWhenLocked;
@property(retain, nonatomic) NSString *undecoratedTitle; // @synthesize undecoratedTitle=_undecoratedTitle;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(retain, nonatomic) NSString *subtitleWhenLocked; // @synthesize subtitleWhenLocked=_subtitleWhenLocked;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *titleWhenLocked; // @synthesize titleWhenLocked=_titleWhenLocked;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)_wasEverOneOfTypes:(id)arg1;
- (_Bool)_wasEverOfType:(long long)arg1;
- (void)_overrideType:(long long)arg1;
- (id)objectForJSON;
@property(readonly, copy, nonatomic) NSString *serializedBase64String;
@property(readonly, copy, nonatomic) NSString *serializedHexString;
- (void)resetAvailableRemovalBehavior:(long long)arg1;
- (void)setAvailableRemovalBehavior:(long long)arg1;
- (long long)availableRemovalBehaviors;
@property(readonly, nonatomic) _Bool hasExpired;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, copy, nonatomic) NSString *shortDescription;
@property(readonly, copy, nonatomic) NSString *description;
- (id)contacts;
- (id)mapItemHandleData;
- (id)ETAForKey:(id)arg1;
- (id)UUIDForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (_Bool)booleanForKey:(id)arg1 is:(_Bool)arg2;
- (_Bool)booleanForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setMapItemHandleData:(id)arg1;
- (void)setETA:(id)arg1 forKey:(id)arg2;
- (void)setUUID:(id)arg1 forKey:(id)arg2;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setBoolean:(_Bool)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setSourceSpecificInfo:(id)arg1;
- (id)sourceSpecificInfo;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *uniqueName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToEntry:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 geoMapItem:(id)arg6 sourceSpecificInfo:(id)arg7;
- (id)initWithType:(long long)arg1 title:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)endTime;
- (id)startTime;
- (_Bool)hasStartAndEndTime;
- (_Bool)hasEndTime;
- (_Bool)hasStartTime;
- (void)replaceByEntry:(id)arg1 forceDecoratedOverwrites:(_Bool)arg2;
- (void)replaceByEntry:(id)arg1;
- (void)mergeSpecificsFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 protectTitles:(_Bool)arg3 protectTitleDecorations:(_Bool)arg4 protectMapItem:(_Bool)arg5 protectWeight:(_Bool)arg6 protectExpiration:(_Bool)arg7 protectIcon:(_Bool)arg8;
- (void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2;
- (_Bool)expiresBeforeEntry:(id)arg1;
- (_Bool)startsBeforeEntry:(id)arg1;
- (_Bool)wasEverOneOfTypes:(id)arg1;
- (_Bool)wasEverOfType:(long long)arg1;
- (_Bool)updateUndecoratedSubtitle:(id)arg1;
- (_Bool)updateUndecoratedTitle:(id)arg1;
- (id)departingAirportCode;
- (_Bool)hasFullFlightInfoAndGate;
- (_Bool)hasEssentialFlightInfo;
@property(readonly, nonatomic) NSString *shortcutIdentifier;
@property(readonly, nonatomic) _Bool isShortcutForSetup;
@property(readonly, nonatomic) _Bool isPureShortcut;
@property(readonly, nonatomic) _Bool isShortcut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

