//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveAllAccounts;
- (void)_removeAppleIDCertsForUsername:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)updateAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accountsEnabledForDataclass:(id)arg1;
- (id)primaryAccount;
- (void)reloadAccounts;
- (id)accounts;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_accountStore;
- (void)dealloc;

@end

