//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "__NavigationBarAccessibility_super.h"

@interface NavigationBarAccessibility : __NavigationBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_compressedBarTapped;
- (void)_updateShowsLockIcon;
- (void)_updateText;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_axUpdateURLValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;
- (void)_updateReaderButtonVisibilityAnimated:(_Bool)arg1 showAvailabilityText:(_Bool)arg2 adjustURLLabels:(_Bool)arg3;
- (void)_readerButtonTapped:(id)arg1;
- (long long)_accessibilitySortPriority;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityOnlyComparesByXAxis;

@end

