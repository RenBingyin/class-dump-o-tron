//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSUICarDisplayNowPlayingViewController.h"

@class BKSApplicationStateMonitor, MCDPlayableContentViewController, NSString;

@interface MusicUIServiceCarDisplayBrowsableContentViewController : SBSUICarDisplayNowPlayingViewController
{
    MCDPlayableContentViewController *_nowPlayingViewController;
    NSString *_displayedViewControllerKey;
    BKSApplicationStateMonitor *_appStateMonitor;
}

- (void).cxx_destruct;
- (void)_handleApplicationTermination:(id)arg1;
- (void)switchToNowPlaying:(_Bool)arg1 bundleID:(id)arg2;
- (void)switchToState:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

