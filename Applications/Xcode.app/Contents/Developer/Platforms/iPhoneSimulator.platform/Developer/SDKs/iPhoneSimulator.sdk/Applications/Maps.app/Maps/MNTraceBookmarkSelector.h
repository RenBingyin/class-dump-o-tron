//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MNTraceDelegate.h"

@class MNTracePlayer, NSArray, NSCache, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface MNTraceBookmarkSelector : UITableViewController <MNTraceDelegate>
{
    MNTracePlayer *_tracePlayer;
    UITableViewCell *_noBookmarksCell;
    NSCache *_bookmarkImageCache;
    id <MNTraceBookmarkSelectorDelegate> _delegate;
    NSArray *_bookmarks;
}

@property(nonatomic) __weak id <MNTraceBookmarkSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MNTracePlayer *tracePlayer; // @synthesize tracePlayer=_tracePlayer;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_done;
- (id)_noBookmarksCell;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)traceDidRecordBookmark:(id)arg1;
- (void)reloadBookmarks;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

