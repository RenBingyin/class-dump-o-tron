//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCLifeCycle.h"
#import "BRCTransferQueueDelegate.h"

@class BRCLocalContainer, BRCTransferQueue, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BRCVersionDownloader : NSObject <BRCTransferQueueDelegate, BRCLifeCycle>
{
    BRCTransferQueue *_transferQueue;
    BRCLocalContainer *_container;
    NSMutableDictionary *_multiplexerForDesiredKeys;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_queue;
- (void).cxx_destruct;
- (void)transferQueueDidRequestOperations:(id)arg1;
- (void)_scheduleAllDownloads;
- (_Bool)_scheduleDownloadForItem:(id)arg1;
- (id)cancelAllDownloads;
- (void)cancelDownloadForItemID:(id)arg1;
- (_Bool)isDownloadingItemID:(id)arg1;
- (_Bool)isDownloadingAddition:(id)arg1;
- (void)signalNeedsDownloads;
- (void)_downloadCompletedForItemID:(id)arg1 etag:(id)arg2 downloadedObject:(id)arg3 error:(id)arg4;
- (id)multiplexerForDesiredKeys:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithLocalContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

