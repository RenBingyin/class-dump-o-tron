//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOLocation, GEONavigationDetails, GEORouteMatch, NSObject<OS_xpc_object>, NSString;

@interface GEONavigation : NSObject
{
    GEONavigationDetails *_details;
    NSObject<OS_xpc_object> *_connection;
    int _navigationStartedToken;
    _Bool _hasNavigationStartedToken;
}

+ (id)sharedInstance;
- (void)_sendMessage:(id)arg1 data:(id)arg2;
- (void)_closeConnection;
- (void)_createConnection;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(_Bool)arg4;
- (void)endNavigation;
- (void)startNavigationForTransportType:(int)arg1 state:(int)arg2;
@property(nonatomic) unsigned long long announcementStage;
@property(nonatomic) int navigationTransportType;
@property(nonatomic) int navigationState;
@property(readonly, nonatomic) _Bool locationUnreliable;
@property(readonly, nonatomic) _Bool isNavigating;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double distanceRemainingOnRoute;
@property(readonly, nonatomic) double distanceToRoute;
@property(readonly, nonatomic) double distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart;
@property(readonly, nonatomic) GEORouteMatch *routeMatch;
@property(readonly, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)clearRoute;
- (void)updatedETA:(id)arg1;
- (void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3;
- (void)setRoute:(id)arg1 toDestinationName:(id)arg2;
- (void)dealloc;

@end

