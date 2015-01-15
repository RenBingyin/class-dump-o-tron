//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UIViewAccessibility_super.h>

@interface UIViewAccessibility : __UIViewAccessibility_super
{
}

+ (id)_accessibilityTitleForSystemTag:(long long)arg1;
+ (id)_accessibilitySortedElementsAndContainersDescendingFromViews:(id)arg1 grouped:(_Bool)arg2;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityIsUserInteractionEnabled;
- (id)_axResponderChain;
- (id)_axSubviews;
- (void)_axPrintSubviews:(long long)arg1 string:(id)arg2;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityAccessibleElementsInView:(id)arg1;
- (id)_accessibilityElementsAndOrderedContainersGrouped:(_Bool)arg1;
- (id)_accessibilityElementsAndOrderedContainersGrouped:(_Bool)arg1 topLevel:(id)arg2 includeKB:(_Bool)arg3;
- (void)_addAccessibilityElementsAndOrderedContainersGrouped:(_Bool)arg1 toCollection:(id)arg2;
- (_Bool)_accessibilityProvidesScannerGroupElements;
- (id)_accessibilityElementsInContainer:(_Bool)arg1 topLevel:(id)arg2 includeKB:(_Bool)arg3 includeOpaqueElementProviders:(_Bool)arg4;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilitySubviewsForGettingElementsIncludingContainers:(_Bool)arg1 includingOpaqueElementProviders:(_Bool)arg2;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilitySubviews;
- (struct CGSize)_mainScreenSizeForCurrentOrientation;
- (id)_accessibilityElementsInContainer:(_Bool)arg1 topLevel:(id)arg2 includeKB:(_Bool)arg3;
- (id)_accessibilityElementsInContainer:(_Bool)arg1;
- (id)_accessibleSubviews;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (void)setAccessibilityContainer:(id)arg1;
- (id)accessibilityContainer;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityElementsInDirection:(_Bool)arg1 withCount:(unsigned int)arg2 originalElement:(id)arg3;
- (id)_accessibilityChildrenInDirection:(_Bool)arg1;
- (id)_accessibilityContainerInDirection:(_Bool)arg1 originalElement:(id)arg2;
- (id)_accessibilityChildVendingParent;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (_Bool)accessibilityElementsHidden;
- (id)_accessibilityRetrieveLabelFromTableViewCell;
- (id)_accessibilityRetrieveIvarText;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityCheckForAllowedModalView:(struct CGPoint)arg1 event:(id)arg2;
- (id)__accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityHitTestSubviews;
- (_Bool)_accessibilityModalViewBlocksView:(id)arg1;
- (_Bool)_accessibilityObscuredScreenAllowsView:(id)arg1;
- (_Bool)_accessibilityAvoidsMockViewContainers;
- (id)_superAccessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)_accessibilityVerticalSizeClass;
- (long long)_accessibilityHorizontalSizeClass;
- (id)_accessibilityAutomaticIdentifier;
- (_Bool)_accessibilityIsIgnored;
- (_Bool)_accessibilityBlocksInteraction;
- (_Bool)_accessibilityViewIsActive;
- (_Bool)_accessibilityViewIsVisible;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityShouldHitTestLayers;
- (_Bool)accessibilityViewIsModal;
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityIsWindow;
- (struct CGRect)_accessibilityFrameForView:(id)arg1;
- (void)_accessibilityFinalize;
- (void)_accessibilityPostNotification:(id)arg1;
- (_Bool)accessibilityElementIsFocused;
- (id)_accessibilityViewController;
- (id)_accessibilityObscuredScreenAllowedViews;

@end

