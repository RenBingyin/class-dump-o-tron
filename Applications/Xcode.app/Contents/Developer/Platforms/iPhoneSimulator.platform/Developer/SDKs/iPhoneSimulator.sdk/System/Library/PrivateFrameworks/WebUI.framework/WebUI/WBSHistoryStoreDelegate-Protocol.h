//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSHistoryLoaderDelegate.h"

@class WBSHistoryDeletionPlan, WBSHistorySQLiteStore;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (void)historyStoreDidFailDatabaseIntegrityCheck:(WBSHistorySQLiteStore *)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(WBSHistorySQLiteStore *)arg1;
- (void)historyStore:(WBSHistorySQLiteStore *)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;
@end

