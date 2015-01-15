//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CustomGestureController.h"

@class NSMutableArray, SCATController;

__attribute__((visibility("hidden")))
@interface HandController : CustomGestureController
{
    SCATController *_scannerController;
    NSMutableArray *_hardwareSpecs;
}

- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setTouchSpeed:(id)arg1;
- (id)touchSpeed;
- (void)setSwaggleOpensMenu:(id)arg1 specifier:(id)arg2;
- (id)swaggleOpensMenu;
- (void)setHandEnabled:(id)arg1 specifier:(id)arg2;
- (id)handEnabled:(id)arg1;
- (void)setAlwaysShowMenuEnabled:(id)arg1 specifier:(id)arg2;
- (id)alwaysShowMenuEnabled:(id)arg1;
- (void)_orientationChange:(id)arg1;
- (void)_handleSettingsChange;
- (void)_handleAssistiveTouchToggled:(id)arg1;
- (void)_handleAssistiveTouchHardwareToggled:(id)arg1;
- (void)_updateAssistiveTouchControlItems:(id)arg1 reload:(_Bool)arg2;
- (unsigned long long)maximumNumberOfCustomGestures;
- (id)customGesturesExplanatoryText;
- (id)customGesturesTitle;
- (SEL)customGesturesSetter;
- (SEL)customGesturesGetter;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (id)init;
- (void)dealloc;

@end

