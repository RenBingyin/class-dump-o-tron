//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "IBExternalReferencePlaceholder.h"
#import "NSCoding.h"

@class IBCocoaTouchTargetRuntime, NSString;

@interface IBProxyObject : NSObject <IBDocumentArchiving, NSCoding, IBExternalReferencePlaceholder>
{
    NSString *_proxiedObjectIdentifier;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (id)externalReferenceWithIdentifier:(id)arg1 targetRuntime:(id)arg2;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (void)ibPopulateAdditionalInspectors:(id)arg1 forCategory:(id)arg2;
+ (id)ibDefaultImageForInstance:(id)arg1;
+ (BOOL)ibShouldBeIncludedInLibraryForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(copy, nonatomic) NSString *proxiedObjectIdentifier; // @synthesize proxiedObjectIdentifier=_proxiedObjectIdentifier;
- (void).cxx_destruct;
@property(copy) NSString *externalReferenceIdentifier;
@property(readonly, copy) NSString *description;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibIsPlaceholder;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibRuntimeClassName;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)isFirstResponder;
- (BOOL)isFilesOwner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

