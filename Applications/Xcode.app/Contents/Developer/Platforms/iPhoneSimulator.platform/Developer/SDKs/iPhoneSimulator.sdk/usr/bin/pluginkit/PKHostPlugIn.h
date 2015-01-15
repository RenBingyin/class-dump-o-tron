//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKPlugInCore.h"

#import "NSXPCConnectionDelegate.h"
#import "PKPlugInPrivate.h"

@class NSArray, NSBundle, NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate>
{
    unsigned int _useCount;
    NSUserDefaults *_defaults;
    CDUnknownBlockType _notificationBlock;
    NSXPCConnection *_pluginConnection;
    NSObject<OS_dispatch_queue> *__replyQueue;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__startQueue;
    id <PKCorePlugInProtocol> _service;
    NSUUID *_supersedingUUID;
    id <PKPlugIn> _supersededBy;
    NSDictionary *_discoveryExtensions;
    NSArray *_sandboxExtensions;
    id _queuedHostPrincipal;
    Protocol *_queuedHostProtocol;
    unsigned long long _state;
    id _plugInPrincipal;
    id _embeddedPrincipal;
    NSBundle *_embeddedBundle;
    NSDate *_beganUsingAt;
}

@property(retain) NSDate *beganUsingAt; // @synthesize beganUsingAt=_beganUsingAt;
@property(retain) NSBundle *embeddedBundle; // @synthesize embeddedBundle=_embeddedBundle;
@property(retain) id embeddedPrincipal; // @synthesize embeddedPrincipal=_embeddedPrincipal;
@property(retain) id plugInPrincipal; // @synthesize plugInPrincipal=_plugInPrincipal;
@property unsigned int useCount; // @synthesize useCount=_useCount;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) Protocol *queuedHostProtocol; // @synthesize queuedHostProtocol=_queuedHostProtocol;
@property(retain) id queuedHostPrincipal; // @synthesize queuedHostPrincipal=_queuedHostPrincipal;
@property(retain) NSArray *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(retain) NSDictionary *discoveryExtensions; // @synthesize discoveryExtensions=_discoveryExtensions;
@property(retain) id <PKPlugIn> supersededBy; // @synthesize supersededBy=_supersededBy;
@property(retain) NSUUID *supersedingUUID; // @synthesize supersedingUUID=_supersedingUUID;
@property(retain) id <PKCorePlugInProtocol> service; // @synthesize service=_service;
@property(retain) NSObject<OS_dispatch_queue> *_startQueue; // @synthesize _startQueue=__startQueue;
@property(retain) NSObject<OS_dispatch_queue> *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property(retain) NSObject<OS_dispatch_queue> *_replyQueue; // @synthesize _replyQueue=__replyQueue;
@property(retain) NSXPCConnection *pluginConnection; // @synthesize pluginConnection=_pluginConnection;
@property(copy) CDUnknownBlockType notificationBlock; // @synthesize notificationBlock=_notificationBlock;
- (void).cxx_destruct;
- (void)changeState:(unsigned long long)arg1;
- (void)messageTraceUsage;
- (void)unwind:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)endUsing:(CDUnknownBlockType)arg1;
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;
- (_Bool)loadExtensions:(id)arg1 error:(id *)arg2;
- (void)setBootstrap;
- (void)preparePlugin:(CDUnknownBlockType)arg1;
- (void)startPlugIn:(CDUnknownBlockType)arg1;
- (void)beginUsing:(CDUnknownBlockType)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)setReplyQueue:(id)arg1;
@property(readonly) _Bool active;
- (void)resume;
- (void)suspend;
@property(retain) NSDictionary *extensionState;
@property long long userElection;
@property(readonly) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, copy) NSString *description;
- (id)initWithForm:(id)arg1;

// Remaining properties
@property(readonly) NSDictionary *attributes;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly) NSURL *containingUrl;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *identifier;
@property(readonly) NSString *localizedContainingName;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *localizedShortName;
@property(readonly) _Bool onSystemVolume;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) Class superclass;
@property(readonly) NSDate *timestamp;
@property(readonly) NSURL *url;
@property(readonly) NSUUID *uuid;
@property(readonly) NSString *version;

@end

