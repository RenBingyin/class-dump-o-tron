//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSQLAdapter, NSSQLStatement;

__attribute__((visibility("hidden")))
@interface NSSQLConnection : NSObject
{
    NSSQLAdapter *_adapter;
    _Bool _transactionIsOpen;
    _Bool _useSyntaxColoredLogging;
    NSSQLStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
}

+ (void)initialize;
- (void)dropUbiquityTables;
- (id)ubiquityTableValueForKey:(id)arg1;
- (id)ubiquityTableKeysAndValues;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)allPeerRanges;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (void)addPeerRange:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (id)fetchUbiquityKnowledgeVector;
- (void)_performPostSaveTasks;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(_Bool)arg2;
- (_Bool)hasPrimaryKeyTable;
- (void)endPrimaryKeyGeneration;
- (void)prepareForPrimaryKeyGeneration;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (id)fetchMetadata;
- (id)metadataColumns;
- (void)saveMetadata:(id)arg1;
- (_Bool)hasMetadataTable;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (struct __CFArray *)rawIntegerRowsForSQL:(id)arg1;
- (void)createSchema;
- (void)didCreateSchema;
- (void)willCreateSchema;
- (void)createMetadata;
- (void)createTablesForEntities:(id)arg1;
- (void)createIndexesForEntity:(id)arg1;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (void)createTableForEntity:(id)arg1;
- (void)endFetch;
- (void)setColumnsToFetch:(id)arg1;
- (id)columnsToFetch;
- (int)fetchResultSet:(void *)arg1 usingFetchPlan:(id)arg2;
- (id)newFetchedArray;
- (id)describeResults;
- (_Bool)isFetchInProgress;
- (void)setExclusiveLockingMode:(_Bool)arg1;
- (id)sqlStatement;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)execute;
- (void)prepareSQLStatement:(id)arg1;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(_Bool)arg3 entity:(id)arg4;
- (void)deleteRow:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)insertRow:(id)arg1;
- (void)writeCorrelationChangesFromTracker:(id)arg1;
- (_Bool)isOpen;
- (_Bool)databaseIsEmpty;
- (_Bool)canConnect;
- (void)transactionDidRollback;
- (void)transactionDidCommit;
- (void)transactionDidBegin;
- (void)_forceDisconnectOnError;
- (void)forceTransactionClosed;
- (_Bool)hasOpenTransaction;
- (void)disconnect;
- (void)sleep;
- (void)awake;
- (void)connect;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)beginTransaction;
- (id)adapter;
- (void)dealloc;
- (void)finalize;
- (id)initWithAdapter:(id)arg1;
- (void)_raiseOptimisticLockingExceptionWithReason:(id)arg1;

@end

