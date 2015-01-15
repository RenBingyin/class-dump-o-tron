//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class DeferredPUCameraApplicationViewController, NSString, UIWindow;

@interface CAMApplicationDelegate : NSObject <UIApplicationDelegate>
{
    UIWindow *__window;
    DeferredPUCameraApplicationViewController *__applicationViewController;
}

@property(readonly, nonatomic) DeferredPUCameraApplicationViewController *_applicationViewController; // @synthesize _applicationViewController=__applicationViewController;
@property(readonly, nonatomic) UIWindow *_window; // @synthesize _window=__window;
- (_Bool)wantsWindowRotationAnimation;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

