//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSUDownloadSession;

@protocol TSPDocumentResourceDownloader <NSObject>
@property(readonly, nonatomic) _Bool isEstimatedDownloadSizePrecise;
@property(readonly, nonatomic) long long estimatedDownloadSize;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)cancelDownloads;
- (TSUDownloadSession *)downloadWithDelegate:(id <TSUDownloadSessionDelegate>)arg1 description:(NSString *)arg2;
@end

