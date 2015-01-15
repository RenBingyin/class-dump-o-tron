//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRProcessControlServiceAuthorizedAPI.h"

@class DTPSInstrument, DTXChannel, DTXConnection, NSArray, NSDictionary, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface DTPerformanceSession : NSObject <XRProcessControlServiceAuthorizedAPI>
{
    int _sessionNum;
    CDUnknownFunctionPointerType _statusCallback;
    NSURL *_serverAddress;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSString *_deviceID;
    int _pid;
    NSString *_targetName;
    BOOL _allProfiling;
    BOOL _selfProfiling;
    NSDictionary *_symbolicatorSignatures;
    NSMutableDictionary *_globalOptions;
    NSMutableDictionary *_instruments;
    NSString *_savePath;
    NSError *_error;
    int _nextInstrumentIndex;
    int _recordingPriority;
    BOOL _requiresCoreProfileSession;
    DTPSInstrument *_globalCoreProfileInstrument;
    BOOL _iprofilerCreated;
    BOOL _alreadyLaunched;
    NSString *_launch;
    NSArray *_launchArgs;
    BOOL _targetDied;
    BOOL _tearingDownConnection;
    DTXConnection *_connection;
    DTXChannel *_processControlChannel;
    DTXChannel *_deviceInfoChannel;
}

+ (void)initialize;
@property(nonatomic) int recordingPriority; // @synthesize recordingPriority=_recordingPriority;
@property(readonly, nonatomic) BOOL requiresCoreProfileSession; // @synthesize requiresCoreProfileSession=_requiresCoreProfileSession;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSMutableDictionary *instruments; // @synthesize instruments=_instruments;
@property(retain, nonatomic) NSMutableDictionary *globalOptions; // @synthesize globalOptions=_globalOptions;
@property BOOL targetDied; // @synthesize targetDied=_targetDied;
@property BOOL allProfiling; // @synthesize allProfiling=_allProfiling;
@property int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) DTXChannel *deviceInfoChannel; // @synthesize deviceInfoChannel=_deviceInfoChannel;
@property(retain, nonatomic) DTXChannel *processControlChannel; // @synthesize processControlChannel=_processControlChannel;
@property(retain, nonatomic) DTXConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSURL *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(readonly) NSString *launchPath; // @synthesize launchPath=_launch;
- (void).cxx_destruct;
- (id)globalCoreProfileInstrument;
- (void)setupGlobalCoreProfileInstrumentWithOptions:(id)arg1;
- (BOOL)saveToFile:(id)arg1;
- (BOOL)endRecording;
- (BOOL)stopRecording:(id)arg1;
- (BOOL)startRecording:(id)arg1;
- (BOOL)prepare:(id)arg1;
- (void)pidDiedCallback:(id)arg1;
- (id)pidString;
- (id)targetName;
- (void)killTargetIfLaunched;
- (int)launchTarget:(id)arg1;
- (int)launchSuspendedProcess:(id)arg1 environment:(id)arg2 arguments:(id)arg3;
- (BOOL)addInstrument:(id)arg1 options:(id)arg2;
- (id)getCurrentSymbolicatorSignatures:(int)arg1;
- (id)symbolicatorSignatures;
- (void)clearError;
- (void)setError:(id)arg1;
- (id)error;
- (id)syncQueue;
- (id)identifier;
- (void)releaseResources;
- (void)disconnectFromInstrumentsServer;
- (BOOL)setupTarget:(id)arg1;
- (BOOL)setupTargetAttach:(id)arg1;
- (BOOL)lookupProcessNameFromHint:(id)arg1;
- (BOOL)connectWithInstrumentsServer;
- (id)localDeviceConnection;
- (void)sendClientAsyncStatus:(long long)arg1 userInfo:(struct __CFDictionary *)arg2;
- (id)initWithDevice:(id)arg1 target:(id)arg2 options:(id)arg3 statusCallback:(CDUnknownFunctionPointerType)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

