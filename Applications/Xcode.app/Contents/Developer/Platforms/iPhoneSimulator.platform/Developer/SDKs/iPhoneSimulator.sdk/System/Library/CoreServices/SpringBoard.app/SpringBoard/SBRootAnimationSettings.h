//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderCloseSettings, SBFolderOpenSettings, SBReducedMotionFadeSettings, SBUnlockSettings;

@interface SBRootAnimationSettings : _UISettings
{
    SBReducedMotionFadeSettings *_reducedMotionSettings;
    SBUnlockSettings *_unlockSettings;
    SBCenterAppLaunchSettings *_centerLaunchSettings;
    SBCenterAppSuspendSettings *_centerSuspendSettings;
    SBCrossfadeAppLaunchSettings *_crossfadeLaunchSettings;
    SBCrossfadeAppSuspendSettings *_crossfadeSuspendSettings;
    SBFolderOpenSettings *_folderOpenSettings;
    SBFolderCloseSettings *_folderCloseSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFolderCloseSettings *folderCloseSettings; // @synthesize folderCloseSettings=_folderCloseSettings;
@property(retain) SBFolderOpenSettings *folderOpenSettings; // @synthesize folderOpenSettings=_folderOpenSettings;
@property(retain) SBCrossfadeAppSuspendSettings *crossfadeSuspendSettings; // @synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings;
@property(retain) SBCrossfadeAppLaunchSettings *crossfadeLaunchSettings; // @synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings;
@property(retain) SBCenterAppSuspendSettings *centerSuspendSettings; // @synthesize centerSuspendSettings=_centerSuspendSettings;
@property(retain) SBCenterAppLaunchSettings *centerLaunchSettings; // @synthesize centerLaunchSettings=_centerLaunchSettings;
@property(retain) SBUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain) SBReducedMotionFadeSettings *reducedMotionSettings; // @synthesize reducedMotionSettings=_reducedMotionSettings;
- (void)setDefaultValues;

@end

