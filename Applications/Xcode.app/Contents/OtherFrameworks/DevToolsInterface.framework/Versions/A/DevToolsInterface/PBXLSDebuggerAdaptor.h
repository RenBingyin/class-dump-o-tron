//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSAdaptor.h>

#import "XCUnretainedReferent.h"

@class NSMutableArray, NSMutableSet, PBXLSTypeController, XCUnretainedReference;

@interface PBXLSDebuggerAdaptor : PBXLSAdaptor <XCUnretainedReferent>
{
    NSMutableSet *_breakpointsSet;
    PBXLSTypeController *_typeController;
    unsigned long long _operationNumber;
    NSMutableArray *_releasedResourceIDs;
    XCUnretainedReference *_myUnretainedReference;
    long long _dataContainerStride;
    BOOL _debuggerInRunMode;
    BOOL _supportsUnicharXcode_CFDataFormatters;
}

- (void)setSupportsUnicharXcode_CFDataFormatters:(BOOL)arg1;
- (BOOL)supportsUnicharXcode_CFDataFormatters;
- (BOOL)debuggerInRunMode;
- (BOOL)supportsRunInDebugger;
- (BOOL)isRemoteDebugging;
- (BOOL)isIntrospectionLibraryLoaded;
- (void)requestDebuggerQuit;
- (BOOL)supportsCleanQuit;
- (long long)dataContainerStride;
- (void)requestDebuggerSetStopOnDebuggerDebugStrState;
- (void)requestDebuggerTurnBreakpointsOff;
- (void)requestDebuggerTurnBreakpointsOn;
- (BOOL)undoSupported;
- (void)requestUpdateUnboundDataValues;
- (id)tooltipForBreakpoint:(id)arg1;
- (id)registersDescriptionDVExpressionsWindow;
- (id)globalsDescriptionDV;
- (id)createNewExpressionsDescriptionDV;
- (id)expressionsDescriptionDV;
- (id)unretainedReference;
- (void)releaseInferiorResources;
- (void)registerIDforRelease:(id)arg1;
- (void)requestLoadInferiorPlugin:(id)arg1;
- (void)requestLoadGlobalsInDict:(id)arg1;
- (void)requestMemoryBrowserUpdate:(id)arg1;
- (void)requestGlobalsBrowserUpdate;
- (void)requestDynamicLinkerImageControllerUpdate;
- (void)logMessage:(id)arg1;
- (void)requestFetchGlobalsForLibrary:(id)arg1;
- (void)requestCloneDataValueByContent:(id)arg1 viewAsExpression:(id)arg2 addToContainerDataValue:(id)arg3;
- (void)requestCloneDataValueByPathExpression:(id)arg1 addToContainerDataValue:(id)arg2;
- (BOOL)canCloneDataValue:(id)arg1;
- (void)requestNewDataValueForExpression:(id)arg1 addToContainerDataValue:(id)arg2 locationSpecifier:(id)arg3;
- (void)requestNewDataValueForExpression:(id)arg1 addToContainerDataValue:(id)arg2 bindToFrame:(BOOL)arg3;
- (void)requestNewDataValueForExpression:(id)arg1 addToContainerDataValue:(id)arg2 blockStartAddress:(id)arg3;
- (void)globalVariableDVRemoveDataValueForDict:(id)arg1;
- (void)globalVariableDVAddDataValue:(id)arg1 forGlobalDict:(id)arg2;
- (id)newGlobalContainerDataValue;
- (id)newFrameContextContainerDataValue;
- (id)newDataValueForFrame:(id)arg1;
- (oneway void)requestSuspendAllThreads;
- (oneway void)sendSIGINT;
- (BOOL)supportsWatchpoints;
- (BOOL)supportsFixAndContinue;
- (BOOL)supportsContinueToHere;
- (void)requestDisassemblyOfFrame:(id)arg1 mixedMode:(BOOL)arg2;
- (void)requestFixAndContinueFile:(id)arg1 patch:(id)arg2 object:(id)arg3 shlib:(id)arg4;
- (void)requestDebuggerFixAndContinue;
- (void)requestDebuggerCompleteString:(id)arg1;
- (void)requestDebuggerExecUntilToFile:(id)arg1 lineNumber:(unsigned long long)arg2;
- (void)requestDebuggerContinueToCallSymbol:(id)arg1 inFile:(id)arg2 lineNumber:(unsigned long long)arg3;
- (void)requestDebuggerContinueToSymbol:(id)arg1;
- (void)requestDebuggerContinueToFile:(id)arg1 lineNumber:(unsigned long long)arg2;
- (void)requestDebuggerUndoToCheckpoint;
- (void)requestDebuggerStatus;
- (void)requestDebuggerMovePCInThread:(unsigned long long)arg1 fileSpec:(id)arg2;
- (oneway void)requestBreakpointDidChange:(id)arg1;
- (oneway void)requestDeleteBreakpoint:(id)arg1;
- (oneway void)requestNewBreakpoint:(id)arg1;
- (void)requestDebuggerDeleteWatchpointForDataValue:(id)arg1;
- (void)requestDebuggerCreateWatchpointForDataValue:(id)arg1;
- (void)requestDebuggerCreateWatchpoint:(id)arg1;
- (void)threadRequestContinue:(id)arg1;
- (void)threadRequest:(byref id)arg1 stepUntilLineNumber:(unsigned long long)arg2;
- (void)threadRequestStepOut:(id)arg1;
- (void)threadRequestStepOver:(id)arg1;
- (void)threadRequestStepInto:(id)arg1;
- (void)threadRequestNextInstruction:(id)arg1;
- (void)threadRequestStepInstruction:(id)arg1;
- (void)threadRequestUpdateStack:(id)arg1;
- (id)activeBreakpoint;
- (BOOL)canManageBreakpoint:(id)arg1;
- (oneway void)continueAfterInitialization;
- (BOOL)managesBreakpoint:(id)arg1;
- (void)stopManagingBreakpoint:(id)arg1;
- (void)manageBreakpoint:(id)arg1;
- (id)typeController;
- (void)setTypeController:(id)arg1;
- (id)process;
- (id)debuggingPlugin;
- (id)debugSessionModule;
- (id)debuggingSession;
- (BOOL)isDebugging;
- (BOOL)supportsDebuggerActionSideImplementation;
- (id)breakpointInFile:(id)arg1 atLine:(long long)arg2;
- (id)managedBreakpointsSet;
- (id)project;
- (unsigned long long)operationNumber;
- (void)didUpdateThreads;
- (void)willUpdateThreads;
- (void)setProcessIsRunning;
- (oneway void)setState:(int)arg1 status:(long long)arg2 isCurrentThread:(BOOL)arg3 forServerThreadHandle:(unsigned long long)arg4;
- (id)threadGroupWithName:(id)arg1 create:(BOOL)arg2;
- (void)destroyThreadWithThreadHandle:(unsigned long long)arg1;
- (void)invalidateAllFramesContainerDataValue;
- (void)createThreadWithThreadHandle:(unsigned long long)arg1 name:(id)arg2 inThreadGroupNamed:(id)arg3;
- (void)statusMessage:(id)arg1;
- (void)errorMessage:(id)arg1;
- (void)deviceWasDetached:(id)arg1;
- (void)dealloc;
- (id)initWithExecutableLauncher:(id)arg1;

@end
