//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSTimer *_timer;
    unsigned long long _timeLeftUntilInstall;
    _Bool _delayOnDismissForNonUserAction;
    _Bool _delayAfterNextUnlock;
    _Bool _countdown;
}

@property(nonatomic) _Bool countdown; // @synthesize countdown=_countdown;
@property(nonatomic) _Bool delayAfterNextUnlock; // @synthesize delayAfterNextUnlock=_delayAfterNextUnlock;
@property(nonatomic) _Bool delayOnDismissForNonUserAction; // @synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction;
- (_Bool)dismissOnLock;
- (void)performUnlockAction;
- (_Bool)shouldShowInLockScreen;
- (id)shortLockLabel;
- (id)lockLabel;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)undimsScreen;
- (void)_timerFired;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)willDeactivateForReason:(int)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)updateBodyText;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_installUpdate;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

