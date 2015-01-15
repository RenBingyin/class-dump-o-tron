//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCondition, NSLock, NSMutableArray, NSString, NSThread, PFTInstrumentCommand, PFTTraceDocument, XRDTraceClient;

@interface PFTDTraceScript : NSObject
{
    NSArray *_dtraceInstruments;
    void **_dtraceRuns;
    PFTInstrumentCommand *_currentCommand;
    NSString *_uuid;
    BOOL _isImporting;
    NSString *_importFilepath;
    NSCondition *_backgroundThreadCoordinationLock;
    NSThread *_backgroundThread;
    long long _backgroundThreadState;
    BOOL _terminateBackgroundThread;
    NSMutableArray *_workQueue;
    NSLock *_workQueueLock;
    NSString *_dtraceScript;
    BOOL _usesPidProvider;
    NSMutableArray *_targetPids;
    unsigned long long _timeOffset;
    XRDTraceClient *_dtraceClient;
    id _delegate;
    long long _currentFilepos;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _fileposLock;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _dataAvailable;
    BOOL _ignoreDataInFile;
    struct fileposq_s *_headFilePos;
    struct fileposq_s *_tailFilePos;
    struct fileposq_s *_cachedFilePos;
    struct __CFArray *_producerArray;
    long long _workToken;
    PFTTraceDocument *_traceDocument;
}

+ (id)scriptForInstruments:(id)arg1 targetType:(int)arg2;
- (void)cancelImport;
- (void)_badImportFile;
- (void)_importCompleted;
- (void)importFromURL:(id)arg1 forRunNumber:(long long)arg2;
- (void)_serverFatalErrorMessage:(id)arg1;
- (void)_deleteAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_serverStatusMessage:(id)arg1;
- (id)noteError:(id)arg1 onLine:(int)arg2 forInstrumentAtIndex:(long long)arg3 inSection:(id)arg4;
- (void)_dataProcessingCompleted;
- (void)_beginBackgroundProcessWithCommand:(id)arg1;
- (void)_processImportedData;
- (void)transferEventsToConsumer:(struct __CFArray *)arg1;
- (void)_processWorkQueue;
- (void)_processData;
- (id)_popWorkOffQueue;
- (void)_pushWorkOnQueue:(id)arg1;
- (void)_postDataProcessingError;
- (void)_processStackClauseBinary:(struct __sFILE *)arg1 record:(char *)arg2 eventPair:(struct EventPair **)arg3 uniquingTable:(id)arg4;
- (void)_processStackClauseSymbolicated:(struct __sFILE *)arg1 record:(char *)arg2 eventPair:(struct EventPair **)arg3 uniquingTable:(id)arg4 readMore:(char *)arg5;
- (int)_processDataClause:(struct __sFILE *)arg1 record:(char *)arg2 eventPair:(struct EventPair **)arg3 readMore:(char *)arg4;
- (id)targetProcessIdentifiers;
- (BOOL)usesPidProvider;
- (struct fileposq_s *)_getFilePos;
- (void)consumeBuffersComplete:(long long)arg1 timestamp:(unsigned long long)arg2 code:(int)arg3;
- (void)freeFilePosCache;
- (void)freeFilePos:(struct fileposq_s *)arg1;
- (struct fileposq_s *)allocFilePos;
- (void)_prepareProbesWithExternalTarget:(int)arg1 includeSwitch:(BOOL)arg2;
- (void)_setScript:(id)arg1;
- (char *)_dtraceOutputPath;
- (id)_dtraceOutputPathAsNSString;
- (unsigned int)_maxRecordLength;
- (char *)_bufferSize;
- (id)currentCommand;
- (BOOL)endInstruments:(id)arg1 forCommand:(id)arg2;
- (void)endCommand:(id)arg1;
- (void)startCommand:(id)arg1;
- (id)uuid;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)traceDocument;
- (void)setTraceDocument:(id)arg1;
- (void)dealloc;
- (id)initWithInstruments:(id)arg1;

@end

