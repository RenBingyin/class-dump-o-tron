//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSString, RTAction, RTLocationOfInterest;

@protocol RTDaemonProtocol <NSObject>
- (void)fetchPathToDiagnosticFilesWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisits;
- (void)fetchPredictedLocationsOfInterestOnDate:(NSDate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchRoutineModeFromLocation:(CLLocation *)arg1 withReply:(void (^)(long long, NSError *))arg2;
- (void)fetchPredictedConditionsForAction:(RTAction *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)clearRoutine;
- (void)setRoutineEnabled:(_Bool)arg1;
- (void)fetchBBPluginSupportedWithReply:(void (^)(_Bool))arg1;
- (void)fetchRoutineEnabledWithReply:(void (^)(_Bool))arg1;
- (void)fetchPredictedLocationsOfInterestFromStartingLocationOfInterest:(RTLocationOfInterest *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 withReply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchAllLocationsOfInterestWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(CLLocation *)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
@end

