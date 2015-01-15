//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SearchCompletionsTableViewControllerDelegate.h"
#import "StarkSearchBarViewDelegate.h"
#import "UIKeyboardImplGeometryDelegate.h"

@class NSString, SearchCompletionsTableViewController, StarkChromeViewController, StarkSearchBarView, StarkSearchKeyboardContainerView, UIKeyboard;

__attribute__((visibility("hidden")))
@interface StarkSearchKeyboardInputViewController : UIViewController <SearchCompletionsTableViewControllerDelegate, StarkSearchBarViewDelegate, UIKeyboardImplGeometryDelegate>
{
    StarkSearchKeyboardContainerView *_containerView;
    StarkSearchBarView *_searchBar;
    SearchCompletionsTableViewController *_completionsTable;
    UIKeyboard *_keyboard;
    StarkChromeViewController *_chrome;
    _Bool _minimized;
}

@property(nonatomic, getter=isMinimized) _Bool minimized; // @synthesize minimized=_minimized;
- (void).cxx_destruct;
- (void)modeWillPop;
- (void)starkSearchBarChoseCancel:(id)arg1;
- (void)starkSearchBarChosePerformSearch:(id)arg1;
- (_Bool)isActive;
- (_Bool)canDismiss;
- (_Bool)shouldSaveMinimizationState;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3;
- (void)starkSearchBar:(id)arg1 willEditSearchTextToString:(id)arg2;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)activateKeyboardIfNecessary;
- (void)updateKeyboardEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

