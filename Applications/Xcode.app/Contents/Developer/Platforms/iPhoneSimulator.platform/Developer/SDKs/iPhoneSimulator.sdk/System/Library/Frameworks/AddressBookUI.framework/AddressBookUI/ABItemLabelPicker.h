//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ABSimpleTextInputViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ABPropertyGroup, ABStyleProvider, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate>
{
    id _delegate;
    id _editedItem;
    NSString *_savedLabel;
    NSString *_selectedLabel;
    NSIndexPath *_selectedPath;
    UITableView *_tableView;
    NSMutableArray *_additionalLabels;
    struct __CFArray *_sortedCustomItemLabelInfos;
    struct __CFArray *_sortedDefaultItemLabelInfos;
    void *_sortedCustomItemLabelInfosMemory;
    void *_sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup *_propertyGroup;
    int _property;
    long long _itemIndex;
    void *_addressBook;
    _Bool _addLabelDisabled;
    _Bool _didCreateNewLabel;
    ABStyleProvider *_styleProvider;
}

+ (id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void *)arg3;
+ (id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void *)arg3 outBestLabelIndex:(long long *)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(long long)arg2 addressBook:(void *)arg3 outBestLabelIndex:(long long *)arg4 forceIncludeLabels:(id)arg5;
+ (id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(long long)arg4 addressBook:(void *)arg5 outBestLabelIndex:(long long *)arg6 forceIncludeLabels:(id)arg7;
+ (struct __CFDictionary *)copyLabelUsageForProperty:(int)arg1 person:(id)arg2;
+ (struct __CFDictionary *)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void *)arg2;
+ (id)builtInLabelsForProperty:(int)arg1;
@property(nonatomic) _Bool didCreateNewLabel; // @synthesize didCreateNewLabel=_didCreateNewLabel;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic, getter=isAddLabelDisabled) _Bool addLabelDisabled; // @synthesize addLabelDisabled=_addLabelDisabled;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (void)displayScrollerIndicators;
- (_Bool)shouldPopItem;
- (void)createNewCustomLabel;
- (void)toggleEditing;
- (void)setIsEditing:(_Bool)arg1 animate:(_Bool)arg2;
- (_Bool)isEditing;
- (_Bool)canEdit;
- (void)_didEndPickingAndConfirmed:(_Bool)arg1 animate:(_Bool)arg2;
- (void)buildUI;
- (void)setDelegate:(id)arg1;
- (void)reloadData;
- (void)reloadItemLabels;
- (_Bool)allowsCustomLabels;
- (id)selectedLabel;
- (void)setSelectedLabel:(id)arg1;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedLabel:(id)arg1;
- (void)_setSelectedPath:(id)arg1;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (id)savedLabel;
- (void)setSavedLabel:(id)arg1;
- (void)setAdditionalLabels:(id)arg1;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)setPropertyGroup:(id)arg1 itemIndex:(long long)arg2;
- (void)resetLabelCaches;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

