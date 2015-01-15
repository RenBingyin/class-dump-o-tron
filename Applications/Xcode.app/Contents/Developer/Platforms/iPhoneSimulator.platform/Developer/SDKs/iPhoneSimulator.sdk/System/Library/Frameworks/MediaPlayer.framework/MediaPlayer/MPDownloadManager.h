//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSDownloadManagerObserverPrivate.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SSDownloadManager;

@interface MPDownloadManager : NSObject <SSDownloadManagerObserverPrivate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
    NSMutableDictionary *_downloadsByStoreItemID;
    struct __CFArray *_observers;
}

+ (id)mediaPlayerDownloadManager;
- (void).cxx_destruct;
- (void)_rebuildCacheIfNecessary;
- (void)_clearCache;
- (id)_copyObservers;
- (void)_applyBlockToObservers:(CDUnknownBlockType)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)inProgressDownloadWithStoreItemID:(long long)arg1;
- (id)downloadWithIdentifier:(long long)arg1;
@property(readonly, nonatomic) NSArray *downloads;
- (void)cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

