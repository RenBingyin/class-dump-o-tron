//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (IBFrameworkObjectIntegration)
- (id)ibDesignedClassName;
- (id)ibRepresentedObjectForLibrary;
- (id)ibRepresentedClassNameForLibrary;
- (id)ibEquivalentSourceForToOneOutlet:(id)arg1;
- (id)ibSmartConnectionComparisonString;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibIsInDesignMode;
- (id)ibContainerWidgetTypeForChildView:(id)arg1;
- (struct IBInsetTag)ibInsetToDesignableContentAreaForChildView:(id)arg1;
- (BOOL)ibCalculatesInsetToDesignableContentAreaForChildView:(id)arg1;
- (void)setIbLabelIdentifier:(id)arg1;
- (id)ibLabelIdentifier;
- (id)typeSummaryForLibraryDisplay;
- (void)customizeAfterDropFromLibraryIntoDocument:(id)arg1;
- (BOOL)childEditsWithSingleClick:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (BOOL)ibShouldHiddenChildViewBeVisible:(id)arg1;
- (BOOL)isChildViewSizable:(id)arg1;
- (BOOL)isChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (struct CGRect)ibInspectedChildView:(id)arg1 rectBySettingSize:(struct CGSize)arg2 fromKnob:(long long)arg3 ofRect:(struct CGRect)arg4;
- (struct CGRect)ibInspectedChildView:(id)arg1 rectBySettingPoint:(struct CGPoint)arg2 forKnob:(long long)arg3 ofRect:(struct CGRect)arg4;
- (struct CGPoint)ibInspectedChildView:(id)arg1 pointForKnob:(long long)arg2 onRect:(struct CGRect)arg3;
- (id)ibToManyRelationshipsKeyPathsNotInAncestor:(Class)arg1;
- (id)ibToOneRelationshipsKeyPathsNotInAncestor:(Class)arg1;
- (id)ibAttributeKeyPathsNotInAncestor:(Class)arg1;
- (id)ibToManyRelationshipsKeyPaths;
- (id)ibToOneRelationshipsKeyPaths;
- (id)ibAttributeKeyPaths;
- (id)ibLocalizableKeyPaths;
- (id)ibLocalizableToManyRelationshipKeyPaths;
- (id)ibLocalizableGeometryKeyPaths;
- (id)ibLocalizableStringsKeyPaths;
- (id)ibArrayBasedResourceKeyPaths;
- (id)ibLocalizableArrayBasedStringsKeyPaths;
- (id)ibAdditionalLocalizableKeyPaths;
- (id)ibDefaultChildren;
- (id)ibPasteboardTypes;
- (id)ibObjectAtLocation:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (struct CGRect)visibleWindowFrameForChild:(id)arg1 inWindowController:(id)arg2;
- (struct CGRect)ibRectForChild:(id)arg1 inWindowController:(id)arg2;
- (Class)ibEditorClass;
- (id)ibDefaultImage;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibDefaultLabel;
- (void)ibPopulateConnectionInspectorClasses:(id)arg1;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
@end

