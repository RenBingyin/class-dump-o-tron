//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGInteractiveSceneView, DBGLayoutConstraint, DBGSceneNode, DBGViewInstance, IBAutolayoutConstraintDrawable;

@interface DBGAutoLayoutConstraintNode : DBGNode
{
    DBGInteractiveSceneView *_sceneView;
    DBGNode *_projectionLinesHostNode;
    IBAutolayoutConstraintDrawable *_drawable;
    struct SCNVector3 _startPoint;
    struct SCNVector3 _endPoint;
    DBGViewInstance *_firstItem;
    DBGViewInstance *_secondItem;
    struct CGRect _rootViewRect;
    BOOL _pointingUpOrRight;
    BOOL _drawablesAreFlipped;
    BOOL _selected;
    BOOL _highlighted;
    DBGSceneNode *_firstItemNode;
    DBGSceneNode *_secondItemNode;
    DBGLayoutConstraint *_modelObject;
}

@property(retain) DBGLayoutConstraint *modelObject; // @synthesize modelObject=_modelObject;
@property __weak DBGSceneNode *secondItemNode; // @synthesize secondItemNode=_secondItemNode;
@property __weak DBGSceneNode *firstItemNode; // @synthesize firstItemNode=_firstItemNode;
- (void).cxx_destruct;
- (void)setFilterEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)removeFromParentNode;
- (void)addSelectableCylinderGeometryToConstraintNode:(id)arg1 start:(struct SCNVector3)arg2 end:(struct SCNVector3)arg3;
- (void)addSelectableCylinderGeometryToConstraintNode:(id)arg1 forIBLine:(CDStruct_e3b9714e)arg2;
- (id)dashImageWithDashLength:(double)arg1 dashSpacing:(double)arg2 lineWidth:(double)arg3 color:(id)arg4;
- (BOOL)constraintProjectionLineNeedsBeams;
- (BOOL)constraintNeedsProjectionLine;
- (BOOL)firstAndScecondItemInDifferentPlanes;
- (void)updateProjectionLines;
- (id)limitedSpaceDualTBeamGeometryFromDrawable:(id)arg1;
- (id)iBeamGeometryFromDrawable:(id)arg1;
- (id)alignmentLineGeometryFromDrawable:(id)arg1;
- (id)connectionLineGeometryFromDrawable:(id)arg1;
- (id)lineGeometryWithStart:(struct SCNVector3)arg1 end:(struct SCNVector3)arg2;
- (id)lineGeometryFromIBLine:(CDStruct_e3b9714e)arg1 isConstraintLine:(BOOL)arg2;
- (CDStruct_e3b9714e)normalizeLine:(CDStruct_e3b9714e)arg1;
- (id)geometryFromDrawable:(id)arg1;
- (void)addGuideLine:(CDStruct_e3b9714e)arg1 guidelineIsLeftOrBottom:(BOOL)arg2 color:(id)arg3 rootViewRect:(struct CGRect)arg4 firstItem:(id)arg5 secondItem:(id)arg6;
- (id)initWithDrawable:(id)arg1 strokeColor:(id)arg2 guideLineColor:(id)arg3 rootViewRect:(struct CGRect)arg4 drawablesAreFlipped:(BOOL)arg5 firstItem:(id)arg6 secondItem:(id)arg7 constraintModel:(id)arg8 sceneView:(id)arg9;

@end

