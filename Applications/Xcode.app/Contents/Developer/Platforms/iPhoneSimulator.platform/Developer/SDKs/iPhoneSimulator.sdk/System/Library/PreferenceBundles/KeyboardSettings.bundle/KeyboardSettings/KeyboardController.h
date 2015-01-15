//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSAppListController.h"

@class NSArray, TIUserDictionaryController;

@interface KeyboardController : PSAppListController
{
    _Bool _needsReloadSpecifiers;
    NSArray *_openShortcutsSpecifiers;
    TIUserDictionaryController *_dictionaryController;
}

+ (long long)compareUsingOrderInArray:(id)arg1 withFirst:(id)arg2 second:(id)arg3;
+ (void)localizeAndSortPreferencesArray:(id)arg1;
@property(nonatomic) _Bool needsReloadSpecifiers; // @synthesize needsReloadSpecifiers=_needsReloadSpecifiers;
@property(readonly, nonatomic) TIUserDictionaryController *dictionaryController; // @synthesize dictionaryController=_dictionaryController;
@property(readonly, nonatomic) NSArray *openShortcutsSpecifiers; // @synthesize openShortcutsSpecifiers=_openShortcutsSpecifiers;
- (void)hardwareKeyboardAvailabilityChanged;
- (id)hardwareKeyboardSpecifier;
- (void)addEnabledExtensionSpecifiersToArray:(id)arg1;
- (id)specifiers;
- (void)addHardwareKeyboardAndShortcuts:(id)arg1;
- (id)loadAllKeyboardPreferences;
- (id)sortPreferencesKeysByInputModeOrderAndCount:(id)arg1 inputModes:(id)arg2;
- (id)groupPreferences:(id)arg1 forMapping:(id)arg2 inputModes:(id)arg3;
- (id)addAllPreferencesToArray:(id)arg1 mapPreferenceToInputMode:(id)arg2;
- (id)mergePreferences:(id)arg1 inputModesToPreferences:(id)arg2;
- (void)loadPreferenceForInputModeIdentifier:(id)arg1 addNewPreferencesToArray:(id)arg2 defaultPreferenceIdentifiers:(id)arg3 additionalPreferenceIdentifiers:(id)arg4 mapPreferenceToInputMode:(id)arg5;
- (id)localizedDisplayNameForInputMode:(id)arg1;
- (void)moveEnableDictationPreferenceToEndAndAddFooterTextForGroup:(id)arg1;
- (void)moveSpaceConfirmationPreferenceToEndAndAddFooterTextForGroup:(id)arg1;
- (void)movePeriodShortcutPreferenceToEndAndAddFooterTextForGroup:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)presentPrivacySheet:(id)arg1;
- (void)_dismissConfirmationSheet;
- (void)dictationDisabledCancelled:(id)arg1;
- (void)dictationDisabledConfirmed:(id)arg1;
- (void)dictationEnabledCancelled:(id)arg1;
- (void)dictationEnabledConfirmed:(id)arg1;
- (void)setDictationEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)dictationEnabled:(id)arg1;
- (void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)bundle;
- (void)dealloc;
- (id)init;

@end

