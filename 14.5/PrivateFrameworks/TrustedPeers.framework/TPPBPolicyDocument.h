//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;
    NSMutableArray *_categoriesByViews;
    NSMutableArray *_introducersByCategorys;
    NSMutableArray *_keyViewMappings;
    NSMutableArray *_modelToCategorys;
    NSMutableArray *_piggybackViews;
    NSMutableArray *_redactions;
    NSMutableArray *_userControllableViews;
    CDStruct_0e29c504 _has;
}

+ (Class)piggybackViewsType;
+ (Class)userControllableViewsType;
+ (Class)keyViewMappingType;
+ (Class)redactionsType;
+ (Class)introducersByCategoryType;
+ (Class)categoriesByViewType;
+ (Class)modelToCategoryType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *piggybackViews; // @synthesize piggybackViews=_piggybackViews;
@property(retain, nonatomic) NSMutableArray *userControllableViews; // @synthesize userControllableViews=_userControllableViews;
@property(retain, nonatomic) NSMutableArray *keyViewMappings; // @synthesize keyViewMappings=_keyViewMappings;
@property(retain, nonatomic) NSMutableArray *redactions; // @synthesize redactions=_redactions;
@property(retain, nonatomic) NSMutableArray *introducersByCategorys; // @synthesize introducersByCategorys=_introducersByCategorys;
@property(retain, nonatomic) NSMutableArray *categoriesByViews; // @synthesize categoriesByViews=_categoriesByViews;
@property(retain, nonatomic) NSMutableArray *modelToCategorys; // @synthesize modelToCategorys=_modelToCategorys;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)piggybackViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)piggybackViewsCount;
- (void)addPiggybackViews:(id)arg1;
- (void)clearPiggybackViews;
- (id)userControllableViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userControllableViewsCount;
- (void)addUserControllableViews:(id)arg1;
- (void)clearUserControllableViews;
- (id)keyViewMappingAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyViewMappingsCount;
- (void)addKeyViewMapping:(id)arg1;
- (void)clearKeyViewMappings;
- (id)redactionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redactionsCount;
- (void)addRedactions:(id)arg1;
- (void)clearRedactions;
- (id)introducersByCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)introducersByCategorysCount;
- (void)addIntroducersByCategory:(id)arg1;
- (void)clearIntroducersByCategorys;
- (id)categoriesByViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesByViewsCount;
- (void)addCategoriesByView:(id)arg1;
- (void)clearCategoriesByViews;
- (id)modelToCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)modelToCategorysCount;
- (void)addModelToCategory:(id)arg1;
- (void)clearModelToCategorys;
@property(nonatomic) _Bool hasPolicyVersion;

@end

