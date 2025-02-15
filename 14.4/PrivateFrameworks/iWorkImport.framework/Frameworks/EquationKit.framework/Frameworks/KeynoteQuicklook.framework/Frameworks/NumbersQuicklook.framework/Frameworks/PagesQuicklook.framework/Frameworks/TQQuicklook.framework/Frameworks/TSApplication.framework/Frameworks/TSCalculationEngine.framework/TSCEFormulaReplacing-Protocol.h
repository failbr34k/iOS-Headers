//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCalculationEngine/NSObject-Protocol.h>

@class TSCECalculationEngine;
@protocol TSCEFormulaReturning;

@protocol TSCEFormulaReplacing <NSObject>
- (void)markRangeRefAsDirty:(const struct TSCERangeRef *)arg1;
- (void)markCellRefAsDirty:(const struct TSCECellRef *)arg1;
- (void)resetFormulaAt:(const struct TSCECellRef *)arg1;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeFormulasAt:(const struct TSCECellRefSet *)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)replaceFormula:(id <TSCEFormulaReturning>)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)replaceFormula:(id <TSCEFormulaReturning>)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3;
- (TSCECalculationEngine *)calcEngine;
@end

