//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StarkTableViewController.h"

__attribute__((visibility("hidden")))
@interface StarkPhysicalNavigationMenuViewController : StarkTableViewController
{
    CDUnknownBlockType _completion;
    long long _currentCameraDisplayMode;
}

@property(nonatomic) long long currentCameraDisplayMode; // @synthesize currentCameraDisplayMode=_currentCameraDisplayMode;
- (void).cxx_destruct;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_subtitleForCameraDisplayMode;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_invokeCompletionWithResult:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

