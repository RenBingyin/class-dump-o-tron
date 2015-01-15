//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;
    vector_3f7ffb82 mModelColumnWidth;
    vector_3f7ffb82 mModelRowHeight;
    unsigned short mMaxRow;
    unsigned char mMaxCol;
    struct _opaque_pthread_rwlock_t mLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;
- (void)logInternalState;
- (_Bool)verifyDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)resetFittingHeightsFromCollection:(id)arg1;
- (void)resetWidthsHeightsForRange:(CDStruct_5f1f7aa9)arg1;
- (void)resetAllCol;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (double)getModelWidthForColumn:(unsigned char)arg1;
- (double)getModelHeightForRow:(unsigned short)arg1;
- (double)getFitWidthForCol:(unsigned char)arg1;
- (double)getFitHeightForRow:(unsigned short)arg1;
- (_Bool)moveColsFrom:(CDStruct_5f1f7aa9)arg1 toCol:(unsigned char)arg2;
- (_Bool)moveRowsFrom:(CDStruct_5f1f7aa9)arg1 toRow:(unsigned short)arg2;
- (_Bool)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (_Bool)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (_Bool)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (_Bool)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (_Bool)resetModelCacheRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)resetModelCache;
- (_Bool)setModelHeight:(double)arg1 forRow:(unsigned short)arg2;
- (_Bool)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2;
- (void)setFittingHeightsFromCollection:(id)arg1;
- (_Bool)setFitHeight:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (_Bool)setFitWidth:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (_Bool)setFitDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (id)init;

@end

