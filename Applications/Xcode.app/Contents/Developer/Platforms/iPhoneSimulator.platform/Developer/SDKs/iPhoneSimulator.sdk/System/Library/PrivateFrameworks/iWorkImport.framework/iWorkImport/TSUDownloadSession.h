//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, TSUBasicProgress, TSUDownloadManager, TSUProgress;

__attribute__((visibility("hidden")))
@interface TSUDownloadSession : NSObject
{
    _Bool _isCancelled;
    TSUDownloadManager *_manager;
    id <TSUDownloadSessionDelegate> _delegate;
    _Bool _didFinishInitialization;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_remainingTasks;
    NSMutableDictionary *_taskProgress;
    double _lastProgressValue;
    NSObject<OS_dispatch_group> *_completionGroup;
    TSUBasicProgress *_progress;
    NSError *_error;
    NSString *_sessionDescription;
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded; // @synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) long long totalBytesDownloaded; // @synthesize totalBytesDownloaded=_totalBytesDownloaded;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
- (void).cxx_destruct;
- (void)cancelRemainingTasksNotifyingDelegate:(_Bool)arg1;
- (void)updateProgressAndNotifyDelegate;
- (void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)taskWithDescription:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)taskWithDescription:(id)arg1 didCompleteWithError:(id)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)hasActiveTaskWithDescription:(id)arg1;
- (void)didFinishInitialization;
- (void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2;
- (id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(_Bool)arg4 delegate:(id)arg5;
- (id)description;
- (void)cancel;
- (id)waitUntilTimeout:(unsigned long long)arg1;
- (void)notifyCompletionWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isActive;
- (void)dealloc;
- (id)init;

@end

