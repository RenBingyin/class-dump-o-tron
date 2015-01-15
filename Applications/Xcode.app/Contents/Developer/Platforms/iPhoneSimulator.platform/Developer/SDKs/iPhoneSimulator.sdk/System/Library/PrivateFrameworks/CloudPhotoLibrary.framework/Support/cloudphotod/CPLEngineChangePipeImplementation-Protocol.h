//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLChangeBatch, NSArray;

@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
@property(nonatomic, getter=isLocked) _Bool locked;
- (NSArray *)allChangeBatches;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (CPLChangeBatch *)nextBatch;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)appendChangeBatch:(CPLChangeBatch *)arg1 error:(id *)arg2;
- (unsigned long long)countOfQueuedBatches;
@end

