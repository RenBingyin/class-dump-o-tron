//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBGDebugSession.h"

#import "DBGDebugSessionBreakpointLifeCycleDelegate.h"
#import "IDEConsoleAdaptorDelegateProtocol.h"

@class DBGLLDBLauncher, DVTDispatchLock, NSMutableArray, NSMutableString, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface DBGLLDBSession : DBGDebugSession <IDEConsoleAdaptorDelegateProtocol, DBGDebugSessionBreakpointLifeCycleDelegate>
{
    struct SBTarget _lldbTarget;
    struct auto_ptr<lldb::SBBroadcaster> _broadcasterAP;
    NSString *_prompt;
    NSMutableArray *_resumeActions;
    NSMutableArray *_actionsOnSessionThread;
    DVTDispatchLock *_actionsLock;
    struct _opaque_pthread_t *_sessionThread;
    BOOL _shouldSetIsLongRunningConsoleCommand;
    BOOL _isLongRunningConsoleCommand;
    NSObject<OS_dispatch_queue> *_isLongRunningConsoleCommandQueue;
    BOOL _profileUseAnonymous;
    BOOL _profilingEnabled;
    unsigned long long _previousHostUserTicks;
    unsigned long long _previousHostSystemTicks;
    unsigned long long _previousHostIdleTicks;
    unsigned long long _totalElapsedMicroSec;
    unsigned long long _previousElapsedMicroSec;
    unsigned long long _previousUsedMicroSec;
    struct __CFDictionary *_previousUsedMicroSecForThreadTable;
    unsigned long long _previousEnergy;
    NSMutableString *_previousProfileDataString;
    BOOL _isTracingOnDeviceAndTargetGotJetsam;
    BOOL _targetShouldNotAutoContinue;
    BOOL _breakpointHit;
    BOOL _pauseRequested;
    BOOL _fetchEventRequested;
    BOOL _killCalled;
    BOOL _readyForActionsWhenPaused;
    BOOL _shouldIssueKillAfterPause;
    int _initialProfileScanType;
    int _actualProfileScanType;
    NSMutableArray *_actionsWhenPaused;
    NSMutableArray *_expressionsWhenPaused;
}

