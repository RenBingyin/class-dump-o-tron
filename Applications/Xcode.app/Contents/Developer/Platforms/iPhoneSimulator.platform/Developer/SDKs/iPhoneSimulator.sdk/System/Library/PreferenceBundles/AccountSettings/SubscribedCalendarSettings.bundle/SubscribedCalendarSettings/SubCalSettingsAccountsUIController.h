//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DASettingsAccountsUIController.h"

@class NSArray;

@interface SubCalSettingsAccountsUIController : DASettingsAccountsUIController
{
    _Bool _broughtUpInitialKeyboard;
    NSArray *_plistSpecifiers;
}

@property(retain, nonatomic) NSArray *plistSpecifiers; // @synthesize plistSpecifiers=_plistSpecifiers;
@property(nonatomic) _Bool broughtUpInitialKeyboard; // @synthesize broughtUpInitialKeyboard=_broughtUpInitialKeyboard;
- (void).cxx_destruct;
- (id)localizedAccountSetupTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (void)cancelButtonTapped:(id)arg1;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)_reloadHostDependentSepcifiers;
- (_Bool)haveEnoughValues;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (_Bool)validateAccount;
- (void)viewDidAppear:(_Bool)arg1;
- (id)accountSpecifiers;
- (id)newDefaultAccount;
- (void)_insertSecondarySpecifiers;
- (_Bool)_showingSecondarySpecifiers;
- (id)_secondarySpecifiers;
- (id)_primarySpecifiers;
- (void)_setHostKeyboardToDefaultOnTraits:(id)arg1;
- (void)_setHostKeyboardForLoneSpecifierOnTraits:(id)arg1;

@end
