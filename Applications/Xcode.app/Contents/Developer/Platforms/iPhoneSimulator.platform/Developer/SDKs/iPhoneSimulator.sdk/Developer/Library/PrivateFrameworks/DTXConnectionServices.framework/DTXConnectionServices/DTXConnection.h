//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTXConnectionRemoteReceiveQueueCalls.h"
#import "DTXMessenger.h"

@class DTXChannel, DTXMessageParser, DTXMessageTransmitter, DTXResourceTracker, DTXTransport, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface DTXConnection : NSObject <DTXConnectionRemoteReceiveQueueCalls, DTXMessenger>
{
    NSObject<OS_dispatch_queue> *_outgoing_message_queue;
    NSObject<OS_dispatch_queue> *_outgoing_control_queue;
    DTXTransport *_controlTransport;
    NSObject<OS_dispatch_queue> *_receive_queue;
    NSObject<OS_dispatch_queue> *_handler_queue;
    unsigned int _nextChannelCode;
    NSMutableDictionary *_channelsByCode;
    NSMutableDictionary *_unconfiguredChannelsByCode;
    NSMutableDictionary *_handlersByIdentifier;
    NSMutableDictionary *_protocolHandlers;
    NSMutableDictionary *_localCapabilityVersions;
    NSMutableDictionary *_localCapabilityClasses;
    NSDictionary *_remoteCapabilityVersions;
    DTXResourceTracker *_resourceTracker;
    DTXResourceTracker *_incomingResourceTracker;
    NSObject<OS_dispatch_semaphore> *_firstMessageSem;
    DTXMessageParser *_incomingParser;
    DTXMessageTransmitter *_outgoingTransmitter;
    DTXChannel *_defaultChannel;
    _Bool _legacyMode;
    _Bool _tracer;
    _Bool _remoteTracer;
    int _connectionIndex;
    CDUnknownBlockType _channelHandler;
}

+ (id)connectionPublishingAddress:(id)arg1;
+ (id)connectionToAddress:(id)arg1;
+ (void)registerTransport:(Class)arg1 forScheme:(id)arg2;
+ (void)initialize;
@property(readonly, nonatomic) int atomicConnectionNumber; // @synthesize atomicConnectionNumber=_connectionIndex;
@property(copy) CDUnknownBlockType channelHandler; // @synthesize channelHandler=_channelHandler;
@property(nonatomic) _Bool remoteTracer; // @synthesize remoteTracer=_remoteTracer;
@property(nonatomic) _Bool tracer; // @synthesize tracer=_tracer;
@property(nonatomic) _Bool legacyMode; // @synthesize legacyMode=_legacyMode;
- (void)_setTracerState:(unsigned int)arg1;
- (void)_channelCanceled:(unsigned int)arg1;
- (void)_notifyOfPublishedCapabilities:(id)arg1;
- (void)_requestChannelWithCode:(unsigned int)arg1 identifier:(id)arg2;
- (void)_unregisterChannel:(id)arg1;
- (id)makeChannelWithIdentifier:(id)arg1;
- (void)_scheduleMessage:(id)arg1 toChannel:(id)arg2;
- (void)_routeMessage:(id)arg1;
- (_Bool)_addHandler:(CDUnknownBlockType)arg1 forMessage:(unsigned int)arg2 channel:(id)arg3;
- (_Bool)sendMessage:(id)arg1 fromChannel:(id)arg2 sendMode:(int)arg3 syncWithReply:(_Bool)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (_Bool)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)setDispatchTarget:(id)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
- (long long)remoteCapabilityVersion:(id)arg1;
- (id)localCapabilities;
- (void)publishCapability:(id)arg1 withVersion:(long long)arg2 forClass:(Class)arg3;
@property(nonatomic) unsigned long long maximumEnqueueSize;
@property(readonly, copy) NSString *description;
- (id)publishedAddresses;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;
- (void)_setupWireProtocols;
- (void)publishServicesInBundle:(id)arg1;
- (id)makeProxyChannelWithRemoteInterface:(id)arg1 exportedInterface:(id)arg2;
- (void)handleProxyRequestForInterface:(id)arg1 peerInterface:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

