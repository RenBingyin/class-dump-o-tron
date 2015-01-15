//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DevicePINControllerDelegate.h"
#import "MCInstallationConsentDelegate.h"
#import "MCInstallationWarningDelegate.h"
#import "MCInteractionDelegate.h"
#import "MCProfileQuestionsControllerDelegate.h"
#import "PSStateRestoration.h"
#import "UIAlertViewDelegate.h"

@class MCInstallProfileQuestionViewController, MCProfile, MCProfileViewController, NSArray, NSData, NSString, UIAlertController;

__attribute__((visibility("hidden")))
@interface MCInstallProfileViewController : UIViewController <MCInstallationConsentDelegate, MCInstallationWarningDelegate, PSStateRestoration, UIAlertViewDelegate, DevicePINControllerDelegate, MCInteractionDelegate, MCProfileQuestionsControllerDelegate>
{
    _Bool _processingPayload;
    _Bool _installHasFailed;
    _Bool _userCancelledInstall;
    _Bool _waitingForMoreInput;
    _Bool _isInteractionDelegate;
    _Bool _secondaryProfileReceived;
    MCInstallProfileQuestionViewController *_questionsController;
    CDUnknownBlockType _didAppearBlock;
    _Bool _initialQuestionsHaveBeenAsked;
    NSString *_pin;
    _Bool _delayUserInput;
    int _installState;
    MCProfile *_profile;
    NSData *_profileData;
    MCProfileViewController *_profileViewController;
    NSArray *_warningsToPresent;
    UIAlertController *_activeAlertController;
    NSData *_originalProfileData;
    MCProfile *_originalProfile;
    id _profileListChangedObserver;
}

+ (void)_showRebootAlert;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(nonatomic) int installState; // @synthesize installState=_installState;
@property(retain, nonatomic) id profileListChangedObserver; // @synthesize profileListChangedObserver=_profileListChangedObserver;
@property(nonatomic) _Bool delayUserInput; // @synthesize delayUserInput=_delayUserInput;
@property(retain, nonatomic) MCProfile *originalProfile; // @synthesize originalProfile=_originalProfile;
@property(retain, nonatomic) NSData *originalProfileData; // @synthesize originalProfileData=_originalProfileData;
@property(retain, nonatomic) UIAlertController *activeAlertController; // @synthesize activeAlertController=_activeAlertController;
@property(retain, nonatomic) NSArray *warningsToPresent; // @synthesize warningsToPresent=_warningsToPresent;
@property(retain, nonatomic) MCProfileViewController *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;
- (void)_cancelActiveAlertController:(_Bool)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)_showReEnrollFailureAlert;
- (void)_showMDMFinalInstallationWarning:(CDUnknownBlockType)arg1;
- (void)_showFinalInstallationWarning:(CDUnknownBlockType)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)_showPINSheet;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;
- (void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)_pushInstallationWarningControllerWithWarnings:(id)arg1;
- (void)installationWarningViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)installationConsentViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)_didFinishPresentingConsent:(id)arg1;
- (void)_presentConsent:(id)arg1;
- (id)_nextTitleAfterAction;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (_Bool)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (void)setCurrentQuestionsController:(id)arg1;
- (void)_finishWaitingForMoreUserInput;
- (void)_waitForMoreUserInput;
- (void)_promptUserWithUserInput:(id)arg1;
- (id)_redirectURLFromInstallError:(id)arg1;
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;
- (void)_cancelUserInputAnimated:(_Bool)arg1;
- (void)_submitResponses:(id)arg1;
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)_cancelInstallAfterPresentingWarningsAnimated:(_Bool)arg1;
- (void)_continueInstallAfterPresentingWarnings;
- (void)_performInstall;
- (void)_performInstallAfterPINVerification;
- (void)_installProfile;
- (void)_takeMeBack;
- (void)_hideProgressIndicatorIfNeeded;
- (void)_hideProgressIndicatorWithShowButtons:(_Bool)arg1;
- (void)_showProgressIndicator;
- (void)_setDidAppearBlock:(CDUnknownBlockType)arg1;
- (_Bool)_displayedAsSheet;
- (id)newRightBarButtonItem;
- (id)_titleForCurrentState;
- (void)queueNextProfileData:(id)arg1;
- (void)_resetInstallationVariables;
- (void)setInstallState:(int)arg1 animated:(_Bool)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithProfileData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

