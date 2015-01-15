//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@interface NSTableView (IBTableViewIntegration)
+ (id)designTimeController;
- (void)setInspectedLineBreakMode:(long long)arg1;
- (long long)inspectedLineBreakMode;
- (void)setInspectedContinuous:(long long)arg1;
- (long long)inspectedContinuous;
- (void)setInspectedBaseWritingDirection:(long long)arg1;
- (long long)inspectedBaseWritingDirection;
- (void)setInspectedUserInterfaceLayoutDirection:(long long)arg1;
- (long long)inspectedUserInterfaceLayoutDirection;
- (void)setInspectedTruncatesLastVisibleLine:(long long)arg1;
- (long long)inspectedTruncatesLastVisibleLine;
- (void)setInspectedRefusesFirstResponder:(long long)arg1;
- (long long)inspectedRefusesFirstResponder;
- (long long)inspectedEnabled;
- (void)setState:(long long)arg1 forKeyPath:(id)arg2;
- (long long)stateForKeyPath:(id)arg1 mixedValue:(long long)arg2;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)_designableReadPersistentTableColumns;
- (void)_designableWritePersistentTableColumns;
- (void)ibAwakeInDesignableDocument:(id)arg1;
- (id)initWithDesignableCoder:(id)arg1;
- (void)setGControlSize:(unsigned long long)arg1;
- (unsigned long long)gControlSize;
- (BOOL)hasSingleCell;
- (id)ibDefaultLabel;
- (void)ibDidRemoveFromDesignableDocument:(id)arg1;
- (void)ibDidAddToDesignableDocument:(id)arg1;
- (BOOL)isUserMovable;
- (BOOL)isUserSizable;
- (id)ibPasteboardTypes;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (id)ibDefaultTableColumnForInsertion;
- (Class)ibDefaultTableColumnClassForInsertion;
- (void)setColumns:(id)arg1;
- (id)columns;
- (struct CGSize)ibPreferredDesignSize;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (double)closestHeightForHeight:(double)arg1;
- (void)ibDidSuggestLayout:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inWindowController:(id)arg2;
- (id)ibDefaultChildren;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (Class)ibEditorClass;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
- (id)ibDesignableFontKeyPath;
- (void)setTableColumnFontsForFontPanel:(id)arg1;
- (id)tableColumnFontsForFontPanel;
@end

