//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AXEventRepresentation;

@protocol VOTEventFactoryCallbackProtocol
- (void)handleUnsetForcedOrientationAndAnnounce:(_Bool)arg1;
- (void)handleSetForcedOrientation:(int)arg1 shouldAnnounce:(_Bool)arg2;
- (void)handleReturnToSpringBoard;
- (void)handleSystemWideServerDied;
- (void)handleOrientationChanged;
- (void)handleProximityEvent:(AXEventRepresentation *)arg1;
- (void)handleRingerSwitchSwitched:(AXEventRepresentation *)arg1;
- (void)handlePlayPauseKeyPress:(AXEventRepresentation *)arg1;
- (void)handleMediaKeyPress:(AXEventRepresentation *)arg1;
- (void)handleLockButtonPress:(AXEventRepresentation *)arg1;
- (void)handleMenuButtonPress:(AXEventRepresentation *)arg1;
- (void)handleVolumeButtonPress:(AXEventRepresentation *)arg1;
- (void)handleKeyboardKeyEvent:(AXEventRepresentation *)arg1 eventOrigin:(int)arg2;
@end

