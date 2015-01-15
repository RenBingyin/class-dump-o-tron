//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "_UISearchControllerPresenting.h"

@class NSString, UIPresentationController<_UISearchControllerPresenting>, UIView, _UISearchPresentationAssistant;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
    struct CGRect finalFrameForContainerView;
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (long long)adaptivePresentationStyle;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)shouldRemovePresentersView;
- (_Bool)_shouldSubscribeToKeyboardNotifications;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

