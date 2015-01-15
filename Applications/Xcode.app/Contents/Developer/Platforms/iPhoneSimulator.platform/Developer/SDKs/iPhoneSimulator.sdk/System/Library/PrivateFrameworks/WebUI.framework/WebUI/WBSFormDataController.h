//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSFormDataController : NSObject
{
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    unsigned long long _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    NSDictionary *_allCredentialsCache;
    NSObject<OS_dispatch_queue> *_allCredentialsCacheAccessQueue;
    int _keychainChangedNotificationToken;
}

+ (id)domainFromURL:(id)arg1;
+ (_Bool)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(_Bool)arg3 ignorePositioning:(_Bool)arg4;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)specifierForControl:(id)arg1;
+ (_Bool)formContainsCreditCardNumberField:(id)arg1;
+ (_Bool)formContainsCreditCardData:(id)arg1;
+ (_Bool)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (_Bool)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long *)arg2;
+ (id)dontSaveMarker;
- (void).cxx_destruct;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (_Bool)hasCredentialsForPageWithMainFrame:(id)arg1;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(_Bool)arg3;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(_Bool)arg5;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(_Bool)arg2;
- (id)completionDBPath;
- (_Bool)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (_Bool)shouldAutoFillPasswords;
- (_Bool)shouldAutoFillFromPreviousData;
- (_Bool)shouldAutoFillFromAddressBook;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id *)arg2;
- (id)lastUsedUsernameForURL:(id)arg1;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id *)arg2;
- (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)matchForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(_Bool)arg3 matches:(id *)arg4 preferredLabel:(id)arg5;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(_Bool)arg3 matches:(id *)arg4;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(_Bool)arg4 preferredLabel:(id)arg5;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(_Bool)arg5 preferredLabel:(id)arg6;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(_Bool)arg5;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (id)preferredIdentifierForProperty:(id)arg1;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (void)domainsWithPreviousDataChanged;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)domainsWithPreviousData;
- (void)saveCompletionDBSoon;
- (id)allFormDataForSaving;
- (void)pruneCompletionDB;
- (void)loadCompletionDBIfNeeded;
- (void)dealloc;
- (id)init;

@end

