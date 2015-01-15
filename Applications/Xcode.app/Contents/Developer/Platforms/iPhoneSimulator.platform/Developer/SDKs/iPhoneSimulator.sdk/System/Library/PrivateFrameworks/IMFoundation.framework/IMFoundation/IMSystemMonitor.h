//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, NSTimer;

@interface IMSystemMonitor : NSObject
{
    _Bool _watchesDataProtectionLockState;
    _Bool _watchesScreenLightState;
    _Bool _receivesMemoryWarnings;
    _Bool _willSleep;
    _Bool _screenLocked;
    _Bool _screensaverActive;
    _Bool _watchesSystemLockState;
    _Bool _underFirstLock;
    _Bool _active;
    _Bool _backingUp;
    _Bool _switchedOut;
    _Bool _screenLit;
    _Bool _systemLocked;
    _Bool _idleOverride;
    _Bool _usesPowerNotifications;
    _Bool _usesSystemIdleState;
    _Bool _inBackground;
    int _dataProtectionState;
    int _userIdleToken;
    NSMutableArray *_listeners;
    NSDate *_idleStart;
    NSTimer *_timer;
    NSDate *_dateScreenLightLastChanged;
    NSDate *_dateSystemLockLastChanged;
    NSString *_userID;
    double _delayTime;
    NSMutableArray *_earlyListeners;
}

+ (id)sharedInstance;
@property(nonatomic) int userIdleToken; // @synthesize userIdleToken=_userIdleToken;
@property(readonly, nonatomic) _Bool isInBackground; // @synthesize isInBackground=_inBackground;
@property(nonatomic) _Bool usesSystemIdleState; // @synthesize usesSystemIdleState=_usesSystemIdleState;
@property(nonatomic) _Bool usesPowerNotifications; // @synthesize usesPowerNotifications=_usesPowerNotifications;
@property(retain, nonatomic) NSMutableArray *_earlyListeners; // @synthesize _earlyListeners;
@property(nonatomic) _Bool _idleOverride; // @synthesize _idleOverride;
@property(nonatomic) double _delayTime; // @synthesize _delayTime;
@property(retain, nonatomic) NSString *_userID; // @synthesize _userID;
@property(readonly, nonatomic) _Bool isSystemLocked; // @synthesize isSystemLocked=_systemLocked;
@property(readonly, retain, nonatomic) NSDate *dateSystemLockLastChanged; // @synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged;
@property(readonly, retain, nonatomic) NSDate *dateScreenLightLastChanged; // @synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged;
@property(readonly, nonatomic) _Bool isScreenLit; // @synthesize isScreenLit=_screenLit;
@property(retain, nonatomic) NSTimer *_timer; // @synthesize _timer;
@property(retain, nonatomic) NSDate *_idleStart; // @synthesize _idleStart;
@property(retain, nonatomic) NSMutableArray *_listeners; // @synthesize _listeners;
@property(nonatomic) _Bool isFastUserSwitched; // @synthesize isFastUserSwitched=_switchedOut;
@property(readonly, nonatomic) _Bool isBackingUp; // @synthesize isBackingUp=_backingUp;
@property(nonatomic, setter=setActive:) _Bool isActive; // @synthesize isActive=_active;
@property(nonatomic) _Bool _underFirstLock; // @synthesize _underFirstLock;
@property(nonatomic) int _dataProtectionState; // @synthesize _dataProtectionState;
@property(nonatomic) _Bool watchesSystemLockState; // @synthesize watchesSystemLockState=_watchesSystemLockState;
@property(readonly, nonatomic) _Bool isScreenSaverActive; // @synthesize isScreenSaverActive=_screensaverActive;
@property(readonly, nonatomic) _Bool systemIsSleeping; // @synthesize systemIsSleeping=_willSleep;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(nonatomic) _Bool watchesScreenLightState; // @synthesize watchesScreenLightState=_watchesScreenLightState;
@property(nonatomic) _Bool watchesDataProtectionLockState; // @synthesize watchesDataProtectionLockState=_watchesDataProtectionLockState;
- (void)_receivedMemoryNotification;
- (void)_unregisterForLoginWindowNotifications;
- (void)_registerForLoginWindowNotifications;
- (void)_handleLoginWindowNotification:(id)arg1;
- (void)_forceSuspended;
- (void)_forceResumed;
@property(readonly, nonatomic) _Bool isSetup;
- (void)_unregisterForRestoreNotifications;
- (void)_registerForRestoreNotifications;
- (void)_setupStateChanged;
- (void)_restoreDidStop;
- (void)_restoreDidStart;
- (void)_checkRestoredFromBackup;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_removeEarlyListener:(id)arg1;
- (void)_addEarlyListener:(id)arg1;
- (void)_systemWillShutdown;
@property(readonly, nonatomic) _Bool systemIsShuttingDown;
@property(readonly, nonatomic) double systemIdleTime;
@property(readonly, nonatomic) _Bool isSystemIdle;
- (void)_checkIdleTime:(id)arg1;
- (void)_clearIdleTimer;
- (void)_armIdleTimer;
- (void)_overrideAndDisableIdleTimer:(_Bool)arg1;
- (void)_setIdleState:(_Bool)arg1;
- (void)_updateIdleState;
- (void)_setSystemLockState:(_Bool)arg1;
- (void)_setSystemScreenState:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isUnderFirstDataProtectionLock;
@property(readonly, nonatomic) _Bool isUnderDataProtectionLock;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_postScreenSaverStarted;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_suspend:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
@property(readonly, nonatomic) _Bool isScreenLocked; // @synthesize isScreenLocked=_screenLocked;
- (void)_screenUnlocked:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_postScreenLocked;
- (void)_systemWillSleep;
- (void)_systemDidWake;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end

