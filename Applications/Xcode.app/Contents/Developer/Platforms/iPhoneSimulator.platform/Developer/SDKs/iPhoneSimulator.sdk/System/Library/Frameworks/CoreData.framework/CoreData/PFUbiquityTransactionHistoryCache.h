//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionHistoryCache : NSObject
{
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    NSPersistentStoreCoordinator *_privatePSC;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    NSMutableArray *_entriesToWrite;
    PFUbiquityKnowledgeVector *_cacheKV;
    PFUbiquityKnowledgeVector *_minCacheKV;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    _Bool _hasScheduledWriteBlock;
}

@property(readonly, nonatomic) PFUbiquityKnowledgeVector *minCacheKV; // @synthesize minCacheKV=_minCacheKV;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_rootLocation;
@property(retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache; // @synthesize globalIDCache=_globalIDCache;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *cacheKV; // @synthesize cacheKV=_cacheKV;
@property(readonly, nonatomic) NSArray *cachedGlobalIDs;
- (id)cachedTransactionHistoryForGlobalID:(id)arg1;
- (_Bool)purgeCacheAndWritePendingEntries:(_Bool)arg1 error:(id *)arg2;
- (_Bool)writePendingEntries:(id *)arg1;
- (_Bool)addTransactionEntryLights:(id)arg1 error:(id *)arg2;
- (_Bool)addTransactionEntryLight:(id)arg1 needsWrite:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addTransactionEntry:(id)arg1 error:(id *)arg2;
- (_Bool)cacheTransactionHistory:(id *)arg1;
- (id)describeCachesVerbose;
- (id)describeCaches;
- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)init;

@end

