//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DACoreDAVAgent.h"

#import "ABPredicateDelegate.h"
#import "CardDAVAddressBookURLsConsumer.h"
#import "CardDAVFinishInitialSyncConsumer.h"
#import "CardDAVMeCardUpdateConsumer.h"
#import "DAActionConsumer.h"
#import "DABabysittable.h"
#import "DAContactsUpdateConsumer.h"
#import "DADataclassLockWatcher.h"
#import "DARefreshManagerDelegate.h"
#import "DAValidityCheckConsumer.h"

@class DATrustHandler, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface CardDAVAgent : DACoreDAVAgent <CardDAVAddressBookURLsConsumer, DAContactsUpdateConsumer, DADataclassLockWatcher, DAActionConsumer, DAValidityCheckConsumer, ABPredicateDelegate, DARefreshManagerDelegate, CardDAVFinishInitialSyncConsumer, CardDAVMeCardUpdateConsumer, DABabysittable>
{
    NSMutableSet *_currentlySyncingFolderURLs;
    NSMutableArray *_outstandingFolderRequests;
    NSLock *_folderItemSyncRequestLock;
    _Bool _isSyncingHierarchy;
    NSMutableDictionary *_folderURLToHeldAsideGroups;
    int _matchMode;
    void *_testRecord;
    void *_matchedRecord;
    NSURL *_serverTokenRegistrationURL;
    NSMutableSet *_containerPushKeys;
    NSMutableDictionary *_folderURLToSyncInfo;
    NSMutableSet *_bulkUploadUUIDBlacklist;
    NSMutableSet *_bulkUploadHREFBlacklist;
}

- (void).cxx_destruct;
- (id)serverTokenRegistrationURL;
- (void)refreshCollections:(id)arg1 withReason:(int)arg2;
- (id)password;
- (id)username;
- (id)watchedCollections;
- (id)onBehalfOfBundleIdentifier;
- (id)scheduleIdentifier;
- (id)waiterID;
- (void)failedToRetrieveAddressBookURLsWithError:(id)arg1;
- (void)successfullyRetrievedAddressBookURLs;
- (_Bool)APSTopicHasValidPrefix:(id)arg1;
- (void)_syncAllContactFoldersWithRemoteChanges:(_Bool)arg1;
- (void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(_Bool)arg2;
- (void)_appendSyncRequest:(id)arg1;
- (void)_fireWaitingFolderItemSyncRequests;
- (void)_syncRequest:(id)arg1;
- (void)_reallySyncRequest:(id)arg1;
- (id)_copyCoalescedChangesInContainer:(void *)arg1 existingActions:(id)arg2 maxImageSize:(long long)arg3 maxResourceSize:(long long)arg4 changeContext:(id)arg5 outTouchedDB:(_Bool *)arg6;
- (id)_copyABActionsOfType:(unsigned int)arg1 inContainer:(void *)arg2 existingActions:(id)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 outHighestChangeId:(int *)arg6 outTouchedDB:(_Bool *)arg7;
- (_Bool)_fillOutExternalUUIDForRecordType:(unsigned int)arg1 localId:(int)arg2 changeType:(long long)arg3 outTouchedDB:(_Bool *)arg4;
- (void)_addChangeForType:(long long)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 changeIdsToClear:(id)arg7;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)_addressBookSyncTask:(id)arg1 failedWithErrorCode:(long long)arg2;
- (void)_handlePotential503Error:(id)arg1;
- (void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(_Bool)arg8 moreAvailable:(_Bool)arg9 moreLocalChangesAvailable:(_Bool)arg10 pushedActions:(id)arg11;
- (_Bool)_syncResultForFolderWithURL:(id)arg1 newTag:(id)arg2 newSyncToken:(id)arg3 actions:(id)arg4 changeIdContext:(id)arg5 isInitialSync:(_Bool)arg6 arePartialResults:(_Bool)arg7;
- (void)contactsFolderWithId:(id)arg1 successfullyPushedActions:(id)arg2;
- (void)successfullyFinishedInitalUploadForFolderWithID:(id)arg1 blacklistedUUIDs:(id)arg2 blacklistedHREFs:(id)arg3;
- (void)_finishInitialSyncForFolderWithURL:(id)arg1;
- (void)_pushInitialSyncActionsForFolderWithURL:(id)arg1;
- (void)_successfullyFinishedInitialSyncForFolderWithID:(id)arg1;
- (_Bool)_updateMeCard;
- (void)failedToUpdateServerMeCardWithError:(id)arg1;
- (void)successfullyUpdatedServerMeCardWithURL:(id)arg1;
- (void)failedToFinishInitialSync:(id)arg1 error:(id)arg2;
- (_Bool)_handleAction:(id)arg1 inStore:(void *)arg2 withFolderURL:(id)arg3 isInitialSync:(_Bool)arg4 arePartialResults:(_Bool)arg5;
- (int)_localIdForExternalURL:(id)arg1 inContainer:(void *)arg2 withFolderURL:(id)arg3;
- (_Bool)_clearChangeHistoriesWithChangeIdContext:(id)arg1 pushedActions:(id)arg2 inStore:(void *)arg3;
- (void *)_copyExistingABRecordForContact:(id)arg1 inStore:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)refreshFolderListRequireChangedFolders:(_Bool)arg1 isUserRequested:(_Bool)arg2;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMonitoring;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (void)_tearDownABNotifications;
- (void)_setUpABNotifications;
- (void)_validateAndSync:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) DATrustHandler *trustHandler;

@end

