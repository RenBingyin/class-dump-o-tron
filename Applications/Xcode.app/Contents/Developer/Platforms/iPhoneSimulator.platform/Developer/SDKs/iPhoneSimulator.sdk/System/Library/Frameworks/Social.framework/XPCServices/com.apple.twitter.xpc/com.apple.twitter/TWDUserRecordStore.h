//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABSearchOperationDelegate.h"

@class ACAccount, ACAccountStore, NSString, SLDatabase, TWDSession;

@interface TWDUserRecordStore : NSObject <ABSearchOperationDelegate>
{
    TWDSession *_weakSession;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    SLDatabase *_database;
}

- (void).cxx_destruct;
- (void)consumeAddressBookRecords:(id)arg1;
- (void)consumeScreenName:(id)arg1 existed:(_Bool *)arg2;
- (id)userRecordWithDictionaryRepresentation:(id)arg1 existed:(_Bool *)arg2;
- (void)saveUserRecordStoreWithHandler:(CDUnknownBlockType)arg1;
- (id)userRecordEntityWithScreenName:(id)arg1;
- (id)userRecordEntityWithID:(id)arg1;
- (void)updateFollowedUserRecords;
- (void)fetchFollowedUserRecordsWithCursor:(id)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(_Bool)arg3;
- (void)findABEntriesWithScreenName:(id)arg1;
- (void)findABEntriesWithTwitterScreenNames:(CDUnknownBlockType)arg1;
- (void)consumeUserRecordRepresentations:(id)arg1;
- (void)runSynchronouslyOnCoreDataQueue:(CDUnknownBlockType)arg1;
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

