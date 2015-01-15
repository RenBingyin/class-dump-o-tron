//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAwayViewPluginController.h"

#import "MNRemoteStateObserver.h"

@class CPDistributedMessagingCenter, MNLockScreenDimmingBehavior, MNLockScreenHeader, MNLockScreenThermalWarningController, MNRemoteView, NSArray, NSString, NSTimer, UIActivityIndicatorView, UISnapshotView, UIView, UIWindow;

@interface MNLockScreenPluginController : SBAwayViewPluginController <MNRemoteStateObserver>
{
    CPDistributedMessagingCenter *_requestsCenter;
    MNLockScreenHeader *_header;
    UIView *_footer;
    UIView *_guidanceView;
    _Bool _displaying;
    unsigned long long _alert;
    UIWindow *_temporaryHostingWindow;
    UIView *_shieldView;
    UIActivityIndicatorView *_spinner;
    unsigned long long _lastSeenState;
    _Bool _didUnhideOnce;
    MNLockScreenThermalWarningController *_thermalWarning;
    NSTimer *_idleDelayTimer;
    NSArray *_lastInstructions;
    _Bool _lastIsDimmedState;
    MNRemoteView *_remoteView;
    UISnapshotView *_unlockShieldView;
    MNLockScreenDimmingBehavior *_dimmingBehavior;
}

+ (id)temporaryHostingWindow;
+ (void)invalidateRemoteViewWithIdentifier:(id)arg1;
+ (void)setValidRemoteView:(id)arg1;
+ (id)validRemoteView;
@property(retain, nonatomic, setter=_setDimmingBehavior:) MNLockScreenDimmingBehavior *_dimmingBehavior; // @synthesize _dimmingBehavior;
@property(retain, nonatomic, setter=_setUnlockShieldView:) UISnapshotView *_unlockShieldView; // @synthesize _unlockShieldView;
@property(retain, nonatomic, setter=_setRemoteView:) MNRemoteView *_remoteView; // @synthesize _remoteView;
@property(nonatomic) _Bool lastIsDimmedState; // @synthesize lastIsDimmedState=_lastIsDimmedState;
@property(retain, nonatomic) NSTimer *idleDelayTimer; // @synthesize idleDelayTimer=_idleDelayTimer;
- (void).cxx_destruct;
- (void)remoteViewDidBecomeAvailableWithGuidanceUpdate:(id)arg1;
- (void)remoteViewDidInvalidate;
- (void)disable;
- (void)unconditionallyReenableIdleTimer;
- (void)setIdleTimerDisabled:(_Bool)arg1 onlyIfViewVisible:(_Bool)arg2;
- (_Bool)updateCachedInstructions:(id)arg1;
- (id)_applyFontToString:(id)arg1;
- (void)guidanceDidChange:(id)arg1;
- (id)footer;
- (id)header;
- (void)_integrateChrome;
- (void)_initializeChrome;
- (_Bool)showHeaderView;
- (_Bool)isContentViewWhiteUnderSlideToUnlockText;
- (_Bool)legibilitySettingsOverridesVibrancy;
- (id)legibilitySettings;
- (_Bool)shouldAutoHideNotifications;
- (long long)pluginPriority;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)allowsPhotoSlideshow;
- (_Bool)showDateView;
- (_Bool)retainsPriorityWhileInactive;
- (void)_serverDidTerminate;
- (void)_endDisplaying;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)notifyingViewWillLeaveWindow:(id)arg1;
- (void)_takeSnapshotIfNeeded;
- (void)_displayWillActivate:(id)arg1;
- (_Bool)handleLockButtonPressed;
- (_Bool)isScreenBlanked;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)remoteViewDidBecomeAvailable:(id)arg1 contextIdentifier:(unsigned int)arg2;
- (void)notifyingViewDidAddToWindow:(id)arg1;
- (void)_beginDisplayingIfNeeded;
- (void)notifyingView:(id)arg1 willAddToWindow:(id)arg2;
- (void)insertRemoteViewInHierarchy;
- (void)notifyingViewNeedsSubviewLayout:(id)arg1;
- (_Bool)allowsLockScreenMediaControls;
- (unsigned long long)notificationBehavior;
- (unsigned long long)overlayStyle;
- (unsigned long long)presentationStyle;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)bundleIDForUnlock;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (_Bool)viewWantsFullscreenLayout;
- (_Bool)viewCanBeDisplayed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)idleTimerDisabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

