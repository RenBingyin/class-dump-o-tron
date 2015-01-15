//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@class NSMapTable;

@interface BKSProcessAssertionClient : BSBaseXPCClient
{
    NSMapTable *_assertionHandlersByIdentifier;
}

+ (id)clientQueue;
+ (id)sharedInstance;
- (void)_invalidate;
- (void)_sendEvent:(id)arg1 forMessageType:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)_errorWithCode:(unsigned long long)arg1;
- (void)_dispatchClientCalloutBlock:(CDUnknownBlockType)arg1;
- (void)_handleDestroy:(id)arg1;
- (void)queue_connectionWasDestroyed;
- (void)queue_handleMessage:(id)arg1;
- (id)description;
- (void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;
- (void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
- (double)backgroundTimeRemaining:(int)arg1;
- (void)sendDestroyAssertion:(id)arg1;
- (void)sendUpdateAssertion:(id)arg1;
- (void)sendCreateAssertion:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;

@end

