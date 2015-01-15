//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIDimmingViewDelegate.h"
#import "UIGestureRecognizerDelegatePrivate.h"

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate>
{
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInContainerView;
    struct CGRect _embeddedTargetRect;
    long long _popoverControllerStyle;
    _Bool _ignoresKeyboardNotifications;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    _Bool _isLayoutDisabled;
    _Bool _useSourceViewBoundsAsSourceRect;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    _Bool _didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    CDStruct_4a475a17 _popoverControllerFlags;
    _Bool _isDismissingBecauseDimmingViewTapped;
    _Bool _allowResizePastTargetRect;
    _Bool _dismissesOnRotation;
    _Bool _showsTargetRect;
    _Bool _showsOrientationMarker;
    _Bool _showsPresentationArea;
    _Bool _retainsSelfWhilePresented;
    _Bool __centersPopoverIfSourceViewNotSet;
    _Bool __shouldHideArrow;
    unsigned long long _permittedArrowDirections;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    unsigned long long _popoverArrowDirection;
    double __dimmingViewTopEdgeInset;
    struct UIEdgeInsets _popoverLayoutMargins;
    struct CGRect _sourceRect;
}

+ (void)_setAlwaysAllowPopoverPresentations:(_Bool)arg1;
+ (_Bool)_alwaysAllowPopoverPresentations;
+ (_Bool)_forceAttemptsToAvoidKeyboard;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (Class)_popoverViewClass;
+ (_Bool)_showTargetRectPref;
@property(nonatomic, setter=_setDimmingViewTopEdgeInset:) double _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
@property(nonatomic, getter=_shouldHideArrow, setter=_setShouldHideArrow:) _Bool _shouldHideArrow; // @synthesize _shouldHideArrow=__shouldHideArrow;
@property(nonatomic, getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:) _Bool _centersPopoverIfSourceViewNotSet; // @synthesize _centersPopoverIfSourceViewNotSet=__centersPopoverIfSourceViewNotSet;
@property(nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) _Bool retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) _Bool showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) _Bool showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) _Bool showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property(nonatomic) _Bool dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(nonatomic) _Bool allowResizePastTargetRect; // @synthesize allowResizePastTargetRect=_allowResizePastTargetRect;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setContentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (_Bool)_forcesPreferredAnimationControllers;
- (long long)adaptivePresentationStyle;
- (long long)_defaultPresentationStyleForCompactWidth;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (void)containerViewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)_sourceRect;
- (id)_sourceView;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (id)_popoverHostingWindow;
- (id)_presentationView;
- (struct UIEdgeInsets)_baseContentInsets;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (id)_dimmingView;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (_Bool)_embedsInView;
- (id)_managingSplitViewController;
- (void)_setManagingSplitViewController:(id)arg1;
- (_Bool)isPresentingOrDismissing;
- (_Bool)_isDismissing;
- (_Bool)_isPresenting;
- (void)_containedViewControllerModalStateChanged;
- (void)_stopWatchingForNotifications;
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) _Bool _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_startWatchingForScrollViewNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (_Bool)_attemptsToAvoidKeyboard;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(_Bool)arg2;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (void)_setGesturesEnabled:(_Bool)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_dismissPopoverAnimated:(_Bool)arg1 stateOnly:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_postludeForDismissal;
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(_Bool)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(_Bool)arg3;
- (long long)_popoverBackgroundStyle;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (_Bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (long long)_popoverControllerStyle;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (double)_dismissalAnimationDuration;
- (double)_presentationAnimationDuration;
- (struct CGSize)_currentPopoverContentSize;
- (id)_splitParentController;
- (void)_setSplitParentController:(id)arg1;
- (void)_setPopoverView:(id)arg1;
- (_Bool)_isShimmingPopoverControllerPresentation;
- (id)popoverView;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (void)_invalidateLayoutInfo;
- (void)_resetSlideTransitionCount;
- (void)_incrementSlideTransitionCount:(_Bool)arg1;
- (unsigned long long)_slideTransitionCount;
- (void)_setPresentationState:(int)arg1;
- (int)_presentationState;
- (Class)_defaultChromeViewClass;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (_Bool)_popoverBackgroundViewWantsDefaultContentAppearance;
@property(copy, nonatomic) NSArray *passthroughViews;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) unsigned long long arrowDirection;
- (_Bool)isPopoverVisible;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
- (void)setPopoverContentSize:(struct CGSize)arg1;
- (struct CGSize)popoverContentSize;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <UIPopoverPresentationControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

