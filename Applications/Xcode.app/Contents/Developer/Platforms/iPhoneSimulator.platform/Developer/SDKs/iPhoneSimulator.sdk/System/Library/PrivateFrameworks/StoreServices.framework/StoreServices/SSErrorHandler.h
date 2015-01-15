//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSErrorHandler : NSObject
{
    SSXPCConnection *_controlConnection;
    id <SSErrorHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

- (void)_tearDownConnections;
- (void)_sendDisconnectMessage;
- (void)_reconnectToDaemonWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_openSessionWithMessage:(id)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_dispatchToDelegate:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(copy) NSArray *failureTypes;
@property id <SSErrorHandlerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

