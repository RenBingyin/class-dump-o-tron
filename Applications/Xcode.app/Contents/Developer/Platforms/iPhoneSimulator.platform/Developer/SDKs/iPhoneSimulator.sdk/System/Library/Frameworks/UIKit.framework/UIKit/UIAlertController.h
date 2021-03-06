//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertControllerContaining.h"
#import "UIAlertControllerVisualStyleProviding.h"
#import "_UIAlertControllerTextFieldViewControllerContaining.h"

@class NSArray, NSAttributedString, NSMutableArray, NSObject<UIAlertControllerVisualStyleProviding>, NSSet, NSString, UIAlertAction, UIGestureRecognizer, UIPopoverController, UIView, _UIAlertControllerTextFieldViewController;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIAlertControllerVisualStyleProviding>
{
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSMutableArray *_actions;
    NSSet *_linkedAlertControllers;
    UIAlertAction *_cancelAction;
    long long _resolvedStyle;
    long long _preferredStyle;
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
    UIViewController *_contentViewController;
    _UIAlertControllerTextFieldViewController *_textFieldViewController;
    _Bool _textFieldsHidden;
    UIGestureRecognizer *_backButtonDismissGestureRecognizer;
    id _ownedTransitioningDelegate;
    _Bool _shouldEnsureContentControllerViewIsVisibleOnAppearance;
    _Bool __shouldAllowNilParameters;
    _Bool __shouldFlipFrameForShimDismissal;
    UIAlertAction *__defaultAlertAction;
    UIPopoverController *__compatibilityPopoverController;
}

+ (_Bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (void)_setShouldUsePresentationController:(_Bool)arg1;
+ (_Bool)_shouldUsePresentationController;
@property _Bool _shouldFlipFrameForShimDismissal; // @synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal;
@property(nonatomic, setter=_setCompatibilityPopoverController:) UIPopoverController *_compatibilityPopoverController; // @synthesize _compatibilityPopoverController=__compatibilityPopoverController;
@property(setter=_setShouldAllowNilParameters:) _Bool _shouldAllowNilParameters; // @synthesize _shouldAllowNilParameters=__shouldAllowNilParameters;
@property(setter=_setDefaultAlertAction:) UIAlertAction *_defaultAlertAction; // @synthesize _defaultAlertAction=__defaultAlertAction;
@property(readonly) long long _resolvedStyle; // @synthesize _resolvedStyle;
@property(nonatomic, setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:) _Bool _shouldEnsureContentControllerViewIsVisibleOnAppearance; // @synthesize _shouldEnsureContentControllerViewIsVisibleOnAppearance;
@property(readonly) UIAlertAction *_cancelAction; // @synthesize _cancelAction;
@property(readonly) NSMutableArray *_actions; // @synthesize _actions;
- (void)viewDidDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_removeAllTextFields;
- (id)_textFieldViewController;
- (_Bool)_hasContentToDisplay;
- (id)_containedAlertController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
@property(retain, nonatomic) UIViewController *contentViewController;
- (double)_contentVerticalInsets;
@property(readonly) UIView *_dimmingView;
@property(readonly) UIView *_foregroundView;
- (id)cancelAction;
- (void)setCancelAction:(id)arg1;
@property(copy, nonatomic, getter=_attributedMessage, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property(copy, nonatomic, getter=_attributedTitle, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (_Bool)_shouldFitWidthToContentViewControllerWidth;
- (_Bool)_shouldSizeToFillSuperview;
- (id)_alertControllerContainer;
- (_Bool)_viewControllerIsPresentedInPopover:(id)arg1;
- (_Bool)_isPresentedAsPopover;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_flipFrameForShimDismissalIfNecessary;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (long long)_modalPresentationStyleForResolvedStyle;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)_updateModalPresentationStyle;
- (_Bool)_requiresCustomPresentationController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)linkedAlertControllers;
- (void)unlinkAlertController:(id)arg1;
- (void)linkAlertController:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(_Bool)arg3;
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2;
- (void)_dismissFromPopoverDimmingView;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (_Bool)_canDismissWithGestureRecognizer;
- (id)_dismissGestureRecognizer;
- (void)_clearActionHandlers;
- (void)_fireOffActionOnTargetIfValidForAction:(id)arg1;
- (_Bool)_shouldDismissAction:(id)arg1;
- (void)_actionViewTapped:(id)arg1;
- (void)_actionViewHighlightChanged:(id)arg1;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
@property(retain, nonatomic, getter=_styleProvider, setter=_setStyleProvider:) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider;
@property(readonly) _Bool _shouldProvideDimmingView;
@property(nonatomic) long long preferredStyle;
- (void)_uninstallBackGestureRecognizer;
- (void)_installBackGestureRecognizer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resolvedStyleChanged;
- (id)_currentDescriptor;
- (void)_updateProvidedStyle;
- (void)_reevaluateResolvedStyle;
- (id)_requiredNotificationsForRemoteServices;
- (void)viewDidLayoutSubviews;
- (void)_recomputePreferredContentSize;
- (id)_alertControllerView;
- (void)viewDidLoad;
@property(readonly) _Bool _shouldAlignToKeyboard;
- (void)_updateShouldAlignToKeyboard;
- (void)loadView;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)setTextFieldsCanBecomeFirstResponder:(_Bool)arg1;
@property(setter=_setTextFieldsHidden:) _Bool _textFieldsHidden;
- (void)_returnKeyPressedInLastTextField;
@property(readonly, nonatomic) NSArray *textFields;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)_actionChanged:(id)arg1;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 shouldDismissHandler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

