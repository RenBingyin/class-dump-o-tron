//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportUploadBatchTask.h"

@class CPLChangeBatch, NSString;

@interface CPLCloudKitUploadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportUploadBatchTask>
{
    CDUnknownBlockType _completionHandler;
    CPLChangeBatch *_batch;
}

@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (void).cxx_destruct;
- (void)run;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

