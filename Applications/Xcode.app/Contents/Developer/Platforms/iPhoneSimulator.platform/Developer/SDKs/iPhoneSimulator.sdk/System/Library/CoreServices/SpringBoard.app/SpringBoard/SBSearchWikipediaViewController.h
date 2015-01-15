//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SBSearchResultDetailsViewController.h"

@class NSString, SPSearchResult, SPSearchResultSection, UIColor;

@interface SBSearchWikipediaViewController : UITableViewController <SBSearchResultDetailsViewController>
{
    id <SBSearchResultDetailsViewControllerDelegate> actionDelegate;
    UIColor *_contentBackgroundColor;
    SPSearchResult *_result;
    SPSearchResultSection *_section;
}

+ (id)viewControllerForResult:(id)arg1 inSection:(id)arg2;
@property(retain) SPSearchResultSection *section; // @synthesize section=_section;
@property(retain) SPSearchResult *result; // @synthesize result=_result;
@property(retain) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property id <SBSearchResultDetailsViewControllerDelegate> actionDelegate; // @synthesize actionDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadData;
@property(readonly) _Bool wantsInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

