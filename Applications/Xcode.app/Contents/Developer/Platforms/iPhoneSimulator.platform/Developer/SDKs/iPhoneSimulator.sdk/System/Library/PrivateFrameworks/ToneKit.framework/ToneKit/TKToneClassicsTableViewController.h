//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "TKTonePickerTableViewLayoutMarginsObserver.h"

@class NSString, TKTonePickerItem;

@interface TKToneClassicsTableViewController : UITableViewController <TKTonePickerTableViewLayoutMarginsObserver>
{
    id <TKTonePickerTableViewControllerHelper> _tonePickerTableViewControllerHelper;
    TKTonePickerItem *_classicTonesHeaderItem;
}

@property(retain, nonatomic, setter=_setClassicTonesHeaderItem:) TKTonePickerItem *_classicTonesHeaderItem; // @synthesize _classicTonesHeaderItem;
@property(nonatomic) id <TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper; // @synthesize tonePickerTableViewControllerHelper=_tonePickerTableViewControllerHelper;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateCheckedStatus:(_Bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didReloadTones;
- (void)dealloc;
- (id)initWithClassicTonesHeaderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

