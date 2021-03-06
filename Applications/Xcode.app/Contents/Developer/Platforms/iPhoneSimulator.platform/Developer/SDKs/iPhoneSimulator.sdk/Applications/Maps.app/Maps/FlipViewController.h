//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SUScalingFlipViewDelegate.h"

@class NSString, SUScalingFlipView, UIView;

__attribute__((visibility("hidden")))
@interface FlipViewController : UIViewController <SUScalingFlipViewDelegate>
{
    struct CGRect _originalRect;
    _Bool _flippingBack;
    id <FlipViewControllerDelegate> _flipDelegate;
    UIView *_viewToFlip;
    UIViewController *_viewControllerToPresent;
    SUScalingFlipView *_scalingFlipView;
}

@property(retain, nonatomic) SUScalingFlipView *scalingFlipView; // @synthesize scalingFlipView=_scalingFlipView;
@property(retain, nonatomic) UIViewController *viewControllerToPresent; // @synthesize viewControllerToPresent=_viewControllerToPresent;
@property(retain, nonatomic) UIView *viewToFlip; // @synthesize viewToFlip=_viewToFlip;
@property(nonatomic) __weak id <FlipViewControllerDelegate> flipDelegate; // @synthesize flipDelegate=_flipDelegate;
- (void).cxx_destruct;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (void)_unflipViewController;
- (void)flipToViewController;
- (struct CGRect)_modalPresentationRect;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFlipView:(id)arg1 controllerToPresent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

