//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface VKMapDebugView : UIView
{
    NSString *_debugMessage;
    NSMutableArray *_buildingPaths;
    NSMutableSet *_intersectionPoints;
    NSMutableArray *_poiPaths;
    NSMutableArray *_roadPaths;
    NSMutableArray *_roadPoints;
    struct CGPoint _currentPoint;
    struct CGPoint _frontierPoint;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *roadPoints; // @synthesize roadPoints=_roadPoints;
@property(retain, nonatomic) NSMutableArray *roadPaths; // @synthesize roadPaths=_roadPaths;
@property(retain, nonatomic) NSMutableArray *poiPaths; // @synthesize poiPaths=_poiPaths;
@property(retain, nonatomic) NSMutableSet *intersectionPoints; // @synthesize intersectionPoints=_intersectionPoints;
@property(nonatomic) struct CGPoint frontierPoint; // @synthesize frontierPoint=_frontierPoint;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(retain, nonatomic) NSMutableArray *buildingPaths; // @synthesize buildingPaths=_buildingPaths;
@property(copy, nonatomic) NSString *debugMessage; // @synthesize debugMessage=_debugMessage;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_addValidPaths:(id)arg1 array:(id)arg2;
- (void)removePointsAndPaths;
- (void)addRoadPaths:(id)arg1;
- (void)addRoadPoints:(id)arg1;
- (void)addPOIPaths:(id)arg1;
- (void)addIntersectionPoints:(id)arg1;
- (void)setCurrentPoint:(struct CGPoint)arg1 frontierPoint:(struct CGPoint)arg2;
- (void)addBuildingPaths:(id)arg1;
- (void)_orientationDidChange:(id)arg1;

@end

