//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSyncedClient.h"

@class MapsSyncManager, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface Bookmarks : NSObject <MapsSyncedClient>
{
    NSMutableArray *_bookmarks;
    _Bool _savingEnabled;
    _Bool _hasPendingChanges;
    NSObject<OS_dispatch_queue> *_saveQ;
    id <BookmarksDelegate> _delegate;
    MapsSyncManager *_syncManager;
}

+ (id)sharedBookmarks;
@property(nonatomic) __weak id <BookmarksDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MapsSyncManager *syncManager; // @synthesize syncManager=_syncManager;
- (void).cxx_destruct;
- (void)syncManagerDidUpdateSyncedItems:(id)arg1;
- (void)updateSyncedItemAtIndexes:(id)arg1;
- (void)removeSyncedItemsAtIndexes:(id)arg1;
- (void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
- (_Bool)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newSyncedItemForSyncData:(id)arg1;
@property(readonly, nonatomic) NSArray *syncedItems;
@property(readonly, nonatomic) _Bool syncShouldUseCustomStore;
@property(readonly, nonatomic) _Bool syncSupportsKVO;
@property(readonly, nonatomic) NSString *syncIdentifier;
- (void)moveBookmarkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeBookmarkAtIndex:(unsigned long long)arg1;
- (void)replaceBookmark:(id)arg1 withBookmark:(id)arg2;
- (void)addBookmark:(id)arg1;
- (void)_cleanBookmark:(id)arg1;
- (void)endChanges;
- (void)beginChanges;
- (void)_madeChanges;
- (void)_saveBookmarks;
- (id)orderedBookmarks;
- (void)dealloc;
- (id)init;
- (void)mergeWithLocalStoreOnNextLaunch;
- (void)resetSyncState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool syncInvertedOrdering;
@property(readonly, nonatomic) _Bool syncShouldUseItemPositions;

@end

