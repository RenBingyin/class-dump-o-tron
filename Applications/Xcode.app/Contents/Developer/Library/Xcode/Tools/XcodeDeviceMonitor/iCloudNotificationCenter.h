//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSRecursiveLock, iCloudUbiquityService;

@interface iCloudNotificationCenter : NSObject
{
    NSOperationQueue *_containerQueryQueue;
    NSMutableDictionary *_queryByContainerName;
    NSMutableDictionary *_queryObserversByContainerName;
    NSMutableSet *_watchedContainerNames;
    NSMutableSet *_globalObservers;
    NSRecursiveLock *_globalObserversLock;
    id <iCloudItemProvider> _itemProvider;
    NSMutableDictionary *_observersByURL;
    NSMutableDictionary *_observersByToken;
    NSMutableDictionary *_ubiquityItemsByURL;
    struct UBItemStatusNotification *_notification;
    struct UBItemStatusNotification *_containerNotification;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    iCloudUbiquityService *_ubiquityService;
}

+ (void)initialize;
@property(retain, nonatomic) iCloudUbiquityService *ubiquityService; // @synthesize ubiquityService=_ubiquityService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(nonatomic) struct UBItemStatusNotification *containerNotification; // @synthesize containerNotification=_containerNotification;
@property(nonatomic) struct UBItemStatusNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSMutableDictionary *ubiquityItemsByURL; // @synthesize ubiquityItemsByURL=_ubiquityItemsByURL;
@property(retain, nonatomic) NSMutableDictionary *observersByToken; // @synthesize observersByToken=_observersByToken;
@property(retain, nonatomic) NSMutableDictionary *observersByURL; // @synthesize observersByURL=_observersByURL;
@property(readonly, nonatomic) id <iCloudItemProvider> itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)addObserverForItem:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)unregisterItemWithUbiquity:(id)arg1;
- (void)registerItemWithUbiquity:(id)arg1;
- (void)unwatchContainerWithName:(id)arg1;
- (void)watchContainerWithName:(id)arg1;
- (void)_updateFromContainerQuery:(id)arg1 userInfo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingContainerQuery:(id)arg1;
- (void)_containerQueryHasRemovedItems:(id)arg1 addedItems:(id)arg2 changedItems:(id)arg3;
- (void)_containerQueryChangedItems:(id)arg1 observers:(id)arg2;
- (id)_containerQueryAddedItemWithURL:(id)arg1 observers:(id)arg2;
- (void)_containerQueryRemoveItemWithURL:(id)arg1 observers:(id)arg2;
- (void)_getItem:(id *)arg1 oldStyleURL:(id *)arg2 fromURL:(id)arg3;
- (void)_containerQueryResultsChanged:(id)arg1;
- (void)_notifyObservers:(id)arg1 foriCloudItem:(id)arg2 status:(unsigned long long)arg3 info:(id)arg4;
- (void)initialRegistrationForUbiquityNotifications;
- (void)dealloc;
- (id)initWithItemProvider:(id)arg1;
- (void)_registerNotificationBlock;
- (CDUnknownBlockType)notificationBlockVersion2;
- (id)globalObservers;

@end

