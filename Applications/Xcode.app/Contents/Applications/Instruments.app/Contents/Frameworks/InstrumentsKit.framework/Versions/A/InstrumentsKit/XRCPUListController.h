//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSString, XRCPUStrategyController;

@interface XRCPUListController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    XRCPUStrategyController *_delegate;
    NSArray *_cpuList;
}

- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (double)trackView:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (id)trackView:(id)arg1 cpuAtRow:(unsigned long long)arg2;
- (long long)numberOfRowsInTrackView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)selectedCore;
- (id)coreList;
- (void)updateList;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

