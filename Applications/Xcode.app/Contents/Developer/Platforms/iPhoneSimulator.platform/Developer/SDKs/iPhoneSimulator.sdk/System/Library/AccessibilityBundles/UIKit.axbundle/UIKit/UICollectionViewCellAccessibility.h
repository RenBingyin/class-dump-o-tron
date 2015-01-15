//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityIsOutsideParentBounds;
- (_Bool)accessibilityScrollToVisible;
- (id)accessibilityIndexPath;
- (id)axData;
- (void)accessibilityClearInternalData;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (id)_accessibilityChildren;
- (void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;

@end

