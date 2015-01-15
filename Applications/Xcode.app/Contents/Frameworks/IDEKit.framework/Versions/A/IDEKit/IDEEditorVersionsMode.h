//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorModeViewController.h>

@class DVTDiffDescriptor, DVTObservingToken, IDEComparisonEditor, IDEComparisonEditorSubmode;

@interface IDEEditorVersionsMode : IDEEditorModeViewController
{
    DVTObservingToken *_editorToken;
    DVTObservingToken *_selectedMergeDescriptorObserver;
    DVTObservingToken *_conflictCountObserver;
    DVTObservingToken *_toggledDiffDescriptorCountObserver;
    CDUnknownBlockType _editorCustomizationBlock;
    DVTDiffDescriptor *_selectedMergeDescriptor;
    unsigned long long _conflictCount;
    int _allDiffDescriptorsToggledState;
}

+ (id)stateSavingIdentifiers;
+ (BOOL)automaticallyNotifiesObserversOfAllDiffDescriptorsToggledState;
+ (id)keyPathsForValuesAffectingComparisonEditorSubmode;
+ (id)keyPathsForValuesAffectingComparisonEditor;
@property(nonatomic) int allDiffDescriptorsToggledState; // @synthesize allDiffDescriptorsToggledState=_allDiffDescriptorsToggledState;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property(retain) DVTDiffDescriptor *selectedMergeDescriptor; // @synthesize selectedMergeDescriptor=_selectedMergeDescriptor;
@property(copy) CDUnknownBlockType editorCustomizationBlock; // @synthesize editorCustomizationBlock=_editorCustomizationBlock;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (id)_stealPrimaryEditorContext;
- (id)editorContexts;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
@property BOOL showMiniIssueNavigator;
@property(readonly) IDEComparisonEditorSubmode *comparisonEditorSubmode;
@property(readonly) IDEComparisonEditor *comparisonEditor;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)untoggleCurrentSelectedDiffDescriptor;
- (void)toggleCurrentSelectedDiffDescriptor;
@property(readonly) BOOL currentSelectedDiffDescriptorToggled;
- (void)viewDidInstall;
- (void)loadView;
- (id)_initWithPrimaryEditorContext:(id)arg1;

@end

