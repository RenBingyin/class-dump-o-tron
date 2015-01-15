//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebBookmarksXPCConnectionDelegate.h"

@class NSMutableArray, NSObject<OS_xpc_object>, NSString, NSTimer, WBUHistory, WebBookmarkCollection, WebBookmarksXPCListener;

@interface WebBookmarksServer : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCListener *_listener;
    NSMutableArray *_connections;
    NSMutableArray *_readingListReplyConnections;
    unsigned long long _readingListQueueRetryCount;
    NSObject<OS_xpc_object> *_readingListQueue;
    NSTimer *_readingListQueueTimer;
    WebBookmarkCollection *_collection;
    NSMutableArray *_indexedDatabaseUsages;
    WBUHistory *_history;
    _Bool _isAlreadyClearingHistory;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)_cloudHistorySaveChangesDidComplete:(id)arg1;
- (_Bool)_isCloudHistoryEnabled;
- (void)_saveChangesToCloudHistoryStore;
- (void)_finishClearingAllHistory;
- (void)_clearAllHistory;
- (void)_connection:(id)arg1 clearAllSafariHistoryWithMessage:(id)arg2;
- (void)_connection:(id)arg1 getSafariDataUsageSummaryWithMessage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariPersistentURLCacheStorage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariAllWebSecurityOriginWithMessage:(id)arg2;
- (void)_connection:(id)arg1 deleteSafariWebSecurityOriginWithMessage:(id)arg2;
- (void)_connection:(id)arg1 getSafariWebDataUsageWithMessage:(id)arg2;
- (_Bool)_removeAllIDBData;
- (_Bool)_removeIDBDataForHost:(id)arg1;
- (void)_refreshIndexedDatabaseUsage;
- (void)_initializeSafariWebDataIfNeeded;
- (void)_connection:(id)arg1 setCellularReadingListAllowedWithMessage:(id)arg2;
- (void)_connection:(id)arg1 getCellularReadingListAllowedWithMessage:(id)arg2;
- (void)_connection:(id)arg1 didTogglePrivateBrowsingWithMessage:(id)arg2;
- (void)_connection:(id)arg1 didToggleCloudTabsWithMessage:(id)arg2;
- (void)_clearCloudTabsForCurrentDeviceForConnection:(id)arg1;
- (void)_clearAllCloudTabDevicesForConnection:(id)arg1;
- (void)_addToReadingListWithMessage:(id)arg1 forConnection:(id)arg2;
- (id)_localizedAppNameForPID:(int)arg1;
- (void)_commitReadingListQueue;
- (void)_clearReadingListQueueTimer;
- (void)_readingListQueueTimerDidFire:(id)arg1;
- (void)_queueReadingListItems:(id)arg1;
- (void)_restoreReadingListQueue;
- (id)_readingListQueueBackupPath;
- (void)_addItemsToReadingList:(id)arg1;
- (void)_addReadingListItemWithAddress:(id)arg1 title:(id)arg2 previewText:(id)arg3 clientBundle:(id)arg4 clientName:(id)arg5;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

