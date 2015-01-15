//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDatabaseProtectedDataObserver.h"

@class HDDatabase, HDHealthDeviceManager, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HDDeviceConnectionManager : NSObject <HDDatabaseProtectedDataObserver>
{
    _Bool _connecting;
    _Bool _BTLEEnabled;
    HDHealthDeviceManager *_deviceMgr;
    HDDatabase *_database;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

+ (id)_transactionName:(id)arg1;
+ (id)sharedDeviceManager;
+ (void)connectToService:(id)arg1;
+ (void)disconnectFromService:(id)arg1;
+ (void)disconnectFromServices;
+ (void)connectToServicesWithDeviceManager:(id)arg1 healthDatabase:(id)arg2;
- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_subscribeBluetoothStateUpdates;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

