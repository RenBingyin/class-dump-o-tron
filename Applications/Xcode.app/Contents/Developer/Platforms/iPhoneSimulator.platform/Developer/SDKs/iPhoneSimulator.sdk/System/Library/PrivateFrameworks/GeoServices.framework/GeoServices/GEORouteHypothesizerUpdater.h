//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEODirectionsRouteRequest, GEOLocation, GEOMapRegion, GEORouteAttributes, GEORouteMatch, NSDate, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerUpdater : NSObject
{
    id <GEORouteHypothesizerUpdaterDelegate> _delegate;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEODirectionsRouteRequest *_currentRequest;
    GEORouteAttributes *_routeAttributes;
    GEOLocation *_originLocation;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    _Bool _isTraveling;
    _Bool _hasArrived;
    GEOMapRegion *_arrivalMapRegion;
    double _score;
    NSMutableArray *_rerouteEntries;
    _Bool _shouldThrottleReroutes;
    NSDate *_lastRerouteDate;
    unsigned long long _numThrottledReroutes;
    NSLock *_requestLock;
}

@property(readonly, nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(readonly, nonatomic) _Bool isTraveling; // @synthesize isTraveling=_isTraveling;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) __weak id <GEORouteHypothesizerUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateScoreForLocation:(id)arg1;
- (_Bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (id)_routeMatchForLocation:(id)arg1;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)cancelCurrentRequest;
- (void)updateForLocation:(id)arg1;
- (void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3;
- (void)dealloc;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;

@end