@property(retain) NSMutableArray *expressionsWhenPaused; // @synthesize expressionsWhenPaused=_expressionsWhenPaused;
@property BOOL shouldIssueKillAfterPause; // @synthesize shouldIssueKillAfterPause=_shouldIssueKillAfterPause;
@property BOOL readyForActionsWhenPaused; // @synthesize readyForActionsWhenPaused=_readyForActionsWhenPaused;
@property(retain) NSMutableArray *actionsWhenPaused; // @synthesize actionsWhenPaused=_actionsWhenPaused;
@property BOOL killCalled; // @synthesize killCalled=_killCalled;
@property BOOL fetchEventRequested; // @synthesize fetchEventRequested=_fetchEventRequested;
@property BOOL pauseRequested; // @synthesize pauseRequested=_pauseRequested;
@property BOOL breakpointHit; // @synthesize breakpointHit=_breakpointHit;
@property(nonatomic) int actualProfileScanType; // @synthesize actualProfileScanType=_actualProfileScanType;
@property int initialProfileScanType; // @synthesize initialProfileScanType=_initialProfileScanType;
@property(nonatomic, getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property BOOL targetShouldNotAutoContinue; // @synthesize targetShouldNotAutoContinue=_targetShouldNotAutoContinue;
@property BOOL isTracingOnDeviceAndTargetGotJetsam; // @synthesize isTracingOnDeviceAndTargetGotJetsam=_isTracingOnDeviceAndTargetGotJetsam;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpRecordingStackFramesForAttach;
- (id)_lldbProcessPlugnPacketSend:(const char *)arg1;
- (void)primitiveInvalidate;
- (BOOL)shouldIgnoreSigTermKill;
- (void)_runPendingExpressionsAndPurgeList;
- (void)_refreshThreadListAndUpdateCurrentThread:(int)arg1;
- (void)assertIsLLDBSessionThread;
- (void)_handleThreadEvent:(struct SBEvent)arg1;
- (id)dbgLLDBProcess;
- (void)forceRefreshPausedStates;
- (void)appendProfileDataString:(id)arg1;
- (void)processProfileDataString:(id)arg1;
- (id)_stringFromHexString:(id)arg1;
- (const char *)_getProfileEnableString;
- (void)terminateCurrentDebuggerCommandIfNeeded;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (BOOL)consoleShouldTrackInputHistory;
- (struct SBBreakpointLocation)_sbBreakpointLocationForIDEBreakpointLocation:(id)arg1;
- (void)_handleBreakpointLocationEnablementChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationEnablementChanged:(id)arg1;
- (void)_handleBreakpointLocationIgnoreCountChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationIgnoreCount:(id)arg1;
- (void)_handleBreakpointLocationConditionChangedFromSessionThread:(id)arg1;
- (void)breakpointLocationConditionChanged:(id)arg1;
- (void)_handleBreakpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)_handleBreakpointIgnoreCountChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointIgnoreCountChanged:(id)arg1;
- (void)_handleBreakpointConditionChangedFromLLDBSessionThread:(id)arg1;
- (void)breakpointConditionChanged:(id)arg1;
- (void)_logBreakpointState:(struct SBBreakpoint)arg1 usingPrefix:(id)arg2;
- (void)_handleWatchpointEnablementChangedFromLLDBSessionThread:(id)arg1;
- (void)watchpointEnablementChanged:(id)arg1;
- (void)_handleActivationStateChangedFromSessionThread:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)_deleteBreakpointFromLLDBSessionThread:(id)arg1 breakpointLocations:(id)arg2;
- (void)deleteBreakpoint:(id)arg1;
- (void)_handleBreakpointLocationsRemovedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointLocationsAddedEvent:(struct SBEvent)arg1;
- (void)_handleBreakpointRemovedEventFromLLDB:(struct SBBreakpoint)arg1;
- (id)_breakpointLocationFromSBBreakpointLocation:(struct SBBreakpointLocation)arg1;
- (void)_handleBreakpointAddedEventFromLLDB:(struct SBBreakpoint)arg1;
- (void)_deleteWatchpointFromLLDBSessionThread:(id)arg1;
- (void)deleteWatchpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromAddressBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromExceptionBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromTestFailureBreakpoint:(id)arg1;
- (struct SBBreakpoint)_sbBreakpointForSymbolsNames:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromSymbolicBreakpoint:(id)arg1;
- (struct SBBreakpoint)_createBreakpointFromFileBreakpoint:(id)arg1;
- (void)_createBreakpointIfNecessaryFromLLDBSessionThread:(id)arg1;
- (void)createBreakpointIfNecessary:(id)arg1;
- (void)_evaluateExpressionFromSessionThread:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deregisterProfileDataObserver:(id)arg1;
- (void)registerProfileDataObserver:(id)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1;
- (void)_setProfilingEnabled:(BOOL)arg1 updateLLDB:(BOOL)arg2;
- (id)commandsExpectingExpressions;
- (void)_delayedSetRunningState;
- (void)_invalidateObjectsFromMainThread:(id)arg1;
- (void)_markObjectsForInvalidationFromSessionThread:(id)arg1;
- (void)safelyInvalidateLLDBInvalidatableObjects:(id)arg1;
- (void)_quitWatchdogOnProcessState:(int *)arg1 forceQuit:(BOOL)arg2;
- (void)_cancelAndClearAllSessionThreadActionsByFirstTakingActionsLock;
- (void)_cancelAndClearAllSessionThreadActionsWithActionsLockAlreadyTaken;
- (BOOL)handleNextActionWithState:(int *)arg1 withRunPending:(char *)arg2;
- (void)addSessionThreadAction:(CDUnknownBlockType)arg1;
- (void)completeString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestDataContainerForSymbol:(id)arg1 atLocation:(id)arg2;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)_logicalValueForBreakpointActionExpression:(struct SBValue)arg1;
- (void)_performBreakpointActions:(id)arg1 frame:(struct SBFrame)arg2;
- (void)_removeBreakpointHitCallback:(unsigned long long)arg1;
- (void)_addBreakpointHitCallback:(struct SBBreakpoint)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
- (BOOL)supportsPCAnnotationDragging;
- (BOOL)supportsMultiplePCAnnotation;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)executeConsoleCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)_putLLDBInThreadID:(unsigned long long)arg1 stackFrameID:(unsigned long long)arg2 restoreThreadFrameAfterWork:(BOOL)arg3 toDoWork:(CDUnknownBlockType)arg4;
- (void)_requestFetchEventOnSessionThread;
- (void)requestFetchEvent;
- (void)_runActionOnSessionThreadWhenPaused:(CDUnknownBlockType)arg1;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStop;
- (void)requestDetach;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOut;
- (void)requestStepOverInstruction;
- (void)requestStepOverLine;
- (void)requestStepIntoInstruction;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepIn;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3 location:(id)arg4;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3;
- (void)_setSessionThreadID:(struct _opaque_pthread_t *)arg1;
- (BOOL)currentThreadIsSessionThread;
- (void)debuggerHasStandardOutput;
- (void)_resetFlagsForTestingLongRunningConsoleCommand;
- (void)_setAndAppendPrompt:(id)arg1;
- (id)prompt;
- (void)trackProcess;
- (struct SBBroadcaster *)lldbBroadcaster;
- (struct SBTarget *)lldbTarget;
- (void)setTarget:(struct SBTarget)arg1;
@property(readonly) DBGLLDBLauncher *launcher;
- (id)initWithDebugLauncher:(id)arg1;

@end

