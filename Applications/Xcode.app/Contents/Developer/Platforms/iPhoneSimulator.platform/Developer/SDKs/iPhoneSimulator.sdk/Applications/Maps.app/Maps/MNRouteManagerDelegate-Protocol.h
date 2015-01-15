//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODirectionsRouteRequest, GEODirectionsRouteResponse, GEOETARoute, GEORoute, MNRoute, MNRouteManager, MNRouteSet, NSError;

@protocol MNRouteManagerDelegate <NSObject>
- (void)routeManager:(MNRouteManager *)arg1 recordRouteResponse:(GEODirectionsRouteResponse *)arg2;
- (void)routeManager:(MNRouteManager *)arg1 recordRouteRequest:(GEODirectionsRouteRequest *)arg2;
- (void)routeManagerUpdatedTrafficIncidents:(MNRouteManager *)arg1;
- (void)routeManagerUpdatedETA:(MNRouteManager *)arg1;
- (void)routeManager:(MNRouteManager *)arg1 recommendsNewRoute:(GEORoute *)arg2 etaRoute:(GEOETARoute *)arg3 oldEstimatedTime:(unsigned int)arg4 newEstimatedTime:(unsigned int)arg5;
- (void)routeManager:(MNRouteManager *)arg1 failedWithError:(NSError *)arg2;
- (void)routeManager:(MNRouteManager *)arg1 didChangeRoutePreloadSession:(id <GEORoutePreloadSession>)arg2;
- (void)routeManager:(MNRouteManager *)arg1 didSwitchToNewRoute:(MNRoute *)arg2 alreadyOnRoute:(_Bool)arg3 forcedSwitch:(_Bool)arg4;
- (void)routeManagerDidCancelRoute:(MNRouteManager *)arg1 errorCode:(long long)arg2;
- (void)routeManagerDidFailToRecalculateRoute:(MNRouteManager *)arg1 previousRoute:(MNRoute *)arg2 errorCode:(long long)arg3;
- (void)routeManager:(MNRouteManager *)arg1 didRecalculateNewRoute:(MNRoute *)arg2;
- (void)routeManagerWillRecalculateRoute:(MNRouteManager *)arg1;
- (void)routeManagerDidFailToReceiveRoute:(MNRouteManager *)arg1 error:(NSError *)arg2;
- (void)routeManager:(MNRouteManager *)arg1 didReceiveRouteSet:(MNRouteSet *)arg2;
- (void)routeManagerWillRequestRoute:(MNRouteManager *)arg1 traceRecorderFailed:(_Bool)arg2;
- (void)routeManagerDidChangeState:(MNRouteManager *)arg1 newRouteState:(int)arg2;
@end

