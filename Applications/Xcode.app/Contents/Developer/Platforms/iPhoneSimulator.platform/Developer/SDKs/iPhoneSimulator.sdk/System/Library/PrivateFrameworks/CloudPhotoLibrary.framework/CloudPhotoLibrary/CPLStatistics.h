//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLEngineComponent.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLStatistics : NSObject <CPLEngineComponent>
{
    NSURL *_logfileURL;
    struct {
        long long period;
        CDStruct_e6f69ac3 upstream;
        CDStruct_e6f69ac3 downstream;
        struct {
            long long setupErrors;
            long long pushErrors;
            long long pullErrors;
            long long managementErrors;
        } syncerrors;
    } _currentSnapshot;
    long long _lastServedAggregationWindow;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_persistanceQueue;
    _Bool _closed;
    _Bool _statisticsEnabled;
}

@property _Bool statisticsEnabled; // @synthesize statisticsEnabled=_statisticsEnabled;
- (void).cxx_destruct;
- (id)componentName;
- (void)markAggregationWindowAsDirtyNow:(_Bool)arg1;
- (void)recordDownloadedResource:(id)arg1 withPotentialError:(id)arg2;
- (void)recordDownloadingResource:(id)arg1 progress:(float)arg2;
- (void)recordDownloadingResource:(id)arg1;
- (void)recordUploadedResource:(id)arg1 withPotentialError:(id)arg2;
- (void)recordUploadingResource:(id)arg1 progress:(float)arg2;
- (void)recordUploadingResource:(id)arg1;
- (void)recordDownloadedBatchWithError:(id)arg1;
- (void)recordUploadedBatchWithError:(id)arg1;
- (void)recordSyncErrorForState:(unsigned long long)arg1;
- (CDUnknownBlockType)attachToUploadRecordSaveHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)attachToDownloadCompletionHandler:(CDUnknownBlockType)arg1 forResource:(id)arg2;
- (CDUnknownBlockType)attachToDownloadProgressHandler:(CDUnknownBlockType)arg1 forResource:(id)arg2;
- (CDUnknownBlockType)attachToDownloadStartHandler:(CDUnknownBlockType)arg1 forResource:(id)arg2;
- (id)statisticsSnapshotSinceDate:(id)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

