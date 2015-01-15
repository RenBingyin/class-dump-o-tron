//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACUIViewController.h"

@class ACAccount, PSTextFieldSpecifier;

@interface WEPAccountEditController : ACUIViewController
{
    ACAccount *_account;
    PSTextFieldSpecifier *_screennameSpecifier;
    _Bool _isAccountDirty;
    _Bool _didAttemptNameUpdate;
}

- (void).cxx_destruct;
- (void)_updateFullNameIfNecessary;
- (void)_confirmDeleteAccount;
- (void)_deleteButtonTapped:(id)arg1;
- (void)_handleSaveCompletionWithSuccess:(_Bool)arg1 error:(id)arg2 wasVerifying:(_Bool)arg3;
- (void)_saveAccountChangesIfNecessary;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_passwordWithSpecifier:(id)arg1;
- (id)_usernameWithSpecifier:(id)arg1;
- (id)_displayNameWithSpecifier:(id)arg1;
- (void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2;
- (id)_screennameWithSpecifier:(id)arg1;
- (id)_descriptionSpecifier;
- (id)_passwordSpecifier;
- (id)_userNameSpecifier;
- (id)_screennameSpecifier;
- (id)specifiers;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

