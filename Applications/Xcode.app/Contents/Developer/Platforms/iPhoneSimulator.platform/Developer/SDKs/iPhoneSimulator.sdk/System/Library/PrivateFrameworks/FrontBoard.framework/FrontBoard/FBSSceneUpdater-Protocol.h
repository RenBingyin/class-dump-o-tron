//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSScene, FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneContext, FBSSceneTransitionContext, NSSet, NSString;

@protocol FBSSceneUpdater <NSObject>
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBSScene *)arg1 didDetachContext:(FBSSceneContext *)arg2;
- (void)scene:(FBSScene *)arg1 didReceiveUpdateToContext:(FBSSceneContext *)arg2;
- (void)scene:(FBSScene *)arg1 didAttachContext:(FBSSceneContext *)arg2;
- (_Bool)willObserveContextsManually;
- (void)unregisterDelegateForSceneID:(NSString *)arg1;
- (void)registerDelegate:(id <FBSSceneUpdaterDelegate>)arg1 forSceneID:(NSString *)arg2;
@end

