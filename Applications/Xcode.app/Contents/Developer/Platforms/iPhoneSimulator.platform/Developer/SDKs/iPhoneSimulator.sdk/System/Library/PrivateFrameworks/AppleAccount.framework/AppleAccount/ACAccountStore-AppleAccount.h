//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccountStore.h"

@interface ACAccountStore (AppleAccount)
- (id)aa_grandSlamAccountWithUsername:(id)arg1;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_primaryAppleAccount;
- (id)aa_appleAccounts;
- (id)aa_appleAccountType;
@end

