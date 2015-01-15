//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"

@class ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, NSArray, NSString, UIFont, UIImage, UIView;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate>
{
    id _helper;
    id _reserved;
    _Bool _allowsContactBlocking;
    _Bool _allowsOnlyPhoneActions;
    _Bool _allowsOnlyFaceTimeActions;
    id <ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
}

+ (id)defaultLabelsForProperty:(int)arg1 person:(void *)arg2 addressBook:(void *)arg3;
@property(readonly, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(readonly, nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate; // @synthesize sharingDelegate=_sharingDelegate;
@property(nonatomic) _Bool allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) _Bool allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
@property(nonatomic) _Bool allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) id <ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate; // @synthesize unknownPersonViewDelegate=_unknownPersonViewDelegate;
- (_Bool)isShowingMultipleVCards;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_showCardViewerForIndex:(long long)arg1;
- (void)_unselectTable;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)accessChanged;
- (id)_viewControllerForCardAtIndex:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_addToExistingContacts;
- (void)dismissAnimated:(_Bool)arg1;
- (id)_findMatchingCardsForRecord:(void *)arg1;
- (void)_showUnmergedContactsAlert;
- (void)_addUnmergedRecords;
- (void)_createNewContacts;
- (_Bool)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)applicationDidResume;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateNavigationButtons;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)supportedInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)viewDidLoad;
- (double)ab_heightToFitForViewInPopoverView;
@property(nonatomic) _Bool badgeEmailPropertiesForMailVIP;
@property(copy, nonatomic) CDUnknownBlockType willWeiboLocationCallback;
@property(copy, nonatomic) CDUnknownBlockType willTweetLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody;
@property(nonatomic) _Bool shareMessageBodyIsHTML;
- (int)abViewControllerType;
@property(nonatomic) _Bool savesNewContactOnSuspend;
@property(retain, nonatomic) UIView *customFooterView;
@property(retain, nonatomic) UIView *customHeaderView;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentNewContactViewControllerForAddToContacts;
@property(nonatomic) _Bool isLocation;
@property(readonly, nonatomic) _Bool canShareContact;
- (void)presentShareContactSheet;
- (void)presentAddToContactsSheet;
- (void)reloadImageData;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(copy, nonatomic) NSString *attribution;
@property(copy, nonatomic) NSArray *displayedProperties;
- (void)setPrimaryProperty:(int)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
@property(nonatomic) _Bool shouldAlignPersonHeaderViewToImage;
@property(retain, nonatomic) UIView *personHeaderView;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(_Bool)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(_Bool)arg4;
- (void)setCardContentProvider:(id)arg1;
@property(nonatomic) _Bool allowsConferencing;
- (_Bool)allowsSendingTextMessage;
- (void)setAllowsSendingTextMessage:(_Bool)arg1;
@property(nonatomic) _Bool allowsAddingToAddressBook;
@property(nonatomic) _Bool allowsSharing;
@property(nonatomic) _Bool allowsActions;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(copy, nonatomic) NSString *messageDetail;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *alternateName;
@property(retain, nonatomic) ABUIPerson *displayedUIPerson;
@property(nonatomic) void *displayedPerson;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) void *addressBook;
- (void)tellHelperToShow:(_Bool)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)tellHelperToShow:(_Bool)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper;
- (id)_forwarder;
- (id)_vCardTable;
- (id)_unmergedRecords;
- (id)_unmergedAlertSheet;
- (id)_alertSheet;
- (id)_vCardProperties;
- (id)_vCards;
- (id)initWithVCardData:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
- (id)newActionButton;
- (void)setActionShouldPickHighlightedItem:(_Bool)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(long long)arg6 ordering:(long long)arg7;
- (_Bool)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(long long)arg5 ordering:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

