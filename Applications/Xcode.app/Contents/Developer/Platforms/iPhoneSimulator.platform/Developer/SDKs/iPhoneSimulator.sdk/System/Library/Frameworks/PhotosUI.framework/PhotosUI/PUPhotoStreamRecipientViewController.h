//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "IDSBatchIDQueryControllerDelegate.h"
#import "MFComposeRecipientViewDelegate.h"
#import "MFContactsSearchConsumer.h"
#import "UIPopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IDSBatchIDQueryController, MFComposeRecipientView, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSMutableSet, NSNumber, NSString, UIPopoverController, UIScrollView, UITableView;

@interface PUPhotoStreamRecipientViewController : UIViewController <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UIPopoverControllerDelegate, MFComposeRecipientViewDelegate, IDSBatchIDQueryControllerDelegate>
{
    UITableView *_searchResultsTable;
    MFComposeRecipientView *_recipientView;
    UIScrollView *_recipientContainerView;
    NSArray *_properties;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    NSNumber *_currentSearchTaskID;
    NSArray *_searchResults;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    NSMutableSet *_validPhoneNumbers;
    _Bool _wasFirstResponder;
    _Bool _showingPeoplePicker;
    UIPopoverController *_peoplePickerPopoverController;
    struct CGSize _recipientViewSize;
    double _lastHeight;
    id _delegate;
    double _bottomTableOffset;
}

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;
@property(nonatomic) double bottomTableOffset; // @synthesize bottomTableOffset=_bottomTableOffset;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_forceDismissPeoplePickerPopover;
- (void)_dismissPeoplePicker:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)shouldShowCardForPerson:(void *)arg1 peoplePicker:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (void)_setSearchResults:(id)arg1;
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void *)_addressBook;
- (id)_searchManager;
- (void)_searchForRecipientWithText:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (_Bool)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
@property(readonly, nonatomic) NSArray *recipients;
- (void)viewWillLayoutSubviews;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

