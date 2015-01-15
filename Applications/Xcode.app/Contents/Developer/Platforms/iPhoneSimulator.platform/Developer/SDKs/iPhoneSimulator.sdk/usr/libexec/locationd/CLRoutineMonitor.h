//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLLocationManagerRoutineServerInterface.h"
#import "CLRoutineMonitorServiceProtocol.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_source>, NSString, NSXPCConnection, NSXPCListener, RTRoutineManager;

@interface CLRoutineMonitor : CLIntersiloService <NSXPCListenerDelegate, CLLocationManagerRoutineServerInterface, CLRoutineMonitorServiceProtocol>
{
    NSObject<OS_dispatch_source> *_wakeRoutinedTimer;
    struct CLServiceLocationProvider *_serviceLocationProvider;
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client>> _filteredLocationClient;
    struct unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;
    struct CLPersistentTimer *_visitMonitorWakeTimer;
    _Bool _updating;
    _Bool _authorized;
    _Bool _armed;
    _Bool _diminishedMode;
    _Bool _visitMonitorWakeTimerEnabled;
    _Bool _wifiPowerEnabled;
    NSXPCConnection *_connection;
    NSMutableArray *_locations;
    NSXPCListener *_listener;
    RTRoutineManager *_routineManager;
    NSMutableSet *_visitClients;
}

+ (id)bundlePath;
+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (id)getSilo;
@property(nonatomic) _Bool wifiPowerEnabled; // @synthesize wifiPowerEnabled=_wifiPowerEnabled;
@property(nonatomic) _Bool visitMonitorWakeTimerEnabled; // @synthesize visitMonitorWakeTimerEnabled=_visitMonitorWakeTimerEnabled;
@property(retain, nonatomic) NSMutableSet *visitClients; // @synthesize visitClients=_visitClients;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(nonatomic) _Bool diminishedMode; // @synthesize diminishedMode=_diminishedMode;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkVisitMonitorWakeTimerEnabled;
- (void)checkDiminishedMode;
- (void)onWakeRoutinedTimer;
- (void)stopWakeRoutinedTimer;
- (void)startWakeRoutinedTimer;
- (void)sendLocations;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;
- (void)checkAuthorization;
- (void)flush;
- (void)onLocationNotification:(int)arg1 data:(NotificationData_edcc4bb6)arg2;
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;
- (void)addLocation:(id)arg1;
- (void)dealloc;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)fetchRoutineModeFromLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)onVisitMonitorWakeTimerExpiry;
- (void)updateVisitMonitorWakeTimer;
- (void)stopVisitMonitorWakeTimer;
- (void)startVisitMonitorWakeTimer;
- (void)stopMonitoringVisitsForClient:(byref id)arg1;
- (void)startMonitoringVisitsForClient:(byref id)arg1;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

