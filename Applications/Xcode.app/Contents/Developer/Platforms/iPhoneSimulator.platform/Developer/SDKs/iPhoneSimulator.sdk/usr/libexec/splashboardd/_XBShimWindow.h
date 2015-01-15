//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITraitCollection;

@interface _XBShimWindow : UIView
{
    UITraitCollection *_customTraits;
    long long _interfaceOrientation;
}

+ (_Bool)_transformLayerRotationsAreEnabled;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) UITraitCollection *customTraits; // @synthesize customTraits=_customTraits;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(_Bool)arg1;
- (_Bool)isInterfaceAutorotationDisabled;
- (void)beginDisablingInterfaceAutorotation;
- (_Bool)isRotating;
- (_Bool)_isHostedInAnotherProcess;
- (void)_setSystemGestureRecognitionIsPossible:(_Bool)arg1 andTouchesAreCancelled:(_Bool)arg2;
- (_Bool)_systemGestureRecognitionIsPossible;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)_geometryDidChangeForView:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (void)_updateAppTintView;
- (id)_currentTintView;
- (id)_normalInheritedTintColor;
- (id)_registeredScrollToTopViews;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)screen;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)traitCollection;

@end

