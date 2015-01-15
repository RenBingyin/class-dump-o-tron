//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsPushDaemonProxy.h"
#import "MapsPushDaemonProxyObserver.h"

@class NSMutableArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MapsPushDaemonRemoteProxy : NSObject <MapsPushDaemonProxyObserver, MapsPushDaemonProxy>
{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)resetShownAnnouncements;
- (void)clearCurrentAnnouncement;
- (void)simulateAnnouncement:(id)arg1;
- (void)checkin;
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;
- (void)fetchProblemStatus;
- (void)simulateProblemResolution;
- (void)registerForTopic;
- (void)_connectToDaemonIfNeeded;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)init;

@end

