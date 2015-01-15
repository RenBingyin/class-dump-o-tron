//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDSystemAvailabilityWatcher.h"
#import "CKXPCDaemon.h"

@class CKDClientContext, CKWatchdog, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher, CKXPCDaemon>
{
    CKDClientContext *_context;
    _Bool _sandboxed;
    _Bool _canUsePackages;
    _Bool _canOpenByID;
    int _pid;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSString *_procName;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSString *_bundleIdentifier;
    CKWatchdog *_watchdog;
    NSString *_cachedSourceApplicationBundleIdentifier;
    NSArray *_cachedSandboxExtensions;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_pendingOperationIDs;
}

+ (id)sharedClientThrottlingOperationQueue;
@property(retain, nonatomic) NSMutableSet *pendingOperationIDs; // @synthesize pendingOperationIDs=_pendingOperationIDs;
@property(nonatomic) _Bool canOpenByID; // @synthesize canOpenByID=_canOpenByID;
@property(nonatomic) _Bool canUsePackages; // @synthesize canUsePackages=_canUsePackages;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) NSArray *cachedSandboxExtensions; // @synthesize cachedSandboxExtensions=_cachedSandboxExtensions;
@property(retain, nonatomic) NSString *cachedSourceApplicationBundleIdentifier; // @synthesize cachedSourceApplicationBundleIdentifier=_cachedSourceApplicationBundleIdentifier;
@property(retain, nonatomic) CKWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQueue; // @synthesize cancellationQueue=_cancellationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSOperationQueue *backgroundOperationThrottleQueue; // @synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (_Bool)canUsePackagesWithError:(id *)arg1;
- (_Bool)canReadMMCSItem:(id)arg1 error:(id *)arg2;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (id)statusReport;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performUpdateUserPresenceOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchLikesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performLikeItemsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyShareCommentsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareCommentsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performShareInvitationResponseOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareInvitationsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_accountStatusWithClientContext:(id)arg1;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isConnectionAuthorizedForOperation:(id)arg1 error:(id *)arg2;
- (_Bool)usePublicTokenEntitlement;
- (id)apsEnvironmentEntitlement;
- (id)_clientPrefixEntitlement;
- (_Bool)hasCloudKitSystemServiceEntitlement;
- (_Bool)hasDeviceIdentifierEntitlement;
- (_Bool)hasProtectionDataEntitlement;
- (_Bool)_hasCustomAccountsEntitlement;
- (_Bool)_hasEnvironmentEntitlement;
- (_Bool)_hasMasqueradingEntitlement;
- (_Bool)_hasEntitlementForKey:(id)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken;
- (void)tearDown;
- (void)setContext:(id)arg1;
@property(readonly, nonatomic) CKDClientContext *context;
- (void)systemAvailabilityChanged:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)_setupOperationQueues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

