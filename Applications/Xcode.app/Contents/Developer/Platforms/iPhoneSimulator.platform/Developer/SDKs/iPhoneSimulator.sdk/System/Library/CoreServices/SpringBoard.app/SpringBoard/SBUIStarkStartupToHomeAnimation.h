//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkStartupAnimation.h"

@class SBIconAnimator, UIStatusBar;

@interface SBUIStarkStartupToHomeAnimation : SBUIStarkStartupAnimation
{
    UIStatusBar *_fakeStatusBar;
    SBIconAnimator *_iconAnimator;
    _Bool _finishedCleanup;
}

- (void)_cleanupEverything;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)endAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_getTransitionWindow;
- (void)dealloc;

@end

