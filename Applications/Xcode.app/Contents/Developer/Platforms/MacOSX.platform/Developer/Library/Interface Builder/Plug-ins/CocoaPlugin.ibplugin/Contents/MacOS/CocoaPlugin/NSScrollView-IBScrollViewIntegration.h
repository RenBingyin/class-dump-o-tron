//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@interface NSScrollView (IBScrollViewIntegration)
- (id)ibRepresentedObjectForLibrary;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (void)ibSuggestLayout;
- (struct CGPoint)ibPreferredDesignOriginForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredDesignSize;
- (void)ibDidSuggestLayout:(id)arg1;
- (id)ibWillSuggestLayout:(struct CGRect)arg1;
- (id)designableTypeAliases;
- (BOOL)isChildViewSizable:(id)arg1;
- (BOOL)isChildViewMovable:(id)arg1;
- (BOOL)ibShouldHiddenChildViewBeVisible:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (id)ibDesignableContentView;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibBeginArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)ibAwakeInDesignableDocument:(id)arg1;
- (id)ibDefaultChildren;
- (Class)ibEditorClass;
- (id)widgetType;
- (id)ibDefaultLabel;
- (id)typeSummaryForLibraryDisplay;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibDesignableColorKeyPath;
- (void)setBackgroundColorIncludingDocumentView:(id)arg1;
- (id)backgroundColorIncludingDocumentView;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end

