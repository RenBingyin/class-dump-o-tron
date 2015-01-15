//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BKProximitySensorInterface : NSObject
{
    int _lockedMode;
    int _currentMode;
    int _lastSetMode;
    NSMutableDictionary *_pidToClients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    _Bool _pocketTouchesExpected;
}

+ (id)sharedInstance;
- (void)clientDied:(id)arg1;
- (void)clientEstablished:(id)arg1;
- (void)enableProximityDetectionWithMode:(int)arg1;
- (void)disableProximityDetection;
- (void)setPocketTouchesExpected:(_Bool)arg1;
- (void)requestProximityMode:(int)arg1;
- (_Bool)clientRequestedProximityMode:(int)arg1 processID:(int)arg2 clientPort:(unsigned int)arg3;
- (void)_updateClientPID:(int)arg1 clientPort:(id)arg2 withDetectionMode:(int)arg3;
- (id)_existingClientForPID:(int)arg1;
- (_Bool)_removeClient:(id)arg1;
- (_Bool)_queue_removeClient:(id)arg1;
- (_Bool)_queue_addClient:(id)arg1;
- (void)_updateProximityDetectionMode;
- (void)_queue_updateProximityDetectionMode;
- (_Bool)isDetectionActive;
- (int)requestedMode;
- (int)currentMode;
- (int)_queue_currentMode;
- (void)dealloc;
- (id)init;

@end

