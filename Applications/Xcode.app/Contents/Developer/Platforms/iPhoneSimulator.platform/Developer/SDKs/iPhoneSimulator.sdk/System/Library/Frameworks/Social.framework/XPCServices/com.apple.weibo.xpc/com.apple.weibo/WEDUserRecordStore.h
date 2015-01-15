//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSearchOperationDelegate.h"

@class ACAccount, ACAccountStore, NSString, SLDatabase, WEDSession;

@interface WEDUserRecordStore : NSObject <ABSearchOperationDelegate>
{
    WEDSession *_weakSession;
    SLDatabase *_database;
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (void)_consumeAddressBookRecords:(id)arg1;
- (void)_consumeScreenName:(id)arg1 existed:(_Bool *)arg2;
- (id)_userRecordWithDictionaryRepresentation:(id)arg1 existed:(_Bool *)arg2;
- (void)_saveUserRecordStoreWithHandler:(CDUnknownBlockType)arg1;
- (id)_userRecordEntityWithScreenName:(id)arg1;
- (id)_userRecordEntityWithUID:(id)arg1;
- (void)_updateFollowedUserRecords;
- (void)_fetchFollowedUserRecordsWithCursor:(id)arg1;
- (void)_findABEntriesWithScreenName:(id)arg1;
- (void)_findABEntriesWithWeiboScreenNames:(CDUnknownBlockType)arg1;
- (void)_consumeUserRecordRepresentations:(id)arg1;
- (void)_runSynchronouslyOnCoreDataQueue:(CDUnknownBlockType)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(_Bool)arg3;
- (void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateFollowedUserRecordsIfNeeded;
- (void)dealloc;
- (id)initWithSession:(id)arg1 database:(id)arg2 account:(id)arg3 accountStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

