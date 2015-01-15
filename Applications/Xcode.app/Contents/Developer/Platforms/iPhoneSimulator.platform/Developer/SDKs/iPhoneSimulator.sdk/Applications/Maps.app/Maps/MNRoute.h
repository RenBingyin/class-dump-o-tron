//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GEOComposedRoute.h"

@class GEOComposedRouteStep, MNRouteSet, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MNRoute : GEOComposedRoute
{
    unsigned long long _mode;
    CDStruct_c3b9c2ee *_mapPoints;
    double *_distancesFromStart;
    double *_distancesFromEnd;
    double _distanceFromRequestToStart;
    GEOComposedRouteStep *_step;
    GEOComposedRouteStep *_previousStep;
    GEOComposedRouteStep *_highlightedStep;
    CDStruct_02837cd9 _boundingMapRect;
    id <MKAnnotation> _annotation;
    CDStruct_2c43369c _coordinate;
    CDStruct_2c43369c _preferredCoordinate;
    double _coordinateOffset;
    struct _NSRange _uniqueRange;
    int _orientation;
    int _preferredOrientation;
    NSArray *_viaWaypoints;
    NSString *_key;
    NSMapTable *_turnAnglesLookup;
    struct _NSRange _uniquePointRange;
    NSMutableArray *_trafficIncidentsOnRoute;
    MNRouteSet *_routeSet;
}

+ (id)_nameForMode:(unsigned long long)arg1;
+ (void)_setOrientationsForRoutes:(id)arg1;
+ (void)_setMidCoordinateForRoute:(id)arg1;
+ (void)_setUniqueRangesForRoutes:(id)arg1;
+ (id)_uniqueRangesFor3Routes:(id)arg1;
+ (id)_uniqueRangesFor2Routes:(id)arg1;
+ (void)_getIndexesOfSeparationPointOfRouteA:(id)arg1 fromRouteB:(id)arg2 indexA:(unsigned long long *)arg3 indexB:(unsigned long long *)arg4 threshold:(double)arg5 reversed:(_Bool)arg6;
+ (void)updateLocationAndOrientationOfAlternateRouteAnnotationRepresentations:(id)arg1 forRoutes:(id)arg2;
@property(readonly, nonatomic) NSArray *trafficIncidentsOnRoute; // @synthesize trafficIncidentsOnRoute=_trafficIncidentsOnRoute;
@property(readonly, nonatomic) __weak MNRouteSet *routeSet; // @synthesize routeSet=_routeSet;
@property(nonatomic) struct _NSRange uniquePointRange; // @synthesize uniquePointRange=_uniquePointRange;
@property(readonly, nonatomic) id <MKAnnotation> annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSArray *viaWaypoints; // @synthesize viaWaypoints=_viaWaypoints;
@property(nonatomic) int preferredOrientation; // @synthesize preferredOrientation=_preferredOrientation;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct _NSRange uniqueRange; // @synthesize uniqueRange=_uniqueRange;
@property(nonatomic) double coordinateOffset; // @synthesize coordinateOffset=_coordinateOffset;
@property(nonatomic) CDStruct_c3b9c2ee preferredCoordinate; // @synthesize preferredCoordinate=_preferredCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) GEOComposedRouteStep *highlightedStep; // @synthesize highlightedStep=_highlightedStep;
@property(readonly, nonatomic) GEOComposedRouteStep *previousStep; // @synthesize previousStep=_previousStep;
@property(retain, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(readonly, nonatomic) double *distancesFromEnd; // @synthesize distancesFromEnd=_distancesFromEnd;
@property(readonly, nonatomic) double *distancesFromStart; // @synthesize distancesFromStart=_distancesFromStart;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) double distanceFromRequestToStart; // @synthesize distanceFromRequestToStart=_distanceFromRequestToStart;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)closestMapPointToMapPoint:(CDStruct_c3b9c2ee)arg1;
- (int)cameraFocusStyleForStep:(id)arg1;
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1;
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1 fromPoint:(unsigned long long)arg2;
- (CDStruct_02837cd9)boundingRectForRoute;
@property(readonly, nonatomic) CDStruct_c3b9c2ee midPoint;
@property(readonly, nonatomic) CDStruct_c3b9c2ee endCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee startCoordinate;
- (id)travelTimeForInterval:(unsigned int)arg1;
- (id)abbreviatedTravelTimeForInterval:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *abbreviatedTravelTime;
@property(readonly, nonatomic) NSString *expandedTravelTime;
@property(readonly, nonatomic) unsigned long long durationSeconds;
- (id)_timeForSeconds:(unsigned long long)arg1 withTraffic:(_Bool)arg2 abbreviated:(_Bool)arg3;
@property(readonly, nonatomic) _Bool displaysYardsForShortDistances;
@property(readonly, nonatomic) _Bool displaysDistanceInMetric;
@property(readonly, nonatomic) NSString *abbreviatedDistance;
@property(readonly, nonatomic) NSString *expandedDistance;
@property(readonly, nonatomic) NSString *accessibilityExpandedDistance;
@property(readonly, nonatomic) GEOComposedRouteStep *lastStep;
@property(readonly, nonatomic) GEOComposedRouteStep *firstStep;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (CDStruct_c3b9c2ee)_mkCoordAt:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
@property(readonly, getter=isAlternateTransportType) _Bool alternateTransportType;
- (void)populateIncidentsFromETARoute:(id)arg1 incidentsOffset:(unsigned int)arg2;
- (void)commontInitWithRouteSet:(id)arg1 origin:(id)arg2;
- (id)initWithRoute:(id)arg1 routeSet:(id)arg2 origin:(id)arg3;
@property(readonly, nonatomic) double meanCourseDegsForUniqueRoute;
@property(readonly, nonatomic) double meanCourseDegsForCompleteRoute;
- (double)meanCourseDegsForRange:(struct _NSRange)arg1;
- (id)mainStreet;
- (id)arrivalDate;
- (id)departureDateForContext:(long long)arg1;

@end

