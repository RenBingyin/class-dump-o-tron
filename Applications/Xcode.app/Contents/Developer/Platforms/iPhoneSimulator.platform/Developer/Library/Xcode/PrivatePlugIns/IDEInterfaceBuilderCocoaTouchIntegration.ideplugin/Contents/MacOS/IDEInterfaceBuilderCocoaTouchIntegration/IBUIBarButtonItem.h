//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIBarItem.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBUINavigationItem, IBUIToolbar, IBUIView, NSColor, NSNumber, NSString;

@interface IBUIBarButtonItem : IBUIBarItem <IBDocumentArchiving, NSCoding, NSCopying>
{
    double width;
    IBUIView *customView;
    NSNumber *systemItemIdentifier;
    int style;
    IBUIToolbar *toolbar;
    IBUINavigationItem *navigationItem;
    NSColor *tintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)flexibleSpaceImageWithSize:(struct CGSize)arg1 forRuntime:(id)arg2;
+ (id)fixedSpaceImageWithSize:(struct CGSize)arg1 forRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbInspectedFlexibleFixedSpaceOptionTitles;
+ (id)keyPathsForValuesAffectingIbInspectedFlexibleFixedSpaceOptionValues;
+ (id)ibDefaultImageForInstance:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *tintColor; // @synthesize tintColor;
- (void).cxx_destruct;
- (void)archiveSystemItemIdentifier:(id)arg1;
- (void)unarchiveSystemItemIdentifier:(id)arg1;
- (void)encodeSystemItemIdentifier:(id)arg1;
- (void)decodeSystemItemIdentifier:(id)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)isFlexibleSpace;
- (BOOL)isFixedSpace;
- (BOOL)isSystemItem;
@property(copy) NSNumber *systemItemIdentifier;
@property(retain) IBUIView *customView;
@property int style;
@property double width;
- (void)setToolbar:(id)arg1;
- (void)setNavigationItem:(id)arg1;
- (id)titleFont;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (struct CGRect)frame;
- (id)barView;
- (id)toolbar;
- (id)navigationBar;
- (void)removeFromBarView;
- (id)navigationItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)shouldAcceptImages;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)isItemSizable;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibSegueTriggers;
- (id)ibInspectedFlexibleFixedSpaceOptionTitles;
- (id)ibInspectedFlexibleFixedSpaceOptionValues;
- (id)ibDefaultSegueTrigger;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (void)setIbInspectedSystemItemIdentifier:(id)arg1;
- (id)ibInspectedSystemItemIdentifier;
- (void)setIbInspectedImage:(id)arg1;
- (void)setIbInspectedTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

