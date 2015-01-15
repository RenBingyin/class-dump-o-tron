//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYDevice.h"

@class DYSimulatorDaemonInstance, NSString;

@interface DYSimulatorDevice : DYDevice
{
    DYSimulatorDaemonInstance *_daemon;
    NSString *_sdkRoot;
}

+ (id)replayerAppIdentifier;
+ (Class)controlStrategyClass;
+ (Class)deferredLaunchStrategyClass;
+ (Class)launchStrategyClass;
+ (void)initialize;
@property(readonly, nonatomic) NSString *sdkRoot; // @synthesize sdkRoot=_sdkRoot;
@property(retain, nonatomic) DYSimulatorDaemonInstance *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (BOOL)supportsPlaybackOfCaptureWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (id)iconDataForApplicationIdentifiers:(id)arg1;
- (id)gputoolsServiceAvailabilityError;
- (BOOL)gputoolsServiceAvailable;
- (id)mobileReplayerGuestApp;
- (id)guestAppWithPath:(id)arg1;
- (id)guestAppWithIdentifier:(id)arg1;
- (id)guestAppWithURL:(id)arg1;
- (id)initWithRootPath:(id)arg1;
- (id)init;

@end

