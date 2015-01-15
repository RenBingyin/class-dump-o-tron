//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOFeatureStyleAttributes, NSData, NSMutableArray, NSMutableData, NSMutableOrderedSet;

@interface GEOVectorTile : NSObject
{
    struct _GEOTileKey _key;
    GEOFeatureStyleAttributes *_attributes;
    CDStruct_6cf27ba1 *_lines;
    unsigned long long _linesCount;
    unsigned long long _linesVertexCount;
    CDStruct_6cf27ba1 *_coastlines;
    unsigned long long _coastlinesCount;
    CDStruct_5535450d *_polygons;
    unsigned long long _polygonsCount;
    unsigned long long _polygonsVertexCount;
    CDStruct_b2fbf00d *_polygonLabelPositions;
    unsigned long long _polygonLabelPositionsCount;
    CDStruct_910e0270 *_buildingFootprints;
    NSMutableData *_extrusionHeightsPool;
    NSMutableData *_baseHeightsPool;
    unsigned long long _buildingFootprintsCount;
    CDStruct_910e0270 *_hiResBuildingFootprints;
    unsigned long long _hiResBuildingFootprintsCount;
    CDStruct_2da3f85a *_threeDBuildings;
    unsigned long long _threeDBuildingsCount;
    struct {
        _Bool _field1;
        unsigned long long _field2;
        id *_field3;
    } *_extendedPointAttributes;
    unsigned long long _extendedPointAttributesCount;
    CDStruct_3cbe5a8b *_pois;
    unsigned long long _poisCount;
    CDStruct_f6a177db *_overpasses;
    CDStruct_dde70fb6 *_junctions;
    unsigned long long _junctionsCount;
    _Bool _hasComputedJunctions;
    CDStruct_7523a67d *_laneConnections;
    unsigned long long _laneConnectionsCount;
    CDStruct_7523a67d *_pointsOnRoad;
    unsigned long long _pointsOnRoadCount;
    CDStruct_183601bc **_sortedPointsOnRoad;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
    } *_laneGeometry;
    CDStruct_3cfc3106 *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    CDStruct_3cfc3106 *_lineVertices;
    CDStruct_3cfc3106 *_polygonVertices;
    CDStruct_3cfc3106 *_coastlineVertices;
    CDStruct_3cfc3106 *_footprintVertices;
    CDStruct_3cfc3106 *_hiResFootprintVertices;
    NSData *_labelPool;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        char *_field3;
    } *_labelPoolLanguages;
    unsigned long long _labelPoolLanguagesLength;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    CDStruct_29923528 *_labelIndex;
    unsigned long long _labelIndexCount;
    struct GEOFeatureShield *_shieldIndex;
    unsigned long long _shieldIndexCount;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned char _field3;
    } *_localizationTable;
    unsigned long long _localizationTableCount;
    NSMutableOrderedSet *_uniqueAttributes;
    NSMutableArray *_uniqueFeatureAttributes;
    CDStruct_db2bd8f2 *_lineCharacteristicPoints;
    unsigned long long _lineCharacteristicPointCount;
    CDStruct_db2bd8f2 *_polygonCharacteristicPoints;
    unsigned long long _polygonCharacteristicPointCount;
    CDStruct_db2bd8f2 *_coastlineCharacteristicPoints;
    unsigned long long _coastlineCharacteristicPointCount;
    unsigned long long _tileReferenceCount;
    struct _GEOTileKey *_tileReferences;
}

