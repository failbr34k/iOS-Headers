//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentDescriptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying>
{
    NSDictionary *_slotsByName;
    NSDictionary *_alternativeSlotNames;
    _Bool _isPrivate;
    NSString *_name;
    NSString *_responseName;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    SEL _handleSelector;
    SEL _confirmSelector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SEL confirmSelector; // @synthesize confirmSelector=_confirmSelector;
@property(readonly, nonatomic) SEL handleSelector; // @synthesize handleSelector=_handleSelector;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(readonly, nonatomic) Class facadeClass; // @synthesize facadeClass=_facadeClass;
@property(readonly, copy, nonatomic) NSString *responseName; // @synthesize responseName=_responseName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSDictionary *slotsByName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)slotDescriptions;
- (id)slotByName:(id)arg1;
- (id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(_Bool)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

