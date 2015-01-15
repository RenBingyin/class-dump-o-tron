//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDisplayBundle.h"

#import "QLAnimationTimerObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, QLAnimatedImage, UIImageView;

@interface QLGIFDisplayBundle : QLDisplayBundle <QLAnimationTimerObserver, UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;
    _Bool _scaledToFit;
    QLAnimatedImage *_animatedImage;
    _Bool _running;
    NSArray *_frames;
}

+ (double)allowedLoadingDelay;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_updateImageFrameAnimated:(_Bool)arg1;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
- (void)loadWithHints:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_createImageViewIfNeeded;
- (void)dealloc;
- (_Bool)canCopyToPasteboard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
