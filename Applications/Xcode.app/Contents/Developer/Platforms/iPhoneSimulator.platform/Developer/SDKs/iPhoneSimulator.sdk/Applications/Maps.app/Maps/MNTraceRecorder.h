//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKLocationRecorder.h"

@class GEOComposedRouteLeg, MNMotionContext, MNTrace, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceRecorder : NSObject <MKLocationRecorder>
{
    MNTrace *_trace;
    NSDate *_recordingStartTime;
    MNMotionContext *_motionContext;
    int _dbResult;
    _Bool _corrupted;
    _Bool _closed;
    _Bool _background;
    struct sqlite3_stmt *_updateStart;
    struct sqlite3_stmt *_updateEnd;
    struct sqlite3_stmt *_updateActiveTransportType;
    struct sqlite3_stmt *_locationInsert;
    struct sqlite3_stmt *_locationErrorInsert;
    struct sqlite3_stmt *_routeRequestInsert;
    struct sqlite3_stmt *_routeResponseUpdate;
    struct sqlite3_stmt *_routeResponseErrorInsert;
    struct sqlite3_stmt *_routeSelectionInsert;
    struct sqlite3_stmt *_routeSelectionUpdate;
    struct sqlite3_stmt *_likelyRouteInsert;
    struct sqlite3_stmt *_etaTrafficUpdateRequestInsert;
    struct sqlite3_stmt *_etaTrafficUpdateResponseInsert;
    struct sqlite3_stmt *_etaTrafficUpdateResponseErrorInsert;
    struct sqlite3_stmt *_vehicleSpeedInsert;
    struct sqlite3_stmt *_vehicleHeadingInsert;
    struct sqlite3_stmt *_routeLegGuidanceInsert;
    struct sqlite3_stmt *_routeLegEndGuidanceUpdate;
    unsigned long long _routeRequestCount;
    unsigned long long _routeSelectionCount;
    unsigned long long _etaTrafficUpdateCount;
    CDUnknownBlockType _timeSinceRecordingBeganHandler;
    CDUnknownBlockType _errorHandler;
    GEOComposedRouteLeg *_currentLeg;
}

@property(copy, nonatomic) CDUnknownBlockType timeSinceRecordingBeganHandler; // @synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler;
@property(retain, nonatomic) MNMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(retain, nonatomic) NSDate *recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(retain, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)recordETATrafficUpdateError:(id)arg1;
- (void)recordETATrafficUpdateResponse:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1 forDestination:(id)arg2;
- (void)recordLikelyRouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3;
- (void)recordInitialCourse:(double)arg1;
- (void)recordRouteDeselected;
- (void)recordRouteSelected:(id)arg1;
- (void)recordRouteError:(id)arg1;
- (void)recordRouteResponse:(id)arg1;
- (void)recordRouteRequest:(id)arg1 waypoints:(id)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (void)resetRouteSelections;
- (void)recordGuidanceWasEnded;
- (void)recordGuidanceWasEndedAtTime:(double)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1 timestamp:(double)arg2;
- (void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2;
- (void)resetLocationsForSimulation;
- (void)setRouteGenius:(_Bool)arg1;
- (void)recordError:(id)arg1;
- (void)recordLocationUpdateResume;
- (void)recordLocationUpdatePause;
- (void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
- (void)recordSimulatedCoordinate:(CDStruct_c3b9c2ee)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6;
- (void)_recordLocationEvent:(long long)arg1 location:(id)arg2 correctedLocation:(id)arg3;
- (void)_recordLocationEvent:(long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 rawCoordinate:(CDStruct_c3b9c2ee)arg3 timestamp:(double)arg4 horizontalAccuracy:(double)arg5 verticalAccuracy:(double)arg6 altitude:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 rawCourse:(double)arg11 type:(int)arg12 courseAccuracy:(double)arg13 correctedCoordinate:(CDStruct_c3b9c2ee)arg14 correctedCourse:(double)arg15 matchType:(int)arg16 motionType:(int)arg17 motionConfidence:(int)arg18 motionExitType:(int)arg19 activeTransportType:(int)arg20 matchInfo:(id)arg21;
- (double)timeSinceRecordingBegan;
- (void)saveTraceSynchronously;
- (void)cancelTrace;
- (void)saveTrace;
- (void)_closeTraceDB;
- (void)_openNewTraceDBAtPath:(id)arg1;
- (void)setDestinationSearchResult:(id)arg1;
- (void)setOriginSearchResult:(id)arg1;
- (void)_prepareStatements;
- (void)_initializeTraceDB;
- (void)_openDBAtPath:(id)arg1;
- (void)_serializationError:(id)arg1;
- (void)_logSqliteErrorWithFile:(const char *)arg1 line:(int)arg2;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_removeObserving;
- (void)_addObserving;
- (void)_dispatchWrite:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 clMapMatching:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

