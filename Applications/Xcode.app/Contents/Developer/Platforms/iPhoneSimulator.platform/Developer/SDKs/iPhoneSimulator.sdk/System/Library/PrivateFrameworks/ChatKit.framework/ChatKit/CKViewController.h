//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface CKViewController : UIViewController
{
    _Bool _appeared;
    _Bool _appearing;
    _Bool _dissapearing;
}

@property(nonatomic) _Bool dissapearing; // @synthesize dissapearing=_dissapearing;
@property(nonatomic) _Bool appearing; // @synthesize appearing=_appearing;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
- (void)childViewControllersPerform:(SEL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)performResumeDeferredSetup;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)significantTimeChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

