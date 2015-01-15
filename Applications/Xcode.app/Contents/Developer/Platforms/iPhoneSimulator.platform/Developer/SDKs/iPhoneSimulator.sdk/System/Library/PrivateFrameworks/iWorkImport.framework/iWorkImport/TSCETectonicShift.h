//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCEDependencyChanges.h>

__attribute__((visibility("hidden")))
@interface TSCETectonicShift : TSCEDependencyChanges
{
    CDStruct_d2bcd96c mShift;
    CDStruct_0ea164f0 mRangeForShift;
    CDStruct_0ea164f0 mRangeForDeletion;
    CDStruct_0ea164f0 mInsertedRange;
    _Bool mApplyToAbsolute;
    hash_map_a5107d4c mRelocatedMergedCells;
    hash_map_a5107d4c mRelocatedMergedCellsInverse;
    _Bool mInsertingAfter;
    _Bool mIgnoreStickyBits;
    CDStruct_0ea164f0 mTableRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)archive:(struct TectonicShiftArchive *)arg1;
- (id)initWithArchive:(const struct TectonicShiftArchive *)arg1;
- (id)description;
- (id)inverseRelocatedMergedCellsAsString;
- (id)relocatedMergedCellsAsString;
- (struct)insertedRange;
- (CDStruct_0441cfb5)remappedCellIDFromCellID:(CDStruct_0441cfb5)arg1 tableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 type:(int)arg4 otherRangeComponent:(CDStruct_0441cfb5)arg5;
- (CDStruct_0441cfb5)remappedCellIDFromCellID:(CDStruct_0441cfb5)arg1 tableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3;
- (CDStruct_0441cfb5)inverseMappedCellIDFromCellID:(CDStruct_0441cfb5)arg1 tableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3;
- (struct)p_AdjustedRangeForShiftForCellID:(CDStruct_0441cfb5)arg1 type:(int)arg2 otherRangeComponent:(CDStruct_0441cfb5)arg3;
- (struct)remappedRangeFromRange:(struct)arg1 tableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3;
- (struct)deletedRange;
- (_Bool)isVertical;
- (CDStruct_d2bcd96c)gridShift;
- (struct)tableRange;
- (struct)affectedRange;
- (CDStruct_0441cfb5)p_CellIDConsideringRelocatedMerges:(CDStruct_0441cfb5)arg1;
- (id)shiftForUndo;
- (id)copyByAdjustingTableID:(struct __CFUUID *)arg1;
- (id)initWithUnscopedShiftUsingBaseCellID:(CDStruct_0441cfb5)arg1 targetCellID:(CDStruct_0441cfb5)arg2 ignoreStickyBits:(_Bool)arg3;
- (id)initForDeletionAtIndex:(unsigned short)arg1 amount:(unsigned short)arg2 vertically:(_Bool)arg3 tableID:(struct __CFUUID *)arg4 relocatedMergedCells:(const hash_map_a5107d4c *)arg5 tableRange:(struct)arg6;
- (id)initForInsertionAtIndex:(unsigned short)arg1 amount:(unsigned short)arg2 vertically:(_Bool)arg3 tableID:(struct __CFUUID *)arg4 insertingAfter:(_Bool)arg5 tableRange:(struct)arg6;
- (id)initWithShift:(CDStruct_d2bcd96c)arg1 forRange:(struct)arg2 deletedRange:(struct)arg3 tableID:(struct __CFUUID *)arg4 applyToAbsoluteReferences:(_Bool)arg5 relocatedMergedCells:(const hash_map_a5107d4c *)arg6 insertingAfter:(_Bool)arg7 ignoreStickyBits:(_Bool)arg8 tableRange:(struct)arg9 insertedRange:(struct)arg10;

@end
