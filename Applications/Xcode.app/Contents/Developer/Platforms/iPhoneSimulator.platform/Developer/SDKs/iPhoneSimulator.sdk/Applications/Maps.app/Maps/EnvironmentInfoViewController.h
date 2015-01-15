//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "_EnvironmentURLTableViewCellDelegate.h"

@class EnvironmentInfo, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface EnvironmentInfoViewController : UITableViewController <_EnvironmentURLTableViewCellDelegate>
{
    EnvironmentInfo *_environment;
    NSArray *_urlStrings;
    _Bool _editable;
    _Bool _editing;
    NSMapTable *_overrideURLs;
}

- (void).cxx_destruct;
- (void)urlCell:(id)arg1 didChangeURLString:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_urlStringForIndexPath:(id)arg1 isFromManifest:(_Bool *)arg2 isFromOverrides:(_Bool *)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_endEditing:(id)arg1;
- (void)_beginEditing:(id)arg1;
- (void)_updateNavigationItem;
- (id)initWithStyle:(long long)arg1 environment:(id)arg2 editable:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

