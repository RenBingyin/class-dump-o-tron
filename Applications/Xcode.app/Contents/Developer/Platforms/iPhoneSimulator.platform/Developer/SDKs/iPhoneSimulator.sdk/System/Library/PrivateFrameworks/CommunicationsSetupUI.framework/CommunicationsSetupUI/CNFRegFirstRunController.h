//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

#import "CNFRegFirstRunExperience.h"

@class IMAccount, NSString, NSTimer, UIBarButtonItem;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience>
{
    Class _completionControllerClass;
    _Bool _showingActivityIndicator;
    _Bool _previousHidesBackButton;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    id <CNFRegFirstRunDelegate> _delegate;
    UIBarButtonItem *_customRightButton;
    UIBarButtonItem *_customLeftButton;
    NSTimer *_timeoutTimer;
    _Bool _timedOut;
    _Bool _cancelled;
    IMAccount *_account;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @synthesize customRightButton=_customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton; // @synthesize customLeftButton=_customLeftButton;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool previousHidesBackButton; // @synthesize previousHidesBackButton=_previousHidesBackButton;
@property(retain, nonatomic) UIBarButtonItem *previousRightButton; // @synthesize previousRightButton=_previousRightButton;
@property(retain, nonatomic) UIBarButtonItem *previousLeftButton; // @synthesize previousLeftButton=_previousLeftButton;
@property(nonatomic) Class completionControllerClass; // @synthesize completionControllerClass=_completionControllerClass;
- (void)_executeDismissBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long currentAppearanceStyle;
- (void)_setupEventHandlers;
- (_Bool)dismissWithState:(unsigned long long)arg1;
- (_Bool)pushCompletionControllerIfPossible;
- (void)_refreshCurrentState;
- (void)_updateControllerState;
- (void)_updateUI;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)setCellsChecked:(_Bool)arg1;
- (void)_stopValidationModeAnimated:(_Bool)arg1;
- (void)_startValidationModeAnimated:(_Bool)arg1;
- (void)_startValidationModeAnimated:(_Bool)arg1 allowCancel:(_Bool)arg2;
- (void)_stopActivityIndicatorAnimated:(_Bool)arg1;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2 allowCancel:(_Bool)arg3;
- (id)_validationModeCancelButton;
- (void)_handleTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)_stopTimeout;
- (void)_startTimeoutWithDuration:(double)arg1;
- (_Bool)_hidesBackButton;
- (void)_leftButtonTapped;
- (id)_leftButtonItem;
- (void)_cancelValidationMode;
- (void)_handleValidationModeCancelled;
- (void)_rightButtonTapped;
- (id)_rightButtonItem;
- (void)_refreshNavBarAnimated:(_Bool)arg1;
- (id)validationString;
- (id)titleString;
- (id)customTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_returnKeyPressed;
- (void)_handleReturnKeyTapped:(id)arg1;
- (void)_stopListeningForReturnKey;
- (void)_startListeningForReturnKey;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

