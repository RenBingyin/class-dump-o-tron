//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAutolayoutEngine.h"

@class IBCocoaTouchToolArbitrationUnit, IBCocoaTouchToolObjectPackage, NSDictionary, UIView;

__attribute__((visibility("hidden")))
@interface IBCocoaTouchToolAutolayoutEngine : IBAutolayoutEngine
{
    UIView *_rootView;
}

@property(readonly) UIView *rootView; // @synthesize rootView=_rootView;
- (void).cxx_destruct;
- (id)constraintAbstractionForRepresentedConstraint:(id)arg1 referencesDocumentViews:(_Bool)arg2;
- (id)candidateRedundantRepresentedConstraints;
- (id)viewForApplyingSystemRequiredConstraints;
- (_Bool)tryToAddConstraint:(id)arg1 toRepresentedView:(id)arg2 roundingAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (void)invalidateConstraintsForRepresentedViews:(id)arg1;
- (void)updateConstraintsIfNeeded;
- (void)layoutIfNeeded;
- (Class)spacerItemClass;
- (id)internalEngine;
@property(readonly) NSDictionary *objectPackageRequest;
@property(readonly) IBCocoaTouchToolObjectPackage *objectPackage;
@property(readonly) IBCocoaTouchToolArbitrationUnit *arbitrationUnit;
- (id)prepareViewHierarchyAndReturnAddedRepresentedConstraintsForRepresentedViews;

@end

