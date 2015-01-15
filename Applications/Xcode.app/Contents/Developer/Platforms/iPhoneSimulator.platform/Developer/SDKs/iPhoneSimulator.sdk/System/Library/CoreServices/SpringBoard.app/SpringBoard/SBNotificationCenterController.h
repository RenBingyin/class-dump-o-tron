//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBulletinWindowClient.h"
#import "SBCoordinatedPresenting.h"
#import "SBExtensionHandling.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBWidgetViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class FBUIApplicationResignActiveAssertion, NSSet, NSString, NSTimer, SBChevronView, SBLockScreenActionContext, SBNotificationCenterSettings, SBNotificationCenterViewController, SBWindow, UILongPressGestureRecognizer, UIView;

@interface SBNotificationCenterController : NSObject <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBExtensionHandling, SBReachabilityObserver, SBCoordinatedPresenting>
{
    SBNotificationCenterViewController *_viewController;
    UIView *_coveredContentSnapshot;
    SBChevronView *_borrowedGrabberView;
    CDUnknownBlockType _borrowedGrabberWillPresentBlock;
    CDUnknownBlockType _borrowedGrabberHideBlock;
    CDUnknownBlockType _borrowedGrabberCompletionBlock;
    UILongPressGestureRecognizer *_grabberPressGesture;
    id _keyboardNotificationObserverToken;
    SBLockScreenActionContext *_lockScreenActionContext;
    long long _transitionState;
    long long _presentedState;
    SBNotificationCenterSettings *_settings;
    _Bool _grabberEnabled;
    _Bool _didCoalesceWidgetsConnections;
    NSTimer *_widgetConnectionsTimer;
    FBUIApplicationResignActiveAssertion *_resignActiveAssertion;
}

+ (double)transitionAnimationDuration;
+ (id)newDynamicAnimationForShow:(_Bool)arg1 targetValue:(double)arg2 withInitialValue:(double)arg3 velocity:(double)arg4 extraPull:(_Bool)arg5;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
@property(nonatomic, getter=isGrabberEnabled) _Bool grabberEnabled; // @synthesize grabberEnabled=_grabberEnabled;
@property(readonly, nonatomic) SBNotificationCenterSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
@property(readonly, retain, nonatomic) SBNotificationCenterViewController *viewController; // @synthesize viewController=_viewController;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)runWidgetLaunchTestWithWidgetWithIdentifier:(id)arg1 prelude:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadViewForWidget:(id)arg1 prelude:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableAllWidgets:(CDUnknownBlockType)arg1;
- (void)finishedScrollTest;
- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(_Bool)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)widget:(id)arg1 requestsPresentationOfViewController:(id)arg2 presentationStyle:(long long)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
- (void)remoteViewControllerDidConnectForWidget:(id)arg1;
- (void)_didCoalesceWidgetsConnections:(id)arg1;
- (void)bulletinWindowDidRotateFromOrientation:(long long)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(long long)arg1 duration:(double)arg2;
- (void)bulletinWindowWillRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)invalidateLockScreenActionContext;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)widgetViewControllerHostDelegate:(id)arg1;
- (id)_lockScreenViewController;
- (void)_handleActionContextRequiringAuthentication:(id)arg1;
- (_Bool)_requiresAuthenticationForActionContext:(id)arg1;
- (void)_handleActionContextRequiringUIUnlock:(id)arg1;
- (_Bool)_requiresUIUnlockForActionContext:(id)arg1;
- (_Bool)_handleActionOrRequestWithDefaultAction:(CDUnknownBlockType)arg1 lockedAction:(CDUnknownBlockType)arg2;
- (void)biometricEventMonitorDidAuthenticate:(id)arg1;
- (void)_updateForChangeInMessagePrivacy;
- (void)handleGrabberPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)reloadAllWidgets;
@property(readonly, nonatomic, getter=isGrabberVisible) _Bool grabberVisible;
- (void)hideGrabberAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showGrabberAnimated:(_Bool)arg1;
- (_Bool)canShowHideGrabberView;
- (void)_setGrabberEnabled:(_Bool)arg1;
- (void)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withWillPresentBlock:(CDUnknownBlockType)arg2 hideBlock:(CDUnknownBlockType)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)dismissPresentedWidgetContentAnimated:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1 withStepper:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 fromCurrentState:(_Bool)arg4;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAnimated:(_Bool)arg1 setupPrelude:(CDUnknownBlockType)arg2 setupPostlude:(CDUnknownBlockType)arg3 animationPrelude:(CDUnknownBlockType)arg4 animationPostlude:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentAnimated:(_Bool)arg1;
- (void)_present:(_Bool)arg1 withStandardAnimation:(_Bool)arg2 stepper:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 fromCurrentState:(_Bool)arg5;
- (void)_present:(_Bool)arg1 stepper:(CDUnknownBlockType)arg2;
- (void)cancelTransition;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 additionalValueApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_endTransitionWithVelocity:(struct CGPoint)arg1 additionalValueApplier:(CDUnknownBlockType)arg2 animationPostlude:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginDismissalWithTouchLocation:(struct CGPoint)arg1;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1;
- (void)_beginPresentationWithTouchLocation:(struct CGPoint)arg1 setupPrelude:(CDUnknownBlockType)arg2 setupPostlude:(CDUnknownBlockType)arg3 animationPrelude:(CDUnknownBlockType)arg4;
- (void)prepareLayoutForPresentationFromBanner;
- (void)_cleanupAfterTransition:(_Bool)arg1;
- (void)_setupForDismissal;
- (void)_setupForPresentationWithTouchLocation:(struct CGPoint)arg1;
- (void)_setupForViewPresentation;
- (void)_setViewUserInteractionEnabled:(_Bool)arg1;
- (void)_removeCoveredContentSnapshot;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)arg1;
- (void)_invalidateCoveredContentSnapshot;
- (void)_updateCoveredContentSnapshot;
- (_Bool)_shouldSelectViewControllerAtTouchLocation;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) struct UIEdgeInsets todayContentEdgeInsets;
@property(readonly, nonatomic) struct CGSize todayContentMaxSize;
- (_Bool)doesSectionWithIdentifierUpdateMessagePrivacyViaSectionParameters:(id)arg1;
- (_Bool)handleMenuButtonTap;
@property(nonatomic) _Bool blursBackground;
@property(readonly, nonatomic, getter=isPresentingWidgetContent) _Bool presentingWidgetContent;
@property(readonly, nonatomic, getter=isNotificationsViewAvailableWhileLocked) _Bool notificationsViewAvailableWhileLocked;
@property(readonly, nonatomic, getter=isTodayViewAvailableWhileLocked) _Bool todayViewAvailableWhileLocked;
- (_Bool)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(CDUnknownBlockType)arg1 counterpartBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)arg1 isLockedDownByRestrictions:(_Bool *)arg2;
@property(readonly, nonatomic, getter=isAvailableWhileLocked) _Bool availableWhileLocked;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) SBWindow *window;
@property(readonly, nonatomic) long long layoutMode;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSSet *tapExcludedViews;

@end

