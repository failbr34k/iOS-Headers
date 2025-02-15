//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/TSTCellSpec.h>

#import <TSTables/TSCEFormulaReturning-Protocol.h>

@class NSString, TSCEFormulaObject, TSTStockDetails, TSULocale;

@interface TSTCellFormulaSpec : TSTCellSpec <TSCEFormulaReturning>
{
    TSCEFormulaObject *_formulaObject;
    TSULocale *_locale;
    unsigned char _categoryAggregateType;
    unsigned int _interactionType;
    TSTStockDetails *_stockDetails;
}

+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSTStockDetails *stockDetails; // @synthesize stockDetails=_stockDetails;
@property(readonly, nonatomic) unsigned char categoryAggregateType; // @synthesize categoryAggregateType=_categoryAggregateType;
- (unsigned int)interactionType;
@property(readonly, nonatomic) TSCEFormulaObject *formulaObject; // @synthesize formulaObject=_formulaObject;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEquivalent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_mightBeEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)asFormulaSpec;
- (_Bool)hasTSCEFormula;
- (id)cellSpecReplacingFormulaObject:(id)arg1 locale:(id)arg2;
- (id)initWithFormulaObject:(id)arg1 fromTableInfo:(id)arg2 fromCellID:(struct TSUCellCoord)arg3;
- (id)initWithFormulaObject:(id)arg1 locale:(id)arg2;
- (void)p_computeinteractionType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