@property(readonly, nonatomic) struct _GEOTileKey *tileReferences; // @synthesize tileReferences=_tileReferences;
@property(readonly, nonatomic) unsigned long long tileReferenceCount; // @synthesize tileReferenceCount=_tileReferenceCount;
@property(readonly, nonatomic) struct _GEOTileKey tileKey; // @synthesize tileKey=_key;
@property(readonly, nonatomic) unsigned long long coastlineCharacteristicPointCount; // @synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_db2bd8f2 *coastlineCharacteristicPoints; // @synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints;
@property(readonly, nonatomic) unsigned long long polygonCharacteristicPointCount; // @synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_db2bd8f2 *polygonCharacteristicPoints; // @synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints;
@property(readonly, nonatomic) unsigned long long lineCharacteristicPointCount; // @synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_db2bd8f2 *lineCharacteristicPoints; // @synthesize lineCharacteristicPoints=_lineCharacteristicPoints;
@property(readonly, nonatomic) unsigned long long laneConnectionsCount; // @synthesize laneConnectionsCount=_laneConnectionsCount;
@property(readonly, nonatomic) CDStruct_7523a67d *laneConnections; // @synthesize laneConnections=_laneConnections;
@property(readonly, nonatomic) unsigned long long pointsOnRoadCount; // @synthesize pointsOnRoadCount=_pointsOnRoadCount;
@property(readonly, nonatomic) _Bool hasComputedJunctions; // @synthesize hasComputedJunctions=_hasComputedJunctions;
@property(readonly, nonatomic) unsigned long long junctionsCount; // @synthesize junctionsCount=_junctionsCount;
@property(readonly, nonatomic) CDStruct_dde70fb6 *junctions; // @synthesize junctions=_junctions;
@property(readonly, nonatomic) CDStruct_f6a177db *overpasses; // @synthesize overpasses=_overpasses;
@property(readonly, nonatomic) unsigned long long poisCount; // @synthesize poisCount=_poisCount;
@property(readonly, nonatomic) CDStruct_3cbe5a8b *pois; // @synthesize pois=_pois;
@property(readonly, nonatomic) unsigned long long threeDBuildingsCount; // @synthesize threeDBuildingsCount=_threeDBuildingsCount;
@property(readonly, nonatomic) CDStruct_2da3f85a *threeDBuildings; // @synthesize threeDBuildings=_threeDBuildings;
@property(readonly, nonatomic) unsigned long long hiResBuildingFootprintsCount; // @synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount;
@property(readonly, nonatomic) CDStruct_910e0270 *hiResBuildingFootprints; // @synthesize hiResBuildingFootprints=_hiResBuildingFootprints;
@property(readonly, nonatomic) unsigned long long buildingFootprintsCount; // @synthesize buildingFootprintsCount=_buildingFootprintsCount;
@property(readonly, nonatomic) CDStruct_910e0270 *buildingFootprints; // @synthesize buildingFootprints=_buildingFootprints;
@property(readonly, nonatomic) unsigned long long polygonsCount; // @synthesize polygonsCount=_polygonsCount;
@property(readonly, nonatomic) CDStruct_5535450d *polygons; // @synthesize polygons=_polygons;
@property(readonly, nonatomic) unsigned long long coastlinesCount; // @synthesize coastlinesCount=_coastlinesCount;
@property(readonly, nonatomic) CDStruct_6cf27ba1 *coastlines; // @synthesize coastlines=_coastlines;
@property(readonly, nonatomic) unsigned long long linesCount; // @synthesize linesCount=_linesCount;
@property(readonly, nonatomic) CDStruct_6cf27ba1 *lines; // @synthesize lines=_lines;
- (CDStruct_6cf27ba1 *)multiSectionFeatureForGeoID:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool dataIncludesConnectivity;
@property(readonly, nonatomic) unsigned long long polygonsVertexCount; // @synthesize polygonsVertexCount=_polygonsVertexCount;
@property(readonly, nonatomic) unsigned long long linesVertexCount; // @synthesize linesVertexCount=_linesVertexCount;
- (void)forEachJunctionInRoad:(CDStruct_6cf27ba1 *)arg1 visitor:(CDUnknownBlockType)arg2;
- (void)forEachEdgeInRoad:(CDStruct_6cf27ba1 *)arg1 visitTwice:(_Bool)arg2 visitor:(CDUnknownBlockType)arg3;
- (void)forEachJunction:(CDUnknownBlockType)arg1;
- (void)forEachEdgeOnJunction:(const CDStruct_dde70fb6 *)arg1 visitor:(CDUnknownBlockType)arg2;
- (void)forEachPolygon:(CDUnknownBlockType)arg1;
- (void)forEachPoint:(CDUnknownBlockType)arg1;
- (void)forEachRoad:(CDUnknownBlockType)arg1;
- (CDStruct_b2fbf00d *)polygonLabelPositions;
- (id)baseHeightsPool;
- (id)extrusionHeightsPool;
- (CDStruct_183601bc **)sortedPointsOnRoad;
@property(readonly, nonatomic) CDStruct_7523a67d *pointsOnRoad; // @synthesize pointsOnRoad=_pointsOnRoad;
@property(readonly, nonatomic) CDStruct_3cfc3106 *curveLineVertices;
@property(readonly, nonatomic) CDStruct_3cfc3106 *lineVertices;
- (id)description;
- (void)dealloc;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)_trimWhitespace;
- (void)_findOverpasses;
- (void)_findJunctions;
- (void)_attachRoadPoints;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (_Bool)_handleGenericTile:(CDStruct_effb527d *)arg1;
- (_Bool)_addGenericPolygonWithAttributes:(int *)arg1;
- (_Bool)_readExtendedPointAttributes:(CDStruct_effb527d *)arg1;
- (_Bool)_readTileReferences:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (_Bool)_readModernBuildings:(CDStruct_effb527d *)arg1 chapter:(unsigned short)arg2 vertexPool:(CDStruct_183601bc **)arg3 footprints:(CDStruct_183601bc **)arg4 count:(unsigned long long *)arg5;
- (_Bool)_readLowResBuildings:(CDStruct_effb527d *)arg1;
- (_Bool)_readHighResBuildings:(CDStruct_effb527d *)arg1;
- (id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2;
- (_Bool)_read3DBuildings:(CDStruct_effb527d *)arg1;
- (_Bool)_readCoastlines:(CDStruct_effb527d *)arg1;
- (_Bool)_readWrappingCoastlines:(CDStruct_f3ac0f61 *)arg1 tile:(CDStruct_effb527d *)arg2;
- (_Bool)_readSimpleCoastlines:(CDStruct_f3ac0f61 *)arg1 tile:(CDStruct_effb527d *)arg2;
- (_Bool)_readPois:(CDStruct_effb527d *)arg1;
- (_Bool)_readPolygons:(CDStruct_effb527d *)arg1;
- (_Bool)_readPolygons:(CDStruct_effb527d *)arg1 ofType:(unsigned short)arg2;
- (_Bool)_readLines:(CDStruct_effb527d *)arg1;
- (unsigned long long)_makeSpaceForShields:(unsigned long long)arg1;
- (unsigned long long)_makeSpaceForLabels:(unsigned long long)arg1;
- (_Bool)_readLabels:(CDStruct_effb527d *)arg1;
- (_Bool)_readInfoChapter:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;

@end

