//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURL, NSURLRequest;

@protocol NDBackgroundSessionProtocol <NSObject>
- (void)avAssetDownloadTaskWithURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3 identifier:(unsigned long long)arg4 reply:(void (^)(_Bool))arg5;
- (void)invalidateWithReply:(void (^)(void))arg1;
- (void)resetStorageWithReply:(void (^)(void))arg1;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)setDescription:(NSString *)arg1 forTask:(unsigned long long)arg2;
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1;
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(void (^)(NSData *))arg2;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;
- (void)downloadTaskWithResumeData:(NSData *)arg1 identifier:(unsigned long long)arg2 reply:(void (^)(_Bool))arg3;
- (void)dataTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 identifier:(unsigned long long)arg3 reply:(void (^)(_Bool))arg4;
- (void)uploadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 fromFile:(NSURL *)arg3 sandboxExtensionData:(NSData *)arg4 identifier:(unsigned long long)arg5 reply:(void (^)(_Bool))arg6;
- (void)downloadTaskWithRequest:(NSURLRequest *)arg1 originalRequest:(NSURLRequest *)arg2 downloadFilePath:(NSString *)arg3 identifier:(unsigned long long)arg4 reply:(void (^)(_Bool))arg5;
@end

