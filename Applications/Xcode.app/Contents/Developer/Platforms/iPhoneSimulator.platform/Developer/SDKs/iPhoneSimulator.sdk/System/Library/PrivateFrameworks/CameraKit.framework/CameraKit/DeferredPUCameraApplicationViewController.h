//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMApplicationViewController.h>

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CAMApplicationViewController
{
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_deferredLoader;
}

@property(retain, nonatomic) DeferredFrameworkLoader *deferredLoader; // @synthesize deferredLoader=_deferredLoader;
@property(retain, nonatomic) CAMCameraRollSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)definesPresentationContext;
- (id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2;
- (_Bool)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(_Bool)arg2;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(_Bool)arg2 startPreviewImmediately:(_Bool)arg3;

@end

