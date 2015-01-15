//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileMailSettings/AccountPSDetailControllerBase.h>

#import "EmailAliasListControllerDataSource.h"

@class DeliveryAccount, EmailAliasListController, MailAccount, NSArray, NSDictionary, NSMutableDictionary, NSString, PSSpecifier, UISegmentedControl, UITextField;

@interface AccountPSDetailController : AccountPSDetailControllerBase <EmailAliasListControllerDataSource>
{
    NSMutableDictionary *_outgoingAccountValues;
    NSMutableDictionary *_outgoingAccountValuesAfterFailedValidation;
    MailAccount *_candidateIncomingAccount;
    NSString *_chosenType;
    MailAccount *_alternateEmailIncomingAccount;
    DeliveryAccount *_alternateEmailDeliveryAccount;
    _Bool _usingAlternateEmailAccount;
    struct __CFDictionary *_editableSuffixes;
    MailAccount *_existingIncomingAccount;
    MailAccount *_easySetupAccount;
    DeliveryAccount *_easySetupDeliveryAccount;
    NSDictionary *_easySetupNotes;
    int _easySetupResult;
    NSArray *_easySetupAccountTypes;
    UISegmentedControl *_accountTypeSegmentedControl;
    PSSpecifier *_passwordSpecifier;
    UITextField *_usernameField;
    unsigned int _isShowingEasySetup:1;
    unsigned int _isShowingEasySetupNote:1;
    unsigned int _hasAttemptedEasySetup:1;
    unsigned int _validatedIncoming:1;
    unsigned int _hasChanged:1;
    _Bool _shouldUseSSL;
    NSString *_popAccountClassString;
    NSString *_imapAccountClassString;
    _Bool _deliveryAccountIsBeingEdited;
    EmailAliasListController *_emailAliasListController;
}

- (id)_setOfKeysForAlteredValuesInDictionary:(id)arg1 originalDictionary:(id)arg2;
- (id)easySetupNote;
- (_Bool)validateEmailAddress:(id)arg1;
- (_Bool)_setupDeliveryAccountForValidatedAccount:(id)arg1;
- (id)_createDeliveryAccountWithUIValues;
- (id)addAlternateEmailAccountFromCurrentSettings;
- (void)_getAccountInfoForEmailAddress:(id)arg1;
- (id)addAccountFromCurrentSettings;
- (_Bool)_bypassAccountValidation;
- (void)_copyUIInformationIntoDeliveryAccount:(id)arg1;
- (void)_copyUIInformationIntoIncomingAccount:(id)arg1;
- (int)validateEasySetupAccounts;
- (void)reallyDeleteAccount;
- (_Bool)_addAccount:(id)arg1;
- (id)_isAliasEnabledForSpecifier:(id)arg1;
- (void)_enableAlias:(id)arg1 forSpecifier:(id)arg2;
- (id)_defaultAlias;
- (void)_setDefaultAlias:(id)arg1 forSpecifier:(id)arg2;
- (id)_getSMTPDisplayName:(id)arg1;
- (Class)accountClass;
- (id)_incomingAccountPropertyForKey:(id)arg1;
- (id)_outgoingAccountPropertyForKey:(id)arg1;
- (id)accountPropertyForKey:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (void)_setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2 specifier:(id)arg3;
- (void)_setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)_tryUpdatingDescriptionFromValue:(id)arg1 forKey:(id)arg2;
- (void)_mailAccountNameChanged;
- (id)outgoingHostName:(id)arg1;
- (void)setOutgoingHostName:(id)arg1 withSpecifier:(id)arg2;
- (void)_setIncomingAccountProperty:(id)arg1 forKey:(id)arg2 specifier:(id)arg3;
- (void)_setIncomingAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2 withSpecifier:(id)arg3;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)_descriptionFromEmailAddress:(id)arg1;
- (_Bool)shouldDisplayNextButtonForChosenType;
- (id)chosenType:(id)arg1;
- (void)setChosenType:(id)arg1 withSpecifier:(id)arg2;
- (void)finishedSetupWithAccount:(id)arg1;
- (void)showEasySetupNoteWithAccount:(id)arg1;
- (void)_stopShowingEasySetup;
- (void)_finishedEasySetup;
- (void)_takeOutgoingAccountPropertiesFromAccount:(id)arg1;
- (_Bool)_hasEnoughInformationForEasySetup;
- (void)_tryEasySetupForEmailAddress:(id)arg1;
- (int)copyAccountsForEmailAddress:(id)arg1 incomingAccount:(id *)arg2 deliveryAccount:(id *)arg3 easySetupNotes:(id *)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_addExistingAccountAlertSheet:(id)arg1 buttonClicked:(long long)arg2;
- (void)didFinishSaveAccountAnywaysSheetWithResult:(_Bool)arg1;
- (void)showExistingAccountError;
- (void)didFinishEditingDeliveryAccount;
- (void)didBeginEditingDeliveryAccount;
- (_Bool)_shouldHideEnableAndDelete;
- (void)didEndEditingOnReturn:(id)arg1;
- (void)propertyValueChanged:(id)arg1;
- (void)segmentChanged:(id)arg1;
- (void)updateDoneButton;
- (void)_showFailedAddressAlertWithTitle:(id)arg1 body:(id)arg2;
- (void)_hideAccountValidationProgressUIWithPrompt:(id)arg1;
- (void)handleInvalidAccount:(id)arg1;
- (void)handleValidAccount:(id)arg1;
- (void)validateForNewAccount;
- (void)validateForExistingAccount;
- (void)processValidationResult:(int)arg1;
- (_Bool)haveEnoughValues;
- (void)saveAndDismiss;
- (void)emailAliasListController:(id)arg1 setEmailAliasList:(id)arg2 defaultEmailAlias:(id)arg3 forSpecifier:(id)arg4;
- (id)emailAliasListController:(id)arg1 accountTypeForSpecifier:(id)arg2;
- (id)emailAliasListController:(id)arg1 defaultEmailAliasForSpecifier:(id)arg2;
- (id)emailAliasListController:(id)arg1 emailAliasListForSpecifier:(id)arg2;
- (id)emailAliasDisplayStringWithSpecifier:(id)arg1;
- (void)loadEmailAliasListController:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetTargetsForSpecifiers:(id)arg1;
- (id)specifiers;
- (id)existingAccountSpecifiers;
- (void)deleteAccount;
- (void)confirmAccountDeletion;
- (void)setCandidateIncomingAccount:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setExistingAccount:(id)arg1;
- (id)existingAccount;
- (void)cancelAccountsCreation;
- (void)createAccountsAnyways;
- (void)createAccounts;
- (void)setOutgoingAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setIncomingAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)newAccount;
- (void)setChosenType:(id)arg1;
- (id)chosenType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

