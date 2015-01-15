//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CMStrideCalibratorServiceProtocol.h"

@class CLTimer, CalTrackFinder;

@interface CMStrideCalibrator : CLIntersiloService <CMStrideCalibratorServiceProtocol>
{
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client>> _stepCountClient;
    struct queue<std::__1::pair<double, unsigned int>, std::__1::deque<std::__1::pair<double, unsigned int>, std::__1::allocator<std::__1::pair<double, unsigned int>>>> _stepWindow;
    struct unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client>> _motionStateClient;
    struct vector<std::__1::pair<double, CLMotionActivity::Type>, std::__1::allocator<std::__1::pair<double, CLMotionActivity::Type>>> _activityWindow;
    struct unique_ptr<CLLocationProvider_Type::Client, std::__1::default_delete<CLLocationProvider_Type::Client>> _locationProviderClient;
    struct CLServiceLocationProvider *_serviceLocationProvider;
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;
    double _lastGoodLocFix;
    struct shared_ptr<CLPersistentTimer> _batchTimer;
    struct CLStepCountRecorderDb _stepCountDb;
    struct shared_ptr<CMStrideCalRecorderDb> _strideCalDb;
    int _locationState;
    _Bool _forcedPref;
    _Bool _detailedLogging;
    double _minForcedAttemptWait;
    double _minCalibrationSuccessWait;
    double _minStrideCalConvergedWait;
    int _stepsBeforeForce;
    double _stepWindowTime;
    _Bool _strideAutoCalEnabled;
    CalTrackFinder *_trackFinder;
    CLTimer *_forcedTimeoutTimer;
}

+ (id)getSilo;
@property(retain) CLTimer *forcedTimeoutTimer; // @synthesize forcedTimeoutTimer=_forcedTimeoutTimer;
@property(retain) CalTrackFinder *trackFinder; // @synthesize trackFinder=_trackFinder;
@property _Bool strideAutoCalEnabled; // @synthesize strideAutoCalEnabled=_strideAutoCalEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setUpdateFinishedHandler;
- (void)updateCalibrationBins:(id)arg1;
- (void)setComboModeState:(_Bool)arg1;
@property int locationState;
- (void)checkAuthorization;
- (void)forcedTimeoutHandler;
- (void)attemptForcedLocation;
- (void)onBatchTimer:(struct CLPersistentTimer *)arg1;
- (void)onLocationNotification:(int)arg1 data:(NotificationData_edcc4bb6)arg2;
- (void)onMotionStateNotification:(int)arg1 data:(union NotificationData)arg2;
- (_Bool)isRunningStateInWindow;
- (void)ageOutMotionStateArray;
- (unsigned int)stepsInWindow;
- (void)ageOutStepArray;
- (void)onStepNotification:(int)arg1 data:(union NotificationData)arg2;
- (void)dealloc;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;
- (void)heartAttack;

// Remaining properties
@property(nonatomic) _Bool valid;

@end
