//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPStoreDownloadManagerObserver.h"
#import "NSCopying.h"

@class NSArray, NSMutableSet, NSString, NSURL, SSDownload;

@interface MPItemDownloadProperties : NSObject <MPStoreDownloadManagerObserver, NSCopying>
{
    long long _assetFileSize;
    NSURL *_destinationURL;
    SSDownload *_download;
    _Bool _downloadExists;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(readonly, nonatomic) long long downloadSizeLimit; // @synthesize downloadSizeLimit=_downloadSizeLimit;
@property(readonly, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) _Bool downloadExists; // @synthesize downloadExists=_downloadExists;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) long long assetFileSize; // @synthesize assetFileSize=_assetFileSize;
- (void).cxx_destruct;
- (void)_reloadNetworkConstraints;
- (void)_attemptToFindDownloadTokenForPossibleDownloads:(id)arg1;
- (id)newAVAssetOptionsWithDownloadStyle:(long long)arg1;
- (void)acquireDownloadTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

