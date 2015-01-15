//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection;

@interface PKInAppPaymentService : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

- (void)_unregisterForPaymentServiceNotifications;
- (void)_registerForInAppPaymentServiceNotifications;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_sendSuspended;
- (void)_sendResumed;
- (id)_connectionWithTeardownExisting:(_Bool)arg1 createNewIfNecessary:(_Bool)arg2;
- (id)_connection;
- (void)_establishPaymentServiceConnection;
- (void)_tearDownPaymentServiceConnection;
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

