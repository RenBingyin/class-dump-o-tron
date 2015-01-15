//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionReusableView.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class IBUIView, NSString, NSValue;

@interface IBUICollectionViewCell : IBUICollectionReusableView <IBDocumentArchiving, NSCoding>
{
    IBUIView *contentView;
    NSValue *customSize;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIsInsideCollectionView;
+ (id)keyPathsForValuesAffectingIbInspectedCustomSize;
+ (id)keyPathsForValuesAffectingIbInspectedSizeMode;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultSize;
+ (void)ibDidInstantiateForObject:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (long long)ibInstantiationSizeBehavior;
@property(retain, nonatomic) IBUIView *contentView; // @synthesize contentView;
@property(copy, nonatomic) NSValue *customSize; // @synthesize customSize;
- (void).cxx_destruct;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(readonly) BOOL isInsideCollectionView;
- (void)collectionViewItemSizeDidChange:(id)arg1;
- (void)unarchiveCustomSize:(id)arg1;
- (void)archiveCustomSize:(id)arg1;
- (void)verifyContentView:(id)arg1;
- (void)installContentViewIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibShouldShowCustomSizeInSizeInspector;
- (int)ibBoundsIndicatorRectBorderSides;
- (id)ibDuplicateReuseIdentifierWarningKey;
- (id)ibMissingReuseIdentifierWarningKey;
- (BOOL)ibHasDuplicateReuseIdentifierWithComputationContext:(id)arg1;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibIsSizable;
- (BOOL)ibIsMovable;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)setIbArchivedDesignableContentView:(id)arg1;
- (id)ibArchivedDesignableContentView;
- (id)ibDesignableContentView;
- (id)ibPasteboardTypes;
- (Class)ibTrackerClass;
- (void)setIbInspectedCustomSize:(struct CGSize)arg1;
- (struct CGSize)ibInspectedCustomSize;
- (void)setIbInspectedSizeMode:(long long)arg1;
- (long long)ibInspectedSizeMode;
- (id)ibQualifyingInfoForDefaultLabel;
- (struct CGSize)ibInspectedDefaultSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
