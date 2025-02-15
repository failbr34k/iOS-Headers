//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, TSCEFormulaRewrite_Uids, TSCEMutableUIDSet, TSCEUIDSet;

@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject
{
    struct TSKUIDStruct _tableUID;
    struct TSKUIDStruct _conditionalStyleOwnerUID;
    struct TSKUIDStruct _groupByUID;
    TSCEFormulaRewrite_Uids *_rowOrColumnUids;
    TSKUIDStructVectorTemplate_724280d5 _rowOrColumnUuids;
    _Bool _isRows;
    NSArray *_rangeEntries;
    struct TSCERangeCoordinate _tableRange;
    TSCEFormulaRewriteInfo_RowColumnInfo *_auxRowColumnInfo;
    TSCEMutableUIDSet *_expandedRowColumnUuids;
    struct TSKUIDStruct _insertAtUid;
    struct TSKUIDStruct _insertOppositeUid;
    _Bool _useWholeTableForInsertionDependencies;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool useWholeTableForInsertionDependencies; // @synthesize useWholeTableForInsertionDependencies=_useWholeTableForInsertionDependencies;
@property(nonatomic) struct TSKUIDStruct insertOppositeUid; // @synthesize insertOppositeUid=_insertOppositeUid;
@property(nonatomic) struct TSKUIDStruct insertAtUid; // @synthesize insertAtUid=_insertAtUid;
@property(readonly, retain, nonatomic) TSCEUIDSet *expandedRowColumnUuids; // @synthesize expandedRowColumnUuids=_expandedRowColumnUuids;
@property(retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo; // @synthesize auxRowColumnInfo=_auxRowColumnInfo;
@property(readonly, nonatomic) const TSKUIDStructVectorTemplate_724280d5 *rowOrColumnUuids; // @synthesize rowOrColumnUuids=_rowOrColumnUuids;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids; // @synthesize rowOrColumnUids=_rowOrColumnUids;
@property(readonly, nonatomic) _Bool isRows; // @synthesize isRows=_isRows;
@property(readonly, nonatomic) const struct TSKUIDStruct *groupByUID; // @synthesize groupByUID=_groupByUID;
@property(readonly, nonatomic) const struct TSKUIDStruct *conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property(readonly, nonatomic) const struct TSKUIDStruct *tableUID; // @synthesize tableUID=_tableUID;
- (id)description;
- (TSKUIDStructVectorTemplate_724280d5)uuidsForIndexes:(id)arg1;
- (TSKUIDStructVectorTemplate_724280d5)uuidsInRange:(struct _NSRange)arg1;
- (vector_60dd006f)coordRangesForInsertRemove;
- (struct TSCERangeCoordinate)affectedRangeForMoveRows;
- (struct TSCERangeCoordinate)affectedRangeForInsertRows;
- (struct TSCERangeCoordinate)affectedRangeForRemoveRows;
- (struct TSCERangeCoordinate)tableRange;
@property(readonly, retain, nonatomic) NSIndexSet *rowOrColumnIndices;
- (unsigned int)rowIndexForUuid:(const struct TSKUIDStruct *)arg1;
- (unsigned short)columnIndexForUuid:(const struct TSKUIDStruct *)arg1;
- (struct TSKUIDStruct)uuidForIndex:(unsigned int)arg1;
- (_Bool)indexIsAffected:(unsigned int)arg1;
- (struct TSCECellRef)originalCellRefForRewriteType:(int)arg1 updatedCellRef:(const struct TSCECellRef *)arg2;
- (struct TSCECellRef)updatedCellRefForRewriteType:(int)arg1 originalCellRef:(const struct TSCECellRef *)arg2;
- (unsigned int)offsetForUpdatedRowIndex:(unsigned int)arg1 isRemoveRows:(_Bool)arg2;
- (unsigned int)offsetForRowIndex:(unsigned int)arg1;
- (void)unloadIndexes;
- (void)createAuxRowColumnInfoForMove;
- (void)loadIndexesForTable:(id)arg1 uidResolver:(id)arg2 forRemoveRows:(_Bool)arg3 shuffleMap:(id)arg4;
- (TSKUIDStructVectorTemplate_724280d5)orderedUuidsForRange:(struct _NSRange)arg1 inTable:(id)arg2 areRows:(_Bool)arg3 shuffleMap:(id)arg4;
- (void)saveToMessage:(struct ColumnOrRowUuidsInfoArchive *)arg1;
- (id)initFromMessage:(const struct ColumnOrRowUuidsInfoArchive *)arg1;
@property(readonly, nonatomic) _Bool isColumns;
- (_Bool)isForTable:(const struct TSKUIDStruct *)arg1;
- (id)initWithTableUID:(const struct TSKUIDStruct *)arg1 condStyleOwnerUID:(const struct TSKUIDStruct *)arg2 groupByUID:(const struct TSKUIDStruct *)arg3 uuids:(const TSKUIDStructVectorTemplate_724280d5 *)arg4 atIndexes:(const vector_f672cb0f *)arg5 areRows:(_Bool)arg6;
- (id)initWithFormulaOwnerUID:(const struct TSKUIDStruct *)arg1 uuids:(const TSKUIDStructVectorTemplate_724280d5 *)arg2 areRows:(_Bool)arg3;

@end

