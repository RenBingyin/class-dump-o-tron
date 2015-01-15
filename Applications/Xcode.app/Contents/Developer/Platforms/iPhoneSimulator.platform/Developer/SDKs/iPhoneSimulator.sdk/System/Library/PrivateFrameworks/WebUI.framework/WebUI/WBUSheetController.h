//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIAlertController, UITableView, WebUIAlert;

@interface WBUSheetController : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    UIAlertController *_alertController;
    WebUIAlert *_alert;
    NSMutableArray *_alertInvocationQueue;
    UITableView *_tableView;
    id _delegate;
    _Bool _isDismissed;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)hideSheet;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)showSheetForAlert:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

