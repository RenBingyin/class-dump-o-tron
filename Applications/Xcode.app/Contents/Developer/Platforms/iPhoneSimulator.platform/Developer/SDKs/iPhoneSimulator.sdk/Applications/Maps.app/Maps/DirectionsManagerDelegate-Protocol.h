//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DirectionsManager, NSArray, NSString;

@protocol DirectionsManagerDelegate <NSObject>
- (_Bool)directionsManagerShouldAllowAlternateRoutesForTransportType:(int)arg1;
- (void)directionsManagerUpdatedETA:(DirectionsManager *)arg1;
- (void)directionsManagerDidFailToRecalculateRoute:(DirectionsManager *)arg1;
- (void)directionsManagerDidFailToReceiveRoute:(DirectionsManager *)arg1;
- (void)directionsManagerWillRecalculateRoute:(DirectionsManager *)arg1;
- (void)directionsManagerHasReachedEndOfLeg:(DirectionsManager *)arg1 willContinueGuidance:(_Bool)arg2;
- (void)directionsManagerHasArrived:(DirectionsManager *)arg1;
- (void)directionsManagerHideSecondaryStep:(DirectionsManager *)arg1;
- (void)directionsManager:(DirectionsManager *)arg1 didChangeNavigatorState:(int)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(NSString *)arg6 shorterAlternativeInstructions:(NSArray *)arg7 shieldType:(int)arg8 shieldText:(NSString *)arg9 drivingSide:(int)arg10;
- (void)directionsManager:(DirectionsManager *)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(NSString *)arg6 shorterAlternativeInstructions:(NSArray *)arg7 shieldType:(int)arg8 shieldText:(NSString *)arg9 drivingSide:(int)arg10;
- (void)directionsManager:(DirectionsManager *)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)directionsManager:(DirectionsManager *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5;
@end

