//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask
{
    _Bool _backgroundTask;
    CPLResource *_cloudResource;
    id <CPLEngineTransportTask> _transportTask;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(readonly, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;
@property(retain, nonatomic) id <CPLEngineTransportTask> transportTask; // @synthesize transportTask=_transportTask;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)launch;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

