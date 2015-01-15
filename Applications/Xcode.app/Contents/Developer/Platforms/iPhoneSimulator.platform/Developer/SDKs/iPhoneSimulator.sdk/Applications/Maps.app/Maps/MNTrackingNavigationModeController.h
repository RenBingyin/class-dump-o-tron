//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNNavigationModeController.h"

#import "MKMapViewDelegate.h"
#import "SteppingSignsCarouselDelegate.h"

@class MNGuidanceSignView, MNLocation, MNPedestrianTagView, MNRoute, NSArray, NSString, SteppingSignsCarousel, TopBarTitleView, UIView;

__attribute__((visibility("hidden")))
@interface MNTrackingNavigationModeController : MNNavigationModeController <SteppingSignsCarouselDelegate, MKMapViewDelegate>
{
    MNLocation *_matchedLocation;
    SteppingSignsCarousel *_signsCarousel;
    MNRoute *_route;
    NSArray *_steps;
    _Bool _isNavigatorOnRoute;
    _Bool _haveArrived;
    struct {
        unsigned long long _field1;
        _Bool _field2;
    } *_stepInfos;
    NSArray *_signs;
    unsigned long long _stepIndex;
    unsigned long long _guidanceStepIndex;
    long long _guidanceMode;
    unsigned long long _stepIndexAfterPreRouteStep;
    unsigned long long _preRouteSignIndex;
    MNGuidanceSignView *_preRouteSign;
    NSString *_proceedToRouteDisplayString;
    unsigned long long _maneuverStepIndex;
    double _distanceUntilManeuver;
    unsigned long long _signIndexWithModifiedDistance;
    _Bool _isStepTrackingEnabled;
    _Bool _isManualStepTrackingEnabled;
    int _desiredViewStyle;
    int _nextDesiredViewStyle;
    double _startTimeNextDesiredCameraViewStyle;
    double _lastCameraViewStyleChangeTime;
    _Bool _appearing;
    _Bool _useMetric;
    _Bool _useYardsForShorterDistances;
    double _cameraZoomScale;
    double _userZoom;
    _Bool _is3D;
    _Bool _enteredOverview;
    struct UIEdgeInsets _minimumEdgeInsets;
    MNPedestrianTagView *_sideTagView;
    _Bool _isCarouselReadyForDisplay;
    _Bool _hasCarouselAnimatedIn;
    _Bool _sizeClassIsChanging;
    _Bool _isAnimatingStatusBar;
    _Bool _disableMasking;
    double _stagedHeightForTagAnimation;
    TopBarTitleView *_topBarTitleView;
    UIView *_compactLine;
}

