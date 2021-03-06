//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

@class UIKeyboard, UIKeyboardInputMode, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    _Bool _shouldRegenerateSizingConstraints;
    UIViewController *_inputController;
    UIView *_inputControllerSnapshot;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)_requiresProxyInterface;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;
@property(retain, nonatomic) UIView *inputControllerSnapshot; // @synthesize inputControllerSnapshot=_inputControllerSnapshot;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
- (void)viewDidLayoutSubviews;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(_Bool)arg1;
- (void)willBeginTranslation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_keyboard;
- (id)childCompatibilityController;
- (void)setInputMode:(id)arg1;
- (void)tearDownInputController;
- (void)removeSnapshotView;
- (void)snapshotCurrentDisplay;
- (void)rebuildChildConstraints;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didSuspend:(id)arg1;
- (id)_compatView;
- (id)_compatibilityController;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (void)dealloc;
- (void)loadView;
- (id)_initAsDeferredController;

@end

