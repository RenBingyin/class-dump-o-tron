//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SCATController : PSListController
{
    NSArray *_cachedAutoScanningOptionsSpecifiers;
    NSArray *_cachedManualScanningOptionsSpecifiers;
    NSArray *_cachedSpeechOptionsSpecifiers;
    NSMutableArray *_cachedPointPickerOptionsSpecifiers;
    NSString *_selectedScanningModeIdentifier;
    NSString *_selectedPointPickerIdentifier;
}

@property(retain, nonatomic) NSString *selectedPointPickerIdentifier; // @synthesize selectedPointPickerIdentifier=_selectedPointPickerIdentifier;
@property(retain, nonatomic) NSString *selectedScanningModeIdentifier; // @synthesize selectedScanningModeIdentifier=_selectedScanningModeIdentifier;
@property(retain, nonatomic) NSMutableArray *cachedPointPickerOptionsSpecifiers; // @synthesize cachedPointPickerOptionsSpecifiers=_cachedPointPickerOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedSpeechOptionsSpecifiers; // @synthesize cachedSpeechOptionsSpecifiers=_cachedSpeechOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedManualScanningOptionsSpecifiers; // @synthesize cachedManualScanningOptionsSpecifiers=_cachedManualScanningOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedAutoScanningOptionsSpecifiers; // @synthesize cachedAutoScanningOptionsSpecifiers=_cachedAutoScanningOptionsSpecifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)speechEnabled:(id)arg1;
- (void)setSoundEnabled:(id)arg1 specifier:(id)arg2;
- (id)soundEnabled:(id)arg1;
- (id)includedMenuItemsSummary:(id)arg1;
- (id)scanCyclesSummary:(id)arg1;
- (void)setCompactMenuEnabled:(id)arg1 specifier:(id)arg2;
- (id)compactMenuEnabled:(id)arg1;
- (void)setItemGroupingEnabled:(id)arg1 specifier:(id)arg2;
- (id)itemGroupingEnabled:(id)arg1;
- (void)setScanByElements:(id)arg1 specifier:(id)arg2;
- (id)scanByElements:(id)arg1;
- (void)setAxisPickerWantsRescan:(id)arg1 specifier:(id)arg2;
- (id)axisPickerWantsRescan:(id)arg1;
- (void)setAutoScanningEnabled:(id)arg1 specifier:(id)arg2;
- (id)autoScanningEnabled:(id)arg1;
- (id)commonTasksSummary:(id)arg1;
- (id)customGesturesSummary:(id)arg1;
- (id)scanTimeoutSummary:(id)arg1;
- (id)axisSweepSummary:(id)arg1;
- (id)delayAfterInputSummary:(id)arg1;
- (id)actionRepeatSummary:(id)arg1;
- (id)headMovementSummary:(id)arg1;
- (id)inputCoalescingSummary:(id)arg1;
- (id)autoscanDelaySummary:(id)arg1;
- (id)holdDurationSummary:(id)arg1;
- (id)selectActionDelaySummary:(id)arg1;
- (id)_localizedSummaryForDelay:(double)arg1;
- (id)switchesSummary:(id)arg1;
- (void)setSwitchScanningEnabled:(id)arg1 specifier:(id)arg2;
- (id)switchScanningEnabled:(id)arg1;
- (id)cursorColorDescription:(id)arg1;
- (void)setCursorHighVisibility:(id)arg1 specifier:(id)arg2;
- (id)cursorHighVisibility:(id)arg1;
- (void)_setPointPickerEnabledForIdentifier:(id)arg1;
- (_Bool)_pointPickerEnabledForIdentifier:(id)arg1;
- (_Bool)_isPointPickerIdentifier:(id)arg1;
- (id)_pointPickerRescanSpecifiers;
- (void)_setScanningModeEnabledForIdentifier:(id)arg1;
- (_Bool)_scanningModeEnabledForIdentifier:(id)arg1;
- (_Bool)_isUsingHeadSwitch;
- (_Bool)_isScanningModeIdentifier:(id)arg1;
- (id)_manualScanningOptionsSpecifiers;
- (id)_autoScanningOptionsSpecifiers;
- (void)_updateEnabledStateForAutoscanning:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)_handleAssistiveTouchToggled:(id)arg1;
- (void)dealloc;
- (id)init;

@end

