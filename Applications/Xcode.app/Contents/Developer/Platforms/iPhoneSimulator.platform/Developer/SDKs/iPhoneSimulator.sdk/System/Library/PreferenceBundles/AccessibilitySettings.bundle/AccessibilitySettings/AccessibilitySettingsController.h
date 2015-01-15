//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class UISlider;

__attribute__((visibility("hidden")))
@interface AccessibilitySettingsController : PSListController
{
    _Bool _didConfirmDisabling;
    long long _ignoreNextAXNotificationCount;
    UISlider *_leftRightSlider;
}

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)largeFontsStatus:(id)arg1;
- (id)accessibilityLargeFontStatus:(id)arg1;
- (id)AXInspectorEnabled:(id)arg1;
- (void)setAXInspectorEnabled:(id)arg1 specifier:(id)arg2;
- (void)_enableAXInspector;
- (id)tripleClickStatus:(id)arg1;
- (id)homeClickSpeed:(id)arg1;
- (id)scatEnabled:(id)arg1;
- (id)handEnabled:(id)arg1;
- (id)quickSpeakEnabled:(id)arg1;
- (id)voiceOverTouchEnabled:(id)arg1;
- (id)guidedAccessEnabled:(id)arg1;
- (id)descriptiveVideoEnabled:(id)arg1;
- (id)largerTextEnabled:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)zoomTouchEnabled:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_showTextLegibilityMenuToRestart;
- (void)_handleCancelForBoldText;
- (void)_handleRestartForBoldText;
- (void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2;
- (id)accessibilityPreferenceForSpecifier:(id)arg1;
- (void)_handleMonoAudioEnabled:(_Bool)arg1;
- (void)_handleInvertColorsEnabled:(_Bool)arg1;
- (void)disableOption:(id)arg1;
- (_Bool)confirmDisablingWithString:(id)arg1 forKey:(id)arg2;
- (void)_largeTextChange:(id)arg1;
- (void)_setEasyReach:(id)arg1 specifier:(id)arg2;
- (id)_easyReach:(id)arg1;
- (void)_easyReachChanged:(id)arg1;
- (id)specifierForKey:(id)arg1;
- (id)specifiers;
- (void)handleReloadSpecifiers;
- (void)_orientationChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

