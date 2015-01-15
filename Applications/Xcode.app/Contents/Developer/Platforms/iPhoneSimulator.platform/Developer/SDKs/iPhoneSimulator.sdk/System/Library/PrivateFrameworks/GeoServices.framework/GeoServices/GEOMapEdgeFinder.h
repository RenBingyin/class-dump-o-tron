//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;
    CDStruct_34734122 _centerPoint;
    double _mapRadius;
    CDUnknownBlockType _edgeHandler;
    NSMutableSet *_edgeBuilders;
}

@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (id).cxx_construct;
- (_Bool)_checkEdgeForDuplicates:(const shared_ptr_b236f348 *)arg1;
- (void)_buildersInTile:(id)arg1 localPoint:(const Matrix_8746f91e *)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box_3fb92e00 *)arg4 handler:(CDUnknownBlockType)arg5;
- (void)findEdges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (void)dealloc;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

@end

