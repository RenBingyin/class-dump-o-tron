//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, SYDApplicationScheduling, SYDJournal, SYDScheduler;

@interface SYDApplication : NSObject
{
    NSOperationQueue *queue;
    NSString *bundleIdentifier;
    NSString *storeIdentifier;
    NSString *schedulerIdentifier;
    NSString *additionalChangeNotificationName;
    _Bool _shouldResetOnFirstSync;
    NSObject<OS_dispatch_queue> *refreshQueue;
    NSURL *plistURL;
    NSMutableDictionary *plistCache;
    NSMutableSet *pendingDirtyKeys;
    NSMutableDictionary *pendingLocalData;
    SYDScheduler *scheduler;
    long long changeCount;
    long long initialSyncChangeCount;
    SYDJournal *journal;
    SYDApplicationScheduling *scheduling;
    unsigned long long debugCount;
    _Bool inactive;
    _Bool _daemon;
    _Bool isAdditionalStore;
    _Bool simulatePushNotification;
}

+ (id)additionalStoreIdentifiersForBundleIdentifier:(id)arg1 installInfo:(id)arg2;
+ (_Bool)installInfoAllowsKeyValueStore:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)installInfoForBundleIdentifiers:(id)arg1;
+ (id)installInfoForBundleIdentifier:(id)arg1;
+ (id)knownDaemons;
+ (id)defaultSchedulerIdentifierForStoreIdentifier:(id)arg1;
+ (_Bool)storeIdentifierShouldResetOnDisable:(id)arg1;
+ (_Bool)storeIdentifierIsRegisteredWithMultipleInternalApps:(id)arg1;
+ (Class)classForSchedulerWithIdentifier:(id)arg1;
+ (id)schedulerIdentifiers;
+ (id)defaultSchedulerIdentifier;
+ (id)_schedulerIdentifierMapping;
@property(readonly, nonatomic) _Bool daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) _Bool isAdditionalStore; // @synthesize isAdditionalStore;
@property(readonly, nonatomic) SYDApplicationScheduling *scheduling; // @synthesize scheduling;
@property(nonatomic) _Bool inactive; // @synthesize inactive;
@property(retain, nonatomic) SYDScheduler *scheduler; // @synthesize scheduler;
@property(readonly, nonatomic) NSString *schedulerIdentifier; // @synthesize schedulerIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier;
- (int)filteredSyncReasonForReason:(int)arg1;
- (id)diagnosticDescription;
- (void)accountDidChange:(int)arg1;
- (void)deactivateWithHandler:(CDUnknownBlockType)arg1;
- (id)persistentState;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)didReceiveMemoryWarning;
- (void)resetSyncState;
- (void)resetAllValuesForce:(_Bool)arg1;
- (_Bool)wasSyncSuccessfulWithServerChanges:(id)arg1;
- (void)stopSynchronizingWithServerWithServerChanges:(id)arg1;
- (id)startSynchronizingWithServer;
- (id)storeLocalChanges:(id)arg1 withKnownChangeCount:(long long)arg2;
- (void)discardJournalEntriesWithChangeCount:(long long)arg1;
- (_Bool)_writePlistIfNecessary;
- (void)_loadPlistIfNecessary;
- (void)_discardPlistIfPossible;
@property(readonly, nonatomic) NSURL *plistURL;
@property(retain, nonatomic) NSString *storeIdentifier;
- (id)description;
- (int)refreshStoreIdentifierWithInstallInfo:(id)arg1;
- (int)refreshStoreIdentifier;
- (void)dealloc;
- (id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3;
- (id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 persistentState:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3;
@property(readonly, nonatomic) NSString *displayIdentifier;
- (void)endDebuggingStore;
- (void)beginDebuggingStore;
- (_Bool)isCloudSyncAllowed;
@property(readonly, nonatomic, getter=isDevelopmentApp) _Bool developmentApp;

@end

