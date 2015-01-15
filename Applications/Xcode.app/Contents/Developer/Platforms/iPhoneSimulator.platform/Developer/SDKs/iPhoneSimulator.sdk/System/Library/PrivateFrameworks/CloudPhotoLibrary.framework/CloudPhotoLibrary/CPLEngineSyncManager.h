//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLBackgroundDownloadsTaskDelegate.h"
#import "CPLBackgroundUploadsTaskDelegate.h"
#import "CPLEngineComponent.h"
#import "CPLEngineSyncEmergencyTaskDelegate.h"
#import "CPLMinglePulledChangesTaskDelegate.h"
#import "CPLPullFromTransportTaskDelegate.h"
#import "CPLPushToTransportTaskDelegate.h"

@class CPLBackgroundDownloadsTask, CPLBackgroundUploadsTask, CPLEngineLibrary, CPLEngineSyncEmergencyTask, CPLGetAssetCountsTask, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPushToTransportTask, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncEmergencyTaskDelegate, CPLPushToTransportTaskDelegate, CPLPullFromTransportTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLBackgroundDownloadsTaskDelegate, CPLAbstractObject, CPLEngineComponent>
{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    _Bool _setupIsDone;
    id <CPLEngineTransportSetupTask> _setupTask;
    NSMutableArray *_setupBarriers;
    CDUnknownBlockType _closingCompletionHandler;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLEngineSyncEmergencyTask *_managementTask;
    NSMutableArray *_archivedManagementTasks;
    NSMutableDictionary *_completionHandlerPerTaskIdentifier;
    CPLPushToTransportTask *_pushTask;
    CPLGetAssetCountsTask *_getAssetCountsTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundUploadsTask *_backgroundUploadsTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    unsigned long long _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    _Bool _foreground;
    _Bool _hasTransactionForSyncSession;
    _Bool _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (id)shortDescriptionForState:(unsigned long long)arg1;
+ (id)descriptionForState:(unsigned long long)arg1;
@property(nonatomic) _Bool shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property(nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 didProgress:(float)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundDownloads;
- (_Bool)_launchNecessaryTasksForBackgroundDownloads;
- (id)_descriptionForBackgroundDownloadsTasks;
- (_Bool)_didFinishBackgroundUploadsTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForBackgroundUploadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundUploads;
- (_Bool)_launchNecessaryTasksForBackgroundUploads;
- (id)_descriptionForBackgroundUploadsTasks;
- (id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPull;
- (_Bool)_launchNecessaryTasksForPull;
- (id)_descriptionForPullTasks;
- (_Bool)_didFinishGetAssetCountsTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForGetAssetCountsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForGetAssetCounts;
- (_Bool)_launchNecessaryTasksForGetAssetCounts;
- (id)_descriptionForGetAssetCountsTasks;
- (id)task:(id)arg1 wantsToPushBatch:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;
- (_Bool)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPush;
- (_Bool)_launchNecessaryTasksForPush;
- (id)_descriptionForPushTasks;
- (_Bool)_didFinishManagementTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (void)_cancelAllTasksForManagement;
- (_Bool)_launchManagementTask;
- (void)_loadManagementTasks;
- (void)_saveManagementTasks;
- (id)_descriptionForManagementTasks;
- (_Bool)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(_Bool *)arg2;
- (void)_cancelAllTasksForSetup;
- (_Bool)_launchSetupTask;
- (id)_descriptionForSetupTasks;
- (_Bool)_prepareAndLaunchSyncTask:(id *)arg1;
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;
- (void)addSetupBarrier:(CDUnknownBlockType)arg1;
- (void)startEmergencyTask:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetTransportUserIdentifierAndRestartSync:(_Bool)arg1;
- (void)cancelCurrentSyncSession;
- (void)kickOffSyncSession;
- (void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(_Bool)arg2;
- (void)_advanceToNextStateLocked;
- (void)_notifyEndOfSyncSession;
- (_Bool)_launchNecessaryTasksForCurrentStateLocked;
- (id)_descriptionForLaunchedTasks;
- (id)_descriptionForCurrentState;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_cancelAllTasksLocked;
- (void)_resetErrorForSyncSession;
- (void)_setErrorForSyncSession:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

