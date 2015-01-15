//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DirectionsManager, MNLocation, MNRoute, NSError, NSNumber;

@protocol DirectionsManagerObserver <NSObject>

@optional
- (void)directionsManager:(DirectionsManager *)arg1 displayDirectionsToSelectedRouteWithNavigationOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManager:(DirectionsManager *)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(long long)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 didStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManager:(DirectionsManager *)arg1 willStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManager:(DirectionsManager *)arg1 needsPromptToSimulateForOptions:(long long)arg2;
- (void)directionsManagerDidUpdateUserLocation:(DirectionsManager *)arg1;
- (void)directionsManagerWillPrepareNavigationSession:(DirectionsManager *)arg1;
- (void)directionsManagerUpdatedMatchedLocation:(DirectionsManager *)arg1 matchedLocation:(MNLocation *)arg2;
- (void)directionsManagerUpdatedTrafficIncidents:(DirectionsManager *)arg1;
- (void)directionsManagerDidUpdateToStepIndex:(DirectionsManager *)arg1 stepIndex:(NSNumber *)arg2;
- (void)directionsManagerDidSwitchToNewRoute:(DirectionsManager *)arg1 route:(MNRoute *)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 didReplaceRoute:(MNRoute *)arg2 withRoute:(MNRoute *)arg3;
- (void)directionsManagerWillClear:(DirectionsManager *)arg1;
- (void)directionsManagerDidReset:(DirectionsManager *)arg1;
- (void)directionsManagerWillReset:(DirectionsManager *)arg1;
- (void)directionsManagerDidCancelLoad:(DirectionsManager *)arg1;
- (void)directionsManagerDidFailToLoad:(DirectionsManager *)arg1 withError:(NSError *)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 didLoadRoute:(MNRoute *)arg2;
- (void)directionsManagerDidStartLoad:(DirectionsManager *)arg1;
@end

