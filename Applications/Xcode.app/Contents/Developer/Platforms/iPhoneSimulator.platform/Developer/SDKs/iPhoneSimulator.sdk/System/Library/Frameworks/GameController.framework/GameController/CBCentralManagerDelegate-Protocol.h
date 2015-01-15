//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCentralManager, CBPeripheral, NSArray, NSDictionary, NSError, NSNumber;

@protocol CBCentralManagerDelegate <NSObject>
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg1;

@optional
- (void)centralManager:(CBCentralManager *)arg1 didDisconnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFailToConnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didConnectPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 didRetrieveConnectedPeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didRetrievePeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

