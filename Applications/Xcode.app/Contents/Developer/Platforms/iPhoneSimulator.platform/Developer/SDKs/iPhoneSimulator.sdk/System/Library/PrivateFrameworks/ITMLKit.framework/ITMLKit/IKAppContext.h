//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISURLOperationDelegate.h"

@class IKJSFoundation, JSContext, NSError, NSMutableArray, NSString;

@interface IKAppContext : NSObject <ISURLOperationDelegate>
{
    struct __CFRunLoop *_jsThreadRunLoop;
    struct __CFRunLoopSource *_jsThreadRunLoopSource;
    _Bool _isValid;
    _Bool _remoteInspectionEnabled;
    _Bool _canAccessPendingQueue;
    id <IKApplication> _app;
    unsigned long long _mode;
    id <IKAppContextDelegate> _delegate;
    JSContext *_jsContext;
    NSMutableArray *_postEvaluationBlocks;
    IKJSFoundation *_jsFoundation;
    NSString *_responseScript;
    NSError *_responseError;
    id _reloadData;
    NSMutableArray *_pendingQueue;
}

+ (id)currentAppContext;
@property(retain, nonatomic) NSMutableArray *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(retain, nonatomic) id reloadData; // @synthesize reloadData=_reloadData;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(copy, nonatomic) NSString *responseScript; // @synthesize responseScript=_responseScript;
@property(nonatomic) _Bool canAccessPendingQueue; // @synthesize canAccessPendingQueue=_canAccessPendingQueue;
@property(retain, nonatomic) IKJSFoundation *jsFoundation; // @synthesize jsFoundation=_jsFoundation;
@property(retain, nonatomic) NSMutableArray *postEvaluationBlocks; // @synthesize postEvaluationBlocks=_postEvaluationBlocks;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(nonatomic) _Bool remoteInspectionEnabled; // @synthesize remoteInspectionEnabled=_remoteInspectionEnabled;
@property _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) __weak id <IKAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) __weak id <IKApplication> app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(CDUnknownBlockType)arg1;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_jsThreadMain;
- (void)_stopAndReload:(_Bool)arg1;
- (void)_addStopRecordToPendingQueueWithReload:(_Bool)arg1;
- (void)_startWithScript:(id)arg1;
- (void)_startWithURL:(id)arg1 urlTrusted:(_Bool)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 data:(id)arg2;
- (_Bool)validateDOMDocument:(id)arg1 error:(id *)arg2;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)addPostEvaluateBlock:(CDUnknownBlockType)arg1;
- (void)evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (void)evaluate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)reload;
- (void)resumeWithOptions:(id)arg1;
- (void)suspendWithOptions:(id)arg1;
- (void)start;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)evaluateFoundationJS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

