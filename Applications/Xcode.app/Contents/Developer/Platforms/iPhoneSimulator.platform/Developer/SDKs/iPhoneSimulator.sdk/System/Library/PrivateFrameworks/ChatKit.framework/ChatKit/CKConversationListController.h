//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKConversationSearcherDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CKConversationList, CKConversationSearcher, CKMessagesController, CKScheduledUpdater, NSIndexPath, NSString, UIBarButtonItem, UITableView, UIToolbar;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate>
{
    UITableView *_table;
    NSIndexPath *_previouslySelectedIndexPath;
    UIToolbar *_buttonBar;
    unsigned long long _willBeMarkedReadCount;
    unsigned int _isVisible:1;
    unsigned int _willRotate:1;
    CKMessagesController *_messagesController;
    CKConversationList *_conversationList;
    CKConversationSearcher *_searcher;
    _Bool _isInitialLoad;
    _Bool _isShowingSwipeDeleteConfirmation;
    UIBarButtonItem *_currentEditButtonItem;
    CKScheduledUpdater *_updater;
}

@property(retain, nonatomic) CKScheduledUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) _Bool isShowingSwipeDeleteConfirmation; // @synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation;
@property(retain, nonatomic) UIBarButtonItem *currentEditButtonItem; // @synthesize currentEditButtonItem=_currentEditButtonItem;
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
@property(nonatomic) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) CKConversationList *conversationList; // @synthesize conversationList=_conversationList;
@property(readonly, nonatomic) _Bool shouldShowPendingCell;
- (void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)selectDefaultConversationAnimated:(_Bool)arg1;
- (void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)_indexOfDefaultConversation;
- (unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)searcherWillBeginEditing:(id)arg1;
- (void)searcherDidEndSearch:(id)arg1;
- (void)searcherWillEndSearch:(id)arg1;
- (void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (id)searcherContentsController:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)markAsReadButtonTappedForIndexPath:(id)arg1;
- (void)markAsReadButtonTapped:(id)arg1;
- (void)deleteButtonTappedForIndexPath:(id)arg1;
- (void)batchDeleteButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)composeButtonClicked:(id)arg1;
- (void)_updateToolbarItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)inputAccessoryView;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)applicationWillSuspend;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)scrollToTop;
- (void)hideSearchUI;
- (void)updateConversationList;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (void)beginHoldingConversationListUpdatesForKey:(id)arg1;
- (void)significantTimeChange;
- (void)noteUnreadCountsChanged;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)updateConversationSelection;
- (void)updateCurrentEditButton;
- (void)editButtonTapped:(id)arg1;
- (void)updateNavigationItems;
- (void)updateTitle;
- (_Bool)_shouldKeepSelection;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_conversationMuteDidChangeNotification:(id)arg1;
- (void)_conversationDisplayNameChangedNotification:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)accessibilityLargeTextDidChange;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

