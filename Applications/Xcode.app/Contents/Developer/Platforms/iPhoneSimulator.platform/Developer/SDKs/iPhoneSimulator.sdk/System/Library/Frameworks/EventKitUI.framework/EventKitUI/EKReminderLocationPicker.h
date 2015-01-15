//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "EKReminderLocationPickerCellButtonHandler.h"
#import "EKReminderLocationPickerModelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class EKReminderLocationPickerCell, EKReminderLocationPickerModel, NSString, UIAlertView;

@interface EKReminderLocationPicker : UITableViewController <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate, UITextFieldDelegate, EKReminderLocationPickerCellButtonHandler>
{
    EKReminderLocationPickerModel *_model;
    id <EKStyleProvider> _styleProvider;
    long long _savedStatusBarStyle;
    UIAlertView *_meCardAlert;
    EKReminderLocationPickerCell *_currentLocationCell;
    EKReminderLocationPickerCell *_typedLocationCell;
    _Bool _hasEditedText;
    _Bool _isShowingPeopleAddressPicker;
    _Bool _allowsShowInMap;
    _Bool _isEditingContactAddress;
    _Bool _ignoreNextSelectionChange;
    id <EKReminderLocationPickerDelegate> _locationPickerDelegate;
}

@property(nonatomic) __weak id <EKReminderLocationPickerDelegate> locationPickerDelegate; // @synthesize locationPickerDelegate=_locationPickerDelegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldClearButtonPressed:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_typedLocationCellTextDidChange;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_presentPersonPicker;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3;
- (void)_dismissPeoplePicker;
- (void)_setLocationFromRecord:(void *)arg1 multiValueIdentifier:(int)arg2;
- (void)failureButtonPressed;
- (void)contactsButtonPressed;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(long long)arg2;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidEndOperation:(id)arg1;
- (void)locationPickerModelDidBeginOperation:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_prepareCurrentLocationCell;
- (id)_prepareTypedLocationCell;
- (int)_accessoryTypeForLocationItem:(id)arg1 isSelected:(_Bool)arg2;
- (void)_styleCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_indexPathForSelectedItem;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)marginForTableView:(id)arg1;
- (void)_updateAccessoryViewForTypedLocation;
- (void)_reloadCustomLocationRow;
- (_Bool)_shouldShowTypedLocation;
- (_Bool)_isCustomLocationRow:(id)arg1;
- (void)_setCell:(id)arg1 checked:(_Bool)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_showPickMeCardAlertIfNecessary;
- (void)_removeExistingMeCardAlert;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