@property(nonatomic) _Bool disableMasking; // @synthesize disableMasking=_disableMasking;
@property(retain, nonatomic) UIView *compactLine; // @synthesize compactLine=_compactLine;
@property(retain, nonatomic) TopBarTitleView *topBarTitleView; // @synthesize topBarTitleView=_topBarTitleView;
@property(nonatomic) double stagedHeightForTagAnimation; // @synthesize stagedHeightForTagAnimation=_stagedHeightForTagAnimation;
@property(nonatomic) _Bool isAnimatingStatusBar; // @synthesize isAnimatingStatusBar=_isAnimatingStatusBar;
@property(retain, nonatomic) NSString *proceedToRouteDisplayString; // @synthesize proceedToRouteDisplayString=_proceedToRouteDisplayString;
- (void).cxx_destruct;
- (void)setETATotalRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)navigationSession:(id)arg1 failedWithErrorCode:(long long)arg2;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)_updateTagWithRemainingTime:(double)arg1 andDistance:(double)arg2;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned long long)arg11 isSynthetic:(_Bool)arg12;
- (void)navigationSessionHasArrived:(id)arg1;
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)signsCarousel:(id)arg1 didUpdateSignWidthWithNewFrame:(struct CGRect)arg2;
- (void)signsCarousel:(id)arg1 didScroll:(long long)arg2 withNewFrame:(struct CGRect)arg3;
- (void)signsCarousel:(id)arg1 didChangeFrame:(struct CGRect)arg2;
- (void)signsCarousel:(id)arg1 didChangeSelectedSignIndexWithCause:(long long)arg2;
- (void)_moveMapRegionToCurrentStepAnimated:(_Bool)arg1;
- (void)_updateCameraViewStyle;
- (void)_refreshCameraForMatchedLocation;
- (void)_updateCameraFocus;
- (void)_moveCameraToCurrentStepAnimated:(_Bool)arg1;
- (_Bool)_isCameraControllerActive;
- (void)_refreshCameraPosition;
- (void)_updateSignViewsForNewStepAnimated:(_Bool)arg1 scrollSignCarousel:(_Bool)arg2;
- (void)_setGuidanceStepIndex:(unsigned long long)arg1;
- (void)_setStepIndex:(unsigned long long)arg1 animated:(_Bool)arg2 scrollsSignCarousel:(_Bool)arg3;
- (void)_forceStepTrackingToCurrentStepAnimated:(_Bool)arg1 resetGuidanceStep:(_Bool)arg2;
- (void)_updateStepTrackingWithNavigatorStep;
- (void)_updatePreRouteStepTracking;
- (void)_setupPreRouteGuidanceAtStepIndex:(unsigned long long)arg1 redisplayCarousel:(_Bool)arg2;
- (void)_restoreStepDistanceForModifiedSign;
- (void)_updateDistanceForNavigatorStep;
- (void)_updateSignsCarouselFrame;
- (void)_layoutSignsOrderingNeedsUpdate:(_Bool)arg1;
- (struct CGRect)_signsCarouselFrame;
@property(retain, nonatomic) SteppingSignsCarousel *signsCarousel; // @synthesize signsCarousel=_signsCarousel;
- (CDStruct_912cb5d2)_maps_sizeClassPair;
- (void)_updateSignsForSizeClass:(CDStruct_912cb5d2)arg1;
- (double)_signWidthForSizeClassPair:(CDStruct_912cb5d2)arg1;
- (void)layoutForUnobscuredBoundsChange;
- (void)animateBarsToCurrentStateWithAnimation:(id)arg1;
- (void)_updateTagViewHiddenStatus:(_Bool)arg1;
- (void)_didChangeCurrentLocale;
- (void)_hideSignsCarouselAnimated:(_Bool)arg1;
- (void)_slideSignCarouselOnScreenFromRight;
- (void)_hideTagView;
- (void)_showTagView;
- (void)_updateTagViewFrame:(struct CGRect)arg1;
- (void)_setupTagViewForAnimation;
- (void)sizeClassDidChangeToPair:(CDStruct_912cb5d2)arg1;
- (void)animateSizeClassChange;
- (void)modeDidAppear:(_Bool)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)willChangeToMapDisplayStyle:(unsigned long long)arg1 forChangeToLightLevel:(long long)arg2 animation:(id)arg3;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (void)_updateControlBarItemsAnimated:(_Bool)arg1;
- (id)_controlBarItems;
- (void)_removeTopBarLayerMask;
- (void)_addTopBarLayerMask;
- (void)modeWillAppear:(_Bool)arg1;
- (id)layerMaskAnimationWithFrom:(double)arg1 to:(double)arg2;
- (void)_didSetNavigationBarsHidden:(_Bool)arg1;
- (void)_setMinimumEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_minimumEdgeInsets;
- (void)navigationOverviewBarOverviewTapped:(id)arg1;
- (_Bool)_canHideTopBarShadow;
- (void)_threeDButtonTapped:(id)arg1;
- (_Bool)_is3D;
- (void)_audioNotificationForNewTransportType:(int)arg1 navigationSession:(id)arg2;
- (void)_updateWithMatchedLocation:(id)arg1;
- (void)_prepareViewForLockScreen:(id)arg1;
- (void)_setRoute:(id)arg1;
- (void)_stopNavigationCameraMotion;
- (void)_startNavigationCameraMotionAnimated:(_Bool)arg1;
- (void)prepareToRunNavigationAnimated:(_Bool)arg1 startCamera:(_Bool)arg2;
- (unsigned long long)_arrowIndexForGuidanceStep;
- (unsigned long long)_stepIndexForSignIndex:(unsigned long long)arg1;
- (unsigned long long)_signIndexForStepIndex:(unsigned long long)arg1;
- (_Bool)_doesStepIndexHaveSign:(unsigned long long)arg1;
- (unsigned long long)_nextStepIndexWithSign:(unsigned long long)arg1;
- (void)_setupWithRoute:(id)arg1;
- (void)_cleanupRouteSigns;
- (void)resetNavigationMode;
- (_Bool)shouldSlideTopBar;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

