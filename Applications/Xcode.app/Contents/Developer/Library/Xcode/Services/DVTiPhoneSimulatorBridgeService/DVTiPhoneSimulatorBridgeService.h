//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTService.h"

@class DVTPlistMessageAdaptor, NSFileHandle, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface DVTiPhoneSimulatorBridgeService : DVTService
{
    DVTPlistMessageAdaptor *_primaryAdaptor;
    NSFileHandle *_socket;
    NSMutableDictionary *_monitors;
    NSMutableDictionary *_tasks;
    NSObject<OS_dispatch_queue> *_descriptorQueue;
    NSString *_descriptorSocketPath;
    int _descriptorSocket;
    NSMutableDictionary *_descriptorPaths;
    int _descriptors[3];
}

- (void).cxx_destruct;
- (void)stopMonitoringProcessID:(int)arg1;
- (void)startMonitoringProcessID:(int)arg1;
- (BOOL)startSimulatorToolSessionWithUUID:(id)arg1;
- (void)_receiveDescriptorsAsynchronouslyWithCount:(unsigned long long)arg1;
- (BOOL)_listenOnDescriptorSocket:(id *)arg1;
- (BOOL)prepareSimulatorToolSessionWithRequestInfo:(id)arg1;
- (void)relayNotification:(id)arg1;
- (void)stopMonitoringSimulatorNotifications;
- (void)startMonitoringSimulatorNotifications;
- (void)_stopObservingSimulatorNotificationWithName:(id)arg1;
- (void)_observeSimulatorNotificationWithName:(id)arg1 selector:(SEL)arg2;
- (BOOL)sendStopLocation;
- (BOOL)sendStartLocationWithLatitude:(id)arg1 longitude:(id)arg2;
- (BOOL)sendStopSimulatorSessionWithPID:(int)arg1;
- (BOOL)sendStartSimulatorSessionWithRequestInfo:(id)arg1;
- (void)_postSimulatorNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (BOOL)launchSimulatorAtPath:(id)arg1 withSessionOnLaunch:(BOOL)arg2 simulatorPID:(int *)arg3 error:(id *)arg4;
- (void)nextRunLoopPerformBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)terminate;
- (id)sendRequestedMessage:(id)arg1;
- (void)encapsulateError:(id)arg1 inErrorData:(id)arg2;
- (id)handleRequest:(id)arg1;
- (id)init;

@end

