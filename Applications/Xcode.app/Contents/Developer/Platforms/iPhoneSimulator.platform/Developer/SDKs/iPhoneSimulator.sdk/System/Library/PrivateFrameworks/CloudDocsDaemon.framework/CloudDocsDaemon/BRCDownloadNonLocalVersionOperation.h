//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCDownloadVersionOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadNonLocalVersionOperation : BRCDownloadVersionOperation
{
    NSMutableDictionary *_readers;
}

- (void).cxx_destruct;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)cancelReaderID:(id)arg1;
- (void)addReaderID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDownloadContext:(id)arg1 etag:(id)arg2 isConflict:(_Bool)arg3;

@end

