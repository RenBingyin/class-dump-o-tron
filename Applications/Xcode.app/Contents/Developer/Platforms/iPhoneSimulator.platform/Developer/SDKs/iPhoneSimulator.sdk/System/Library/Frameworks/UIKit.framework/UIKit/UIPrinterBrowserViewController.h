//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "PKPrinterBrowserDelegate.h"

@class NSArray, NSMutableArray, NSString, PKPrinter, PKPrinterBrowser, UIPrinterSearchingView;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>
{
    id <UIPrinterBrowserOwner> _ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    _Bool _loaded;
    UIPrinterSearchingView *_searchingView;
    _Bool _clearCurrentPrinter;
    _Bool _shouldFilterPrinters;
    double _maximumPopoverHeight;
}

@property double maximumPopoverHeight; // @synthesize maximumPopoverHeight=_maximumPopoverHeight;
- (void)showCancelButton;
- (void)removePrinter:(id)arg1 moreGoing:(_Bool)arg2;
- (void)addPrinter:(id)arg1 moreComing:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)printerAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground;
- (void)updateSearching;
- (void)stopPrinterBrowser;
- (void)startPrinterBrowser;
- (void)loadView;
- (void)adjustPopoverSize;
- (void)selectPrinter:(id)arg1;
- (void)dealloc;
- (id)initWithOwnerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

