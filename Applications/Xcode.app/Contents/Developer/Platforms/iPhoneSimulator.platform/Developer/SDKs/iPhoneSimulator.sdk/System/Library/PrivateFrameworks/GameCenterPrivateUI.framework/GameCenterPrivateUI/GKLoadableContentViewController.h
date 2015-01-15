//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKViewController.h>

#import "GKStateMachineDelegate.h"

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadableContentViewController : GKViewController <GKStateMachineDelegate>
{
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_viewsToHideWhileLoading;
    GKLoadableContentStateMachine *_loadingMachine;
}

@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) NSArray *viewsToHideWhileLoading; // @synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
@property(retain, nonatomic) NSString *loadingState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

