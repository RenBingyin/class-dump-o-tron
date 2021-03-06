//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

#import "NSMenuDelegate.h"

@class NSString, PFTTraceDocument, XRThread, XRThreadListController;

@interface XRThreadListView : NSTableView <NSMenuDelegate>
{
    PFTTraceDocument *_unretainedTraceDocument;
    XRThreadListController *_threadListController;
    XRThread *_flyOverThreadNotRetained;
    int _flyOverState;
    struct CGPoint _flyOverPoint;
}

- (void)viewDidMoveToSuperview;
- (struct CGPoint)_flyOverPoint;
- (id)_flyOverThread;
- (void)_setFlyOverState:(int)arg1 forThread:(id)arg2;
- (int)_flyOverStateForThread:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_coreLayoutNotification:(id)arg1;
- (void)reloadData;
- (void)updateThreadList;
- (id)model;
- (void)setModel:(id)arg1;
- (id)label;
- (void)dealloc;
- (id)init;
- (void)sortThreadsByProcessName:(id)arg1;
- (void)sortThreadsByPID:(id)arg1;
- (void)sortThreadsByDefault:(id)arg1;
- (void)_setSortBy:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

