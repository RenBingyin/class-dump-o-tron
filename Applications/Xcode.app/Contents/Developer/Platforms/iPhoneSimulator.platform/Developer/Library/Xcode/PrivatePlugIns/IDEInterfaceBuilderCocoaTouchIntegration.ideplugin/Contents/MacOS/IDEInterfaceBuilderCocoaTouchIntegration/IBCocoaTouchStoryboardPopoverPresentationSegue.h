//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

#import "IBCocoaTouchStoryboardAbstractPopoverSegue.h"
#import "NSCoding.h"

@class IBUIBarButtonItem, IBUIView, NSOrderedSet, NSString;

@interface IBCocoaTouchStoryboardPopoverPresentationSegue : IBUIStoryboardAbstractTriggeredSegue <NSCoding, IBCocoaTouchStoryboardAbstractPopoverSegue>
{
    unsigned long long _permittedArrowDirections;
    NSOrderedSet *_passthroughViews;
    IBUIView *_anchorView;
    IBUIBarButtonItem *_anchorBarButtonItem;
}

+ (id)ibDefaultImageForInstance:(id)arg1;
+ (id)classIdentifier;
+ (double)displayOrderPriority;
+ (id)keyPathsForValuesAffectingIbInspectedPopoverAnchorObject;
@property(retain, nonatomic) IBUIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property(retain, nonatomic) IBUIView *anchorView; // @synthesize anchorView=_anchorView;
@property(copy, nonatomic) NSOrderedSet *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (void).cxx_destruct;
- (BOOL)isFlowTerminatingSegue;
- (id)effectiveConnectionForDisablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2;
- (id)ibInspectedAnchorObjectCandidateFilterPredicate;
- (id)ibInspectedPassthroughViewsCandidateFilterPredicate;
- (id)badgeImage;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)instantiateSegueTemplate;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)setIbInspectedAnchorObject:(id)arg1;
- (id)ibInspectedAnchorObject;
- (id)initWithSource:(id)arg1 andLabel:(id)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
