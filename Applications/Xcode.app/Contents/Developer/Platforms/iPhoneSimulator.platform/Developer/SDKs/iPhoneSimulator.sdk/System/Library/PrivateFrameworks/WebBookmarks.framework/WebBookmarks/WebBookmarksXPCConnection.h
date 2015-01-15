//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_xpc_object>;

@interface WebBookmarksXPCConnection : NSObject
{
    id <WebBookmarksXPCConnectionDelegate> _delegate;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_entitlementLookupCache;
    NSObject<OS_xpc_object> *_connection;
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)sendMessageWithSynchronousReply:(id)arg1;
- (void)sendMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (id)messageReplyingTo:(id)arg1;
- (id)messageWithName:(const char *)arg1;
- (_Bool)hasBoolEntitlement:(id)arg1;
- (void)setMessageHandlers:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1 forMessageNamed:(const char *)arg2;
- (void)invalidate;
- (void)_handleMessage:(id)arg1;
- (void)dealloc;
- (id)initClientForMachService:(const char *)arg1 delegate:(id)arg2;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

@end

