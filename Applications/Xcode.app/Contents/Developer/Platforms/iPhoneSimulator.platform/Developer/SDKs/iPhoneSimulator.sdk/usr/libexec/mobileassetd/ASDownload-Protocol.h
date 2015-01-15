//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASAssetRepository, NSDictionary, NSError, NSString, NSURL, NSURLRequest;

@protocol ASDownload <NSObject>
@property(readonly, retain, nonatomic) ASAssetRepository *assetRepository;
@property(readonly, nonatomic) NSURL *localCacheServerURL;
@property(readonly, nonatomic) NSURL *remoteURL;
@property(readonly, nonatomic) NSURL *archiveURL;
@property(readonly, nonatomic) struct __MobileAsset *mobileAsset;
@property(nonatomic) _Bool downloadDidEnd;
@property(readonly, nonatomic, getter=isStalled) _Bool stalled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isCancelled) _Bool cancelled;
- (NSURLRequest *)downloadRequestForURL:(NSURL *)arg1 useQueuingService:(_Bool)arg2 error:(id *)arg3;
- (_Bool)verifyFreeDiskSpace:(long long)arg1 error:(id *)arg2;
- (void)fireErrorWithError:(NSError *)arg1;
- (void)fireErrorInDomain:(NSString *)arg1 errorCode:(long long)arg2 userInfo:(NSDictionary *)arg3;
- (void)fireProgressWithOperation:(NSString *)arg1 progress:(float)arg2 callbackState:(NSDictionary *)arg3;
- (void)downloadDidFail:(NSError *)arg1;
- (void)downloadDidFinish;
- (int)resumeAfterDownload;
@end

