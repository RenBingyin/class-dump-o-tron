//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACUIViewController.h"

@class ACAccount, NSString, PSSpecifier, SLFacebookSession, UIBarButtonItem;

@interface SLFacebookAccountController : ACUIViewController
{
    ACAccount *_account;
    NSString *_password;
    SLFacebookSession *_session;
    PSSpecifier *_fullNameSpecifier;
    UIBarButtonItem *_saveButton;
    _Bool _userWantsToMergeContacts;
}

- (void).cxx_destruct;
- (void)_showErrorMessage:(id)arg1 withTitle:(id)arg2;
- (_Bool)_confirmContactsMerge;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)_deleteButtonTapped:(id)arg1;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_authenticateAccountIfNeeded;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)_didEditPasswordField:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)passwordWithSpecifier:(id)arg1;
- (void)setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)fullNameWithSpecifier:(id)arg1;
- (id)usernameWithSpecifier:(id)arg1;
- (id)_loginSpecifiers;
- (id)_fullNameSpecifier;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;

@end

