//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

#import "NSURLSessionDataTaskSubclass.h"
#import "NSURLSessionTaskSubclass.h"
#import "NSURLSessionUploadTaskSubclass.h"
#import "SessionConnectionDelegate.h"

@class NSData, NSInputStream, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_source>, NSString, NSURL, NSURLSessionConfiguration, __NSCFURLSessionConnection, __NSURLSessionLocal;

__attribute__((visibility("hidden")))
@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate>
{
    _Bool _pendingResponseDisposition;
    _Bool _pendingResponseDisposition_didFinish;
    _Bool _duetAccountingIsDiscretionary;
    _Bool _didIssueDidFinish;
    __NSCFURLSessionConnection *_cfConn;
    NSURL *_uploadFile;
    NSData *_uploadData;
    NSInputStream *_uploadDataStream;
    NSObject<OS_dispatch_data> *_dataTaskData;
    CDUnknownBlockType _dataTaskCompletion;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    __NSURLSessionLocal *_localSession;
    unsigned long long _suspendCount;
    CDUnknownBlockType _async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    NSString *_duetAccountedBundleID;
    struct HTTPConnectionCacheKey *_connKey;
    NSURLSessionConfiguration *__configuration;
}

@property(retain) NSURLSessionConfiguration *_configuration; // @synthesize _configuration=__configuration;
@property struct HTTPConnectionCacheKey *connKey; // @synthesize connKey=_connKey;
@property _Bool didIssueDidFinish; // @synthesize didIssueDidFinish=_didIssueDidFinish;
@property _Bool duetAccountingIsDiscretionary; // @synthesize duetAccountingIsDiscretionary=_duetAccountingIsDiscretionary;
@property(retain) NSString *duetAccountedBundleID; // @synthesize duetAccountedBundleID=_duetAccountedBundleID;
@property NSObject<OS_dispatch_source> *resourceTimeout; // @synthesize resourceTimeout=_resourceTimeout;
@property(copy) CDUnknownBlockType async_initialization; // @synthesize async_initialization=_async_initialization;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property(retain) __NSURLSessionLocal *localSession; // @synthesize localSession=_localSession;
@property NSObject<OS_dispatch_data> *pendingResponseBytes; // @synthesize pendingResponseBytes=_pendingResponseBytes;
@property _Bool pendingResponseDisposition_didFinish; // @synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish;
@property _Bool pendingResponseDisposition; // @synthesize pendingResponseDisposition=_pendingResponseDisposition;
@property(copy) CDUnknownBlockType dataTaskCompletion; // @synthesize dataTaskCompletion=_dataTaskCompletion;
@property NSObject<OS_dispatch_data> *dataTaskData; // @synthesize dataTaskData=_dataTaskData;
@property(retain) NSInputStream *uploadDataStream; // @synthesize uploadDataStream=_uploadDataStream;
@property(retain) NSData *uploadData; // @synthesize uploadData=_uploadData;
@property(retain) NSURL *uploadFile; // @synthesize uploadFile=_uploadFile;
@property(retain) __NSCFURLSessionConnection *cfConn; // @synthesize cfConn=_cfConn;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;
- (void)connectionWaiting:(id)arg1;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey *)arg2;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)startResourceTimer;
- (void)setConnection:(id)arg1;
- (id)timeoutError;
- (id)posixError:(int)arg1;
- (id)canceledError;
- (id)nsurlError:(int)arg1;
- (id)error:(id)arg1 code:(long long)arg2;
- (void)_onqueue_completeInitialization;
- (void)cancel_with_error:(id)arg1;
- (void)_onqueue_disavow;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (void)_onqueue_cancel;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_conditionalRequirementsChanged:(_Bool)arg1;
- (void)_onqueue_connectionWaiting;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_private_onqueue_didReceiveResponse:(id)arg1;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1;
- (void)_finishBecomeStream:(id)arg1;
- (void)_finishBecomeDownload:(id)arg1;
- (void)_finishAllow;
- (id)_onqueue_strippedMutableRequest;
@property(readonly, copy) NSString *description;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

