//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIView;

@interface PLTVOutWindow : UIWindow
{
    UIView *_backgroundView;
    UIView *_videoView;
}

- (id)videoView;
- (_Bool)setVideoView:(id)arg1;
- (_Bool)_setupTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;

@end

