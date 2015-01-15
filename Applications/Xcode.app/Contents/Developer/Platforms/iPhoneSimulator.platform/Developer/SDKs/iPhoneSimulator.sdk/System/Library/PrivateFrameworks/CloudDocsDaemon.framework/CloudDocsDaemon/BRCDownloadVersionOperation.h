//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCDownloadContext, NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersionOperation : BRCOperation <BRCOperationSubclass>
{
    BRCDownloadContext *_context;
    NSString *_etag;
    _Bool _isConflict;
    CDUnknownBlockType _downloadCompletionBlock;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_putRecordInGenstore:(id)arg1 stageURL:(id)arg2 statInfo:(id)arg3 version:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_stageRecord:(id)arg1 error:(id *)arg2;
- (id)_stageFileWithRecord:(id)arg1 error:(id *)arg2;
- (id)_stagePackageWithRecord:(id)arg1 error:(id *)arg2;
- (id)initWithDownloadContext:(id)arg1 etag:(id)arg2 isConflict:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

