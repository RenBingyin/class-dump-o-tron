//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTFrameworkProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _visitHandler;
}

+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
+ (id)defaultManager;
@property(copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearRoutine;
- (void)setRoutineEnabled:(_Bool)arg1;
- (void)fetchBBPluginSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedLocationsOfInterestFromStartingLocationOfInterest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)handleDaemonStart;
- (void)createConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

