//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistoryLoader.h"
#import "WBSHistoryLoaderDelegate.h"

@class NSArray, NSCountedSet, NSData, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, WBSBackgroundActivityScheduler, WBSSQLiteDatabase;

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoaderDelegate, WBSHistoryLoader>
{
    NSURL *_databaseURL;
    unsigned long long _itemCountLimit;
    double _ageLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_statements;
    NSMutableDictionary *_itemsByDatabaseID;
    NSMapTable *_weakVisitsByDatabaseID;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingVisitDeletes;
    NSMutableSet *_pendingTombstones;
    _Bool _commitGenerationValuesOnNextWrite;
    long long _currentGeneration;
    long long _lastSyncedGeneration;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    long long _cachedNumberOfDevicesInSyncCircle;
    int _databaseLockingPolicy;
    _Bool _loadInProgress;
    NSArray *_loadedItems;
    NSArray *_discardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    int _importState;
    NSTimer *_writeTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _isClosed;
    NSDate *_lastMaintenanceDate;
    _Bool _writeLastMaintenanceDateOnNextWrite;
    WBSBackgroundActivityScheduler *_maintenanceScheduler;
    id <WBSHistoryStoreDelegate> _delegate;
    WBSSQLiteDatabase *_database;
}

@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WBSHistoryStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_currentDate;
- (id)_visitsOrderedForInsertion:(id)arg1;
- (id)_itemsOrderedForInsertion:(id)arg1;
- (id)debugDictionaryRepresentation;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)_expireOldVisits;
- (void)_recomputeDerivedVisitCounts;
- (void)_performMaintenance;
- (void)_rescheduleMaintenance;
- (void)_scheduleMaintenance;
- (id)_statementForQuery:(id)arg1;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(CDUnknownBlockType)arg1 addingTombstone:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_visitsFromRows:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (id)_metadataDataValueForKey:(id)arg1;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (id)_visitsWithOrigins:(id)arg1;
- (id)visitForRow:(id)arg1;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)existingItemFromVisitRow:(id)arg1;
- (void)_pruneTombstones;
- (void)_insertTombstone:(id)arg1;
- (int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_insertVisit:(id)arg1;
- (void)_insertItem:(id)arg1;
- (void)_processPendingVisitDeletes;
- (void)_processPendingDeletes;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_processPendingWrites;
- (void)_writeTimerFired;
- (void)_scheduleWrite;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (void)_loadFromDatabase;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;
- (_Bool)_checkDatabaseIntegrity;
- (_Bool)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_loadHistory;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (long long)_lastSyncedGeneration;
- (void)_incrementCurrentGeneration;
- (long long)_currentGeneration;
- (void)replayAndAddTombstone:(id)arg1;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (unsigned long long)cachedNumberOfDevicesInSyncCircle;
- (void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (id)syncCircleSizeRetrievalThrottlerData;
- (void)setFetchThrottlerData:(id)arg1;
- (id)fetchThrottlerData;
- (void)setPushThrottlerData:(id)arg1;
- (id)pushThrottlerData;
- (void)setServerChangeTokenData:(id)arg1;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tombstonesNeedingSync;
- (id)_visitsNeedingSync;
- (void)getVisitsAndTombstonesNeedingSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereModified:(id)arg1;
- (void)itemsWereAdded:(id)arg1;
- (void)savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)waitForLoadingToComplete;
- (void)startLoading;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

