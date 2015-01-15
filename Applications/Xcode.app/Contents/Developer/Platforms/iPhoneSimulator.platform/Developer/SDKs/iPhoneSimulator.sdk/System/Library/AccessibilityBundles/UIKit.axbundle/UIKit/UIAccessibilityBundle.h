//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityLoader.h"

@interface UIAccessibilityBundle : UIAccessibilityLoader
{
    _Bool _voiceOverHandwritingEnabled;
    _Bool _registeredForVoiceOverHandwritingNotifications;
}

+ (id)wrapDOMRange:(id)arg1;
+ (void)_handleWebKitInstallation;
+ (void)_accessibilityStartServer;
+ (id)sharedGlueObjectIfAvailable;
@property(nonatomic, getter=isRegisteredForVoiceOverHandwritingNotifications) _Bool registeredForVoiceOverHandwritingNotifications; // @synthesize registeredForVoiceOverHandwritingNotifications=_registeredForVoiceOverHandwritingNotifications;
@property(nonatomic, getter=isVoiceOverHandwritingEnabled) _Bool voiceOverHandwritingEnabled; // @synthesize voiceOverHandwritingEnabled=_voiceOverHandwritingEnabled;
- (void)_enableHandwriting;
- (void)_disableHandwriting;
- (void)_handleVoiceOverStatusChanged:(id)arg1;
- (void)_unregisterForVoiceOverHandwritingNotifications:(id)arg1;
- (void)_registerForVoiceOverHandwritingNotifications:(id)arg1;
- (id)_currentAccessoryView:(_Bool)arg1;
- (id)description;
- (id)init;

@end

