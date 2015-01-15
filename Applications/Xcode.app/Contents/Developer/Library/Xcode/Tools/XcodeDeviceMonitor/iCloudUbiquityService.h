//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iCloudService.h"

#import "iCloudItemProvider.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, iCloudNotificationCenter;

@interface iCloudUbiquityService : iCloudService <iCloudItemProvider>
{
    iCloudNotificationCenter *_notificationCenter;
    NSMutableDictionary *_itemCacheByItemID;
    NSMutableDictionary *_itemCacheByLocalURL;
    NSRecursiveLock *_cacheLock;
}

@property(retain, nonatomic) NSRecursiveLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) NSMutableDictionary *itemCacheByLocalURL; // @synthesize itemCacheByLocalURL=_itemCacheByLocalURL;
@property(retain, nonatomic) NSMutableDictionary *itemCacheByItemID; // @synthesize itemCacheByItemID=_itemCacheByItemID;
@property(retain, nonatomic) iCloudNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 destinationPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)accountInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)moveFile:(id)arg1 to:(id)arg2 using:(id)arg3 error:(id *)arg4;
- (void)childrenOfParent:(id)arg1 includeDeleted:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)itemForID:(long long)arg1 localURL:(id)arg2 includeLosers:(BOOL)arg3 ignoreCache:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)rootItemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)ubiquityItemForJSON:(id)arg1 localURL:(id)arg2;
- (id)ubiquityItemForLocalURL:(id)arg1 fromCache:(char *)arg2;
- (void)removeItemFromCache:(id)arg1;
- (id)addItemToCache:(id)arg1;
- (id)cachedItemForLocalURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)rootItem;
- (BOOL)hasCachedItemForLocalURL:(id)arg1;
- (id)ubiquityURLForCommand:(id)arg1 id:(id)arg2 parameters:(id)arg3;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

