//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "UIActionSheetDelegate.h"

@class ACAccountStore, NSString, PSSpecifier;

@interface ScheduleSettingsController : PSListController <UIActionSheetDelegate>
{
    ACAccountStore *_accountStore;
    PSSpecifier *_checkedSpecifier;
    long long _rowToSelect;
    long long _radioGroup;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (void)setPollInterval:(id)arg1 specifier:(id)arg2;
- (void)setPushEnabled:(id)arg1 specifier:(id)arg2;
- (id)pushEnabled:(id)arg1;
- (void)_readScheduleSettings;
- (void)_setMCCSchedule:(id)arg1 specifier:(id)arg2;
- (id)_mccSchedule:(id)arg1;
- (int)styleForAccount:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_specifierForMCCAccount:(id)arg1 dataclasses:(id)arg2 canPush:(_Bool)arg3 canFetch:(_Bool)arg4 canManual:(_Bool)arg5;
- (id)_specifiersForMCCAccount:(id)arg1;
- (id)_makeMCCSpecifiers;
- (id)specifiers;
- (void)dealloc;
- (id)init;
- (id)initForContentSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
