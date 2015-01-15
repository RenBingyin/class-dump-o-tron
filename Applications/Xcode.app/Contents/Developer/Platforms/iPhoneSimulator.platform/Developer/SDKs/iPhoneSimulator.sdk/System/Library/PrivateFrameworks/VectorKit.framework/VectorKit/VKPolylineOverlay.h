//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOComposedRouteObserver.h"
#import "VKOverlay.h"

@class GEOComposedRoute, GEOMapRegion, NSString, VKTrafficSegmentsAlongRoute;

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver>
{
    struct __CFSet *_observers;
    GEOComposedRoute *_composedRoute;
    _Bool _isReadyForSnapping;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute *_trafficSegments;
}

@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) VKTrafficSegmentsAlongRoute *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (_Bool)isSnappingForSceneTiles;
- (void)updateLabelExternalObjectsInRenderRegion:(id)arg1;
- (id)getPathsForPainter:(id)arg1 renderRegion:(id)arg2 shouldSnapToRoads:(_Bool)arg3 snappingCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_updateTraffic;
- (struct _NSRange)sectionRangeForBounds:(CDStruct_d2b197d1)arg1;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_setNeedsLayout;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

