//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer
{
    _Bool _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
}

+ (id)server;
- (void)jetsamThirdPartyApps;
- (void)toggleGuidedAccess;
- (_Bool)isGuidedAccessSelfLockedToApp:(id)arg1;
- (_Bool)requestGuidedAccessSession:(_Bool)arg1 appID:(id)arg2;
- (unsigned long long)guidedAccessAvailability;
- (_Bool)isGuidedAccessActive;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (void)setHearingAidControlIsVisible:(_Bool)arg1;
- (void)removeEventListener:(id)arg1;
- (void)registerEventListener:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)setVoiceOverItemChooserVisible:(_Bool)arg1;
- (void)wakeUpDeviceIfNecessary;
- (void)userEventOccurred;
- (struct CGRect)convertFrame:(struct CGRect)arg1 forContextId:(unsigned int)arg2;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
@property(nonatomic) _Bool invertColorsEnabled; // @dynamic invertColorsEnabled;
- (void)registerAssistiveTouchPID:(int)arg1;
@property(nonatomic) _Bool inPreboardMode;
- (id)backboardServiceInstance;
- (_Bool)_shouldDispatchLocally;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (void)registerSiriViewServicePID:(int)arg1;
- (void)setLockScreenDimTimerEnabled:(_Bool)arg1;
- (void)adjustSystemZoom:(int)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (id)_handleEventListener:(id)arg1;
- (id)_serviceName;
- (void)dealloc;
- (id)init;

@end

