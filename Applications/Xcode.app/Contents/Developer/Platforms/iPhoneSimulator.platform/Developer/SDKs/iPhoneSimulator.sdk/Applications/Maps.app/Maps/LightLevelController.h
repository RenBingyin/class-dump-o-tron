//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAmbientLightMonitorObserver.h"
#import "MKLocationManagerObserver.h"

@class CLLocation, NSDate, NSMapTable, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface LightLevelController : NSObject <MKAmbientLightMonitorObserver, MKLocationManagerObserver>
{
    long long _currentLightLevel;
    NSMapTable *_observers;
    NSMapTable *_observersSupport;
    _Bool _automaticDetectionEnabled;
    _Bool _isObservingAmbientLight;
    long long _ambientLightLevel;
    NSTimer *_periodicUpdateTimer;
    CLLocation *_location;
    _Bool _wasLastKnownCheckAtDaylight;
    NSDate *_dateOfLastKnownDaylightCheck;
    CLLocation *_locationOfLastKnownDaylightCheck;
    _Bool _alwaysLowLevelAtNight;
    _Bool _debugSimulateLowLighting;
    _Bool _debugAlwaysReportRegularLevel;
    _Bool _debugIgnoreCarLevel;
}

@property(nonatomic) _Bool debugIgnoreCarLevel; // @synthesize debugIgnoreCarLevel=_debugIgnoreCarLevel;
@property(nonatomic) _Bool debugAlwaysReportRegularLevel; // @synthesize debugAlwaysReportRegularLevel=_debugAlwaysReportRegularLevel;
@property(nonatomic) _Bool debugSimulateLowLighting; // @synthesize debugSimulateLowLighting=_debugSimulateLowLighting;
@property(nonatomic) _Bool alwaysLowLevelAtNight; // @synthesize alwaysLowLevelAtNight=_alwaysLowLevelAtNight;
@property(nonatomic) _Bool automaticDetectionEnabled; // @synthesize automaticDetectionEnabled=_automaticDetectionEnabled;
@property(readonly, nonatomic) long long currentLightLevel; // @synthesize currentLightLevel=_currentLightLevel;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)ambientLightMonitorUpdated:(id)arg1;
- (_Bool)_getLevelByUpdatingFromAstronomicalAndSensorLight:(out long long *)arg1;
- (void)_stopMonitoringAmbientLight;
- (_Bool)_getValidLastKnownDaylightState:(out _Bool *)arg1;
- (void)_timeDidChangeSignificantly;
- (void)_setLastKnownDaylightState:(_Bool)arg1;
- (void)_setCurrentLightLevel:(long long)arg1;
- (void)_update;
- (void)_updateExternalAccessory:(id)arg1;
- (long long)_updateFromAmbientLight;
- (void)removeObserver:(id)arg1;
- (void)reloadChangeToLightLevelSupport;
- (void)addObserver:(id)arg1 supportsChangeToLightLevel:(CDUnknownBlockType)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (_Bool)_getLightLevelFromConnectedCar:(long long *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

