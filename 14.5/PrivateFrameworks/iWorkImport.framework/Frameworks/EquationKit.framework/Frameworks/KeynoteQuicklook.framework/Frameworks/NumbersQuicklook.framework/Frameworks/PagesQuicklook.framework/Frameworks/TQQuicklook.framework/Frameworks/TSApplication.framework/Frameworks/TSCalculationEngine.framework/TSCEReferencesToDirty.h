//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSCECalculationEngine, TSCECellDirtier;

@interface TSCEReferencesToDirty : TSPObject
{
    struct os_unfair_lock_s _dirtyingMutex;
    TSCECalculationEngine *_calcEngine;
    TSCECellDirtier *_cellRefDirtier;
    struct TSUIndexSet _toDirtyOwnerIds;
    struct TSCEInternalCellRefSet _toDirtyInternalCellRefs;
    struct TSCECellRefSet _toDirtyCellRefs;
    struct vector<TSCEInternalRangeReference, std::__1::allocator<TSCEInternalRangeReference>> _toDirtyRangeRefs;
    _Bool _shouldPerformDetectAndRepairConsistencyViolations;
    _Bool _shouldCleanGraphForConsistencyViolation;
    struct TSCEInternalCellRefSet _calcCellsInProgress;
    _Bool _debugOnly_DidDetectAndRepairConsistencyViolations;
    _Bool _debugOnly_DidCleanGraphForConsistencyViolation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool debugOnly_DidCleanGraphForConsistencyViolation; // @synthesize debugOnly_DidCleanGraphForConsistencyViolation=_debugOnly_DidCleanGraphForConsistencyViolation;
@property(readonly, nonatomic) _Bool debugOnly_DidDetectAndRepairConsistencyViolations; // @synthesize debugOnly_DidDetectAndRepairConsistencyViolations=_debugOnly_DidDetectAndRepairConsistencyViolations;
@property(nonatomic) _Bool shouldCleanGraphForConsistencyViolation; // @synthesize shouldCleanGraphForConsistencyViolation=_shouldCleanGraphForConsistencyViolation;
@property(nonatomic) _Bool shouldPerformDetectAndRepairConsistencyViolations; // @synthesize shouldPerformDetectAndRepairConsistencyViolations=_shouldPerformDetectAndRepairConsistencyViolations;
@property(readonly, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)clearInProgressCalcCellRefs;
- (unsigned long long)numberOfInProgressCalcCellRef;
- (_Bool)isInProgressCalcCellRef:(const struct TSCECellRef *)arg1;
- (void)addInProgressCalcCellRefs:(const struct TSCEInternalCellRefSet *)arg1;
- (void)flushAllDirtyReferences;
- (void)flushCellDirtier;
- (_Bool)flushDirtyReferencesForSeconds:(double)arg1;
- (void)_flushInternalCellRefSetWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)_flushRangeRefsWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)_flushCellRefSetWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (void)_flushDirtyOwnerIdsWithDepTracker:(struct TSCEDependencyTracker *)arg1 startTime:(id)arg2 timeout:(double)arg3;
- (_Bool)hasDirtyingToPerformForOwnerId:(unsigned short)arg1;
- (void)dirtyInternalRangeRef:(const struct TSCEInternalRangeReference *)arg1;
- (void)dirtyRangeRef:(const struct TSCERangeRef *)arg1;
- (void)dirtyCellRefsInReferenceSet:(id)arg1;
- (void)dirtyInternalCellRefs:(const struct TSCEInternalCellRefSet *)arg1;
- (void)dirtyCellRefs:(const struct TSCECellRefSet *)arg1;
- (void)dirtyCoords:(const struct TSCECellCoordSet *)arg1 inOwnerId:(unsigned short)arg2;
- (void)dirtyInternalCellRef:(const struct TSCEInternalCellReference *)arg1;
- (void)dirtyCellRef:(const struct TSCECellRef *)arg1;
- (void)dirtyAllCellsInOwnerId:(unsigned short)arg1;
- (void)dirtyAllCellsInOwner:(const struct TSKUIDStruct *)arg1;
@property(readonly, nonatomic) _Bool isEmptyForArchiving;
@property(readonly, nonatomic) _Bool isEmptyForDirtying;
- (void)setCalculationEngine:(id)arg1;
- (void)willClose;
- (id)initWithCalcEngine:(id)arg1;
- (void)commonInit;

@end

