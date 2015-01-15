//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXHADeviceControllerProtocol.h"
#import "CBCentralManagerDelegate.h"

@class AXHATimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate, AXHADeviceControllerProtocol>
{
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    _Bool _isScanning;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSMutableArray *_availableSearchBlocks;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableArray *_updateDeviceBlocks;
    AXHATimer *_deviceUpdatesTimer;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXHATimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_connectedDevices;
    NSMutableArray *centralRequestBlocks;
    NSMutableArray *_persistentDevices;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *persistentDevices; // @synthesize persistentDevices=_persistentDevices;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) NSMutableArray *connectedSearchBlocks; // @synthesize connectedSearchBlocks=_connectedSearchBlocks;
@property(retain, nonatomic) NSMutableArray *availableSearchBlocks; // @synthesize availableSearchBlocks=_availableSearchBlocks;
@property(retain, nonatomic) NSMutableArray *centralRequestBlocks; // @synthesize centralRequestBlocks;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain) NSMutableArray *loadedDevices; // @synthesize loadedDevices=_loadedDevices;
@property(retain, nonatomic) NSMutableArray *availablePeripherals; // @synthesize availablePeripherals=_availablePeripherals;
- (void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(long long)arg1 forDeviceID:(id)arg2;
- (void)pairedHearingAidsDidChange;
- (void)unpairPeripheral:(id)arg1;
- (_Bool)peripheralIsPaired:(id)arg1;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)sendRequestToCentralManager:(CDUnknownBlockType)arg1;
- (void)forgetDevice:(id)arg1;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)mergeDevice:(id)arg1 withDevice:(id)arg2;
- (void)device:(id)arg1 didUpdateProperty:(long long)arg2;
- (void)clearConnectedDevices;
- (void)removeConnectedDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)clearAvailableDevices;
- (void)removeAvailableDevice:(id)arg1;
- (void)addAvailableDevice:(id)arg1;
- (void)clearLoadedDevices;
- (void)removeLoadedDevice:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (void)loadedDevicesDidChange;
- (id)hearingAidForDeviceID:(id)arg1;
- (id)hearingAidForPeripheral:(id)arg1;
- (id)hearingAidsForUUID:(id)arg1;
- (_Bool)isConnected;
- (_Bool)isScanning;
- (void)stopPropertyUpdates;
- (void)stopSearching;
- (_Bool)isBluetoothAvailable;
- (void)cancelPendingConnections;
- (void)disconnectFromPeripheral:(id)arg1;
- (void)connectToPeripheral:(id)arg1;
- (void)resetConnectionToPeripheral:(id)arg1;
- (void)searchForConnectedDevices;
- (void)searchForAvailableDevices;
- (void)clearMissingHearingAids;
- (void)dealloc;
- (id)init;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)searchForAvailableDevicesWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

