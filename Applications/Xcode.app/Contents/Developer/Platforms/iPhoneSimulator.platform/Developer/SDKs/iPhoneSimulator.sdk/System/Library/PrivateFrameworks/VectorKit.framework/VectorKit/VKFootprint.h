//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKFootprint : NSObject
{
    CDStruct_aca18c62 _boundingRect;
    struct VKFootprintConvexHull_struct _convexHull;
    double _maxDistance;
    struct VKPoint _furthestGroundPoint;
    double _minDistance;
    struct VKPoint _nearestGroundPoint;
    double _minDepth;
    double _maxDepth;
    double _centerDepth;
    int _cornerGroundPointsCount;
    struct VKPoint _cornerGroundPoints[12];
}

@property(readonly, nonatomic) int cornerGroundPointsCount; // @synthesize cornerGroundPointsCount=_cornerGroundPointsCount;
@property(readonly, nonatomic) struct VKPoint nearestGroundPoint; // @synthesize nearestGroundPoint=_nearestGroundPoint;
@property(readonly, nonatomic) struct VKPoint furthestGroundPoint; // @synthesize furthestGroundPoint=_furthestGroundPoint;
@property(readonly, nonatomic) double centerDepth; // @synthesize centerDepth=_centerDepth;
@property(readonly, nonatomic) double maxDepth; // @synthesize maxDepth=_maxDepth;
@property(readonly, nonatomic) double minDepth; // @synthesize minDepth=_minDepth;
@property(readonly, nonatomic) struct VKFootprintConvexHull_struct convexHull; // @synthesize convexHull=_convexHull;
@property(readonly, nonatomic) CDStruct_d2b197d1 boundingRect; // @synthesize boundingRect=_boundingRect;
- (id).cxx_construct;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (CDStruct_d2b197d1)_expandedBoundingRect;
- (_Bool)containsGroundPoint:(struct VKPoint *)arg1;
- (_Bool)rejectsRect:(const CDStruct_d2b197d1 *)arg1;
- (void)computeFromCamera:(id)arg1;
@property(readonly, nonatomic) struct VKPoint *cornerGroundPoints;

@end

