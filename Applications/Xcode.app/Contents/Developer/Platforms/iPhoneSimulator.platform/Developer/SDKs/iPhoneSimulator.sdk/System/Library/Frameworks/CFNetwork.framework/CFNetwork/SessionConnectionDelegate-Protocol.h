//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSCachedURLResponse, NSError, NSHTTPURLResponse, NSNumber, NSObject<OS_dispatch_data>, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, __NSCFURLSessionConnection;

@protocol SessionConnectionDelegate <NSObject, NSCopying>
- (void)connection:(__NSCFURLSessionConnection *)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connectionWaiting:(__NSCFURLSessionConnection *)arg1;
- (void)connection:(__NSCFURLSessionConnection *)arg1 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg2 completion:(void (^)(NSURLRequest *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 sentBodyBytes:(NSNumber *)arg2 totalBytes:(NSNumber *)arg3 expectedBytes:(NSNumber *)arg4;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveData:(NSObject<OS_dispatch_data> *)arg2 completion:(void (^)(void))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 challenged:(NSURLAuthenticationChallenge *)arg2 authCallback:(void (^)(long long, NSURLCredential *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)connectionWillFinishLoading:(__NSCFURLSessionConnection *)arg1;
- (void)connection:(__NSCFURLSessionConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2 responseCallback:(void (^)(NSCachedURLResponse *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completion:(void (^)(struct SessionResponseOptions))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 request:(NSURLRequest *)arg2 needsNewBodyStreamCallback:(void (^)(NSInputStream *))arg3;
- (void)connection:(__NSCFURLSessionConnection *)arg1 wasRedirected:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 responseCallback:(void (^)(NSURLRequest *))arg4;
@end

