//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, VKLabelTile;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject
{
    VKLabelTile *_tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    _Bool _foundTileEdgeJunctions;
    _Bool _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo>> _junctionInfos;
}

@property(readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(nonatomic) _Bool oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
@property(readonly, retain, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map_aa048f4b *)arg1 distanceThreshold:(double)arg2;
- (void)appendNavJunctionsInWorldRect:(const Box_3d7e3c2c *)arg1 junctions:(id)arg2;
- (void)initializeJunctionInfos;
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;
- (id)junctionForGeoJunction:(CDStruct_dde70fb6 *)arg1;
- (void)dealloc;
- (id)initWithTile:(id)arg1;

@end

