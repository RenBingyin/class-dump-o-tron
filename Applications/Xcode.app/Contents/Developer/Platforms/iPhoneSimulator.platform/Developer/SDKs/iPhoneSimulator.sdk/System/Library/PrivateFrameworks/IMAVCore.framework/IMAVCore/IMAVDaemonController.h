//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAVDaemonListener, IMLocalObject, IMRemoteObject<IMAVDaemonProtocol>, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSString;

@interface IMAVDaemonController : NSObject
{
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource *_runLoopSource;
    _Bool _hasCheckedForDaemon;
    _Bool _acquiringDaemonConnection;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(readonly, nonatomic) IMAVDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (void)_disconnectFromDaemon;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (_Bool)_makeConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)hasListenerForID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (_Bool)localObjectExists;
- (_Bool)remoteObjectExists;
- (void)_noteSetupComplete;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (_Bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

