//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneDelegate.h"
#import "FBWindowContextManagerObserver.h"

@class FBSSceneClientSettingsDiffInspector, FBSceneEventQueue, NSHashTable, NSMapTable, NSMutableDictionary, NSString;

@interface FBSceneManager : NSObject <FBSceneDelegate, FBWindowContextManagerObserver>
{
    id <FBSceneManagerDelegate> _delegate;
    NSHashTable *_observers;
    NSMutableDictionary *_displayToRootWindow;
    NSMutableDictionary *_displayToOcclusionsStack;
    unsigned long long _synchronizationBlockDepth;
    unsigned int _synchronizationPort;
    NSMutableDictionary *_scenesByID;
    NSMapTable *_providerToSceneMap;
    NSHashTable *_providersWithOpenTransactions;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    _Bool _applyingOrientationTransform;
    int _orientationNotificationToken;
    int _lastOrientation;
    FBSceneEventQueue *_eventQueue;
}

+ (void)synchronizeChanges:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(nonatomic) id <FBSceneManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)windowContextManagerDidStopTrackingContexts:(id)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 handleUpdateSettingsWithBlock:(CDUnknownBlockType)arg2;
- (void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3;
- (void)_orientationChanged:(long long)arg1;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneChangedFrame:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)_stopContextHostingForScene:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (void)_startContextHostingForScene:(id)arg1;
- (void)_positionWrapperViewInRootViewOrderedCorrectly:(id)arg1 rootWindow:(id)arg2;
- (void)_updateMainDisplayRootWindowTransformsToWindow:(id)arg1;
- (id)_rootWindowForDisplay:(id)arg1;
- (void)_reEvaluateNeedForRootWindowOnDisplay:(id)arg1;
- (void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_occlusionStackForDisplay:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3;
- (void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 asUpdate:(_Bool)arg3 withTransitionContext:(id)arg4;
- (void)_sendOutstandingOcclusionChangesWithTransitionContext:(id)arg1;
- (void)_endSynchronizationBlock;
- (void)_beginSynchronizationBlock;
@property(readonly, copy) NSString *description;
- (void)shutdown:(_Bool)arg1;
- (void)removeDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (void)attachDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (void)destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5;
- (id)createSceneWithIdentifier:(id)arg1 display:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 clientProvider:(id)arg5 transitionContext:(id)arg6;
- (id)scenesPassingTest:(CDUnknownBlockType)arg1;
- (id)scenesMatchingPredicate:(id)arg1;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)contextManagerForSceneID:(id)arg1;
- (id)hostManagerForSceneID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

