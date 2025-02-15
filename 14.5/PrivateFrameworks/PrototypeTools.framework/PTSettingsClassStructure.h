//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface PTSettingsClassStructure : NSObject <NSSecureCoding>
{
    NSDictionary *_structNames;
    NSDictionary *_classes;
    NSDictionary *_classNames;
    NSString *_settingsClassName;
    unsigned long long _settingsClassVersion;
    NSSet *_leafKeys;
    NSSet *_childKeys;
    NSSet *_outletKeys;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *outletKeys; // @synthesize outletKeys=_outletKeys;
@property(retain, nonatomic) NSSet *childKeys; // @synthesize childKeys=_childKeys;
@property(retain, nonatomic) NSSet *leafKeys; // @synthesize leafKeys=_leafKeys;
@property(nonatomic) unsigned long long settingsClassVersion; // @synthesize settingsClassVersion=_settingsClassVersion;
@property(retain, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
- (id)_decodeStringSetForKey:(id)arg1 withCoder:(id)arg2;
- (id)_decodeStringStringDictionaryForKey:(id)arg1 withCoder:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_generateClassNamesIfNecessary;
- (Class)_classForKey:(id)arg1;
- (id)leafStructNameForKey:(id)arg1;
- (Class)leafClassForKey:(id)arg1;
- (Class)childClassForKey:(id)arg1;
- (id)filteredForProxySettings;

@end

