//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "__SBSearchViewControllerAccessibility_super.h"

@interface SBSearchViewControllerAccessibility : __SBSearchViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)accessibilityPerformEscape;
- (void)_fadeOutAndHideKeyboardAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setShowingKeyboard:(_Bool)arg1;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)_accessibilityProcessSearchResult;
- (void)dealloc;
- (void)loadView;
- (void)_accessibilityLoadAccessibilityInformation;

@end

