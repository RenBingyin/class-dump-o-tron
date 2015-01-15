//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEEditor, IDEEditorHistoryItem, IDENavigableItemCoordinator;

@protocol IDEEditorContextProtocol <NSObject>
@property(readonly, nonatomic) IDEEditor *editor;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator;
- (BOOL)_openEmptyEditor;
- (void)_giveEditorFocusIfNeeded;
- (BOOL)_openEditorHistoryItem:(IDEEditorHistoryItem *)arg1 updateHistory:(BOOL)arg2;
- (IDEEditorHistoryItem *)currentHistoryItem;
@end

