//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEDocViewer/IDEDocNavigator.h>

#import "DSMDocSetLoaderListener.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTObservingToken, IDEDocExploreOutlineView, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEDocExploreNavigator : IDEDocNavigator <NSOutlineViewDataSource, NSOutlineViewDelegate, DSMDocSetLoaderListener>
{
    IDEDocExploreOutlineView *_docSetsOutlineView;
    NSSet *_expandedItems;
    NSArray *_selectedObjects;
    BOOL _restoringState;
    DVTObservingToken *_docSetLoadingToken;
    NSArray *_docSetRecords;
    NSMapTable *_documentTypeCollections;
    NSMapTable *_nodeSubgroups;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (id)docNavigatorBackgroundColor;
@property(retain) IDEDocExploreOutlineView *docSetsOutlineView; // @synthesize docSetsOutlineView=_docSetsOutlineView;
- (void).cxx_destruct;
- (id)stateSavingExpandedItems;
- (id)itemsForNameArrays:(id)arg1;
- (id)docSetNodeNamed:(id)arg1 inArray:(id)arg2;
- (id)nameArraysForItems:(id)arg1;
- (id)stateSavingSelectedObjects;
- (void)setStateSavingSelectedObjects:(id)arg1;
- (void)setStateSavingExpandedItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineView:(id)arg1 concludeDragOperation:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)_loadEditorWithSelectedNode;
- (void)docSetWillBeUnloadedOrUpdated:(id)arg1;
- (void)docSetDidUnload:(id)arg1;
- (void)docSetDidLoad:(id)arg1;
- (void)selectDocSetNode:(id)arg1;
- (void)updateContent;
- (id)contextMenuSelectedNavItems;
- (void)primitiveInvalidate;
- (id)idedocnavigator_identifier;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly, copy) NSMutableArray *mutableSelectedObjects; // @dynamic mutableSelectedObjects;
@property(copy) NSArray *selectedObjects; // @dynamic selectedObjects;
@property(readonly) Class superclass;

@end

