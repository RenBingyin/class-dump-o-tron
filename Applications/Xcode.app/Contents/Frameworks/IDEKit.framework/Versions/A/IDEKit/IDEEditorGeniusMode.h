//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorModeViewController.h>

#import "IDEEditorContextDelegate.h"
#import "IDEEditorMultipleContextDelegate.h"
#import "NSSplitViewDelegate.h"

@class DVTObservingToken, IDEEditorMultipleContext, NSString;

@interface IDEEditorGeniusMode : IDEEditorModeViewController <IDEEditorContextDelegate, IDEEditorMultipleContextDelegate, NSSplitViewDelegate>
{
    int _layout;
    DVTObservingToken *_geniusResultsObservingToken;
    IDEEditorMultipleContext *_alternateEditorMultipleContext;
    id _pendingEditorLayoutConfiguration;
    id _pendingPersistentRepresentation;
    NSString *_pendingStateSavingIdentifier;
    BOOL _isRestoringState;
    BOOL _isRestoringPendingState;
    BOOL _didInitialViewInstall;
}

+ (id)keyPathsForValuesAffectingSelectedAlternateEditorContext;
+ (id)stateSavingIdentifiers;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain) IDEEditorMultipleContext *alternateEditorMultipleContext; // @synthesize alternateEditorMultipleContext=_alternateEditorMultipleContext;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (id)_stealPrimaryEditorContext;
- (id)selectedAlternateEditorContext;
- (BOOL)canCreateSplitForNavigationHUD;
- (void)resetEditor;
- (BOOL)canResetEditor;
- (BOOL)_canResetEditor:(BOOL)arg1 keeping:(id)arg2;
- (void)_closeAllSplitsKeeping:(id)arg1;
- (void)removeAssistantEditor;
- (BOOL)canRemoveAssistantEditor;
- (id)addNewAssistantEditor;
- (BOOL)canAddNewAssistantEditor;
- (void)addAssistantEditor;
- (BOOL)canAddAssistantEditor;
- (void)setAssistantEditorsLayout:(int)arg1;
- (BOOL)canChangeAssistantEditorsLayout;
- (id)editorContexts;
- (BOOL)openEditorOpenSpecifier:(id)arg1 editorContext:(id)arg2;
- (BOOL)openEditorHistoryItem:(id)arg1 editorContext:(id)arg2;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2 excludingEditorContext:(id)arg3;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)removeSplitForEditorContext:(id)arg1;
- (void)addSplitForEditorContext:(id)arg1;
- (id)editorContext:(id)arg1 navigableItemForEditingFromArchivedRepresentation:(id)arg2 error:(id *)arg3;
- (id)_navigableItemForEditorContext:(id)arg1 fromGeniusArchivedRepresentation:(id)arg2 error:(id *)arg3;
- (id)_navigableItemForEditorContext:(id)arg1 inGeniusCategoryNavigableItem:(id)arg2 withDocumentURLOrNil:(id)arg3;
- (id)_manualCategoryNavigableItemForEditorContext:(id)arg1 withDocumentURLOrNil:(id)arg2;
- (id)_navigableItemForEditorContext:(id)arg1 fromStructureArchivedRepresentation:(id)arg2 error:(id *)arg3;
- (id)_manualCategoryNavigableItemForEditorContext:(id)arg1 withStructureNavigableItem:(id)arg2;
- (id)_navigableItemForEditorContext:(id)arg1 bySelectingRawDocumentURLInManualDomain:(id)arg2;
- (id)_resetManualCategoryNavigableItemForEditorContext:(id)arg1 toDomainWithIdentifier:(id)arg2;
- (id)_manualCategoryNavigableItemForEditorContext:(id)arg1;
- (id)_selectedCategoryNavigableItemForEditorContext:(id)arg1;
- (id)_navigableItemForGeniusCategory:(id)arg1 editorContext:(id)arg2;
- (BOOL)provideWorkspaceStructureForEmptyEditorContext:(id)arg1;
- (void)_editorContext:(id)arg1 openingEmptyEditorInsteadOfNavigableItem:(id)arg2;
- (BOOL)editorContext:(id)arg1 emptyEditorRootNavigableItem:(id *)arg2 selectedNavigableItem:(id *)arg3;
- (void)editorContext:(id)arg1 didUpdateMenu:(id)arg2;
- (BOOL)canCloseDocumentForEditorContext:(id)arg1;
- (void)editorContext:(id)arg1 didSetNavigableItem:(id)arg2;
- (void)editorMultipleContext:(id)arg1 didSplitEditorContext:(id)arg2 creatingEditorContext:(id)arg3;
- (void)_setDefaultGeniusCategoryForEditorContext:(id)arg1;
- (void)_updateRootNavigableItemForEditorContext:(id)arg1;
- (void)_primitiveSetGeniusCategory:(id)arg1 forEditorContext:(id)arg2;
- (id)_geniusCategoryForEditorContext:(id)arg1;
- (void)_setGeniusRootNavigableItem:(id)arg1 forEditorContext:(id)arg2;
- (id)_geniusRootNavigableItemForEditorContext:(id)arg1;
- (id)_geniusResultsContextForEditorContext:(id)arg1;
- (id)_editorGeniusResults;
@property BOOL splitsVertical;
- (void)_setSplitsVertical:(BOOL)arg1;
@property double splitPosition;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_cancelPendingStateRestoration;
- (void)_setupPendingStateRestorationWithLayoutConfiguration:(id)arg1 persistentRepresentation:(id)arg2 stateSavingIdentifier:(id)arg3;
- (void)loadView;
- (id)_initWithPrimaryEditorContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

