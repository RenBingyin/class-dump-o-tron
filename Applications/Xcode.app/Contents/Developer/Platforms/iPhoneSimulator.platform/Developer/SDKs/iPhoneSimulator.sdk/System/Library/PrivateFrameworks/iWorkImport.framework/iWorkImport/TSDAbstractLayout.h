//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, TPPageLayout, TSDLayoutGeometry;

__attribute__((visibility("hidden")))
@interface TSDAbstractLayout : NSObject
{
    TSDAbstractLayout *mParent;
    NSMutableArray *mChildren;
    TSDLayoutGeometry *mGeometry;
    struct CGPoint mInterimPosition;
    _Bool mInterimPositionXSet;
    _Bool mInterimPositionYSet;
    struct CGPoint mLastInterimPosition;
    _Bool mLastInterimPositionXSet;
    _Bool mLastInterimPositionYSet;
}

@property(readonly, nonatomic) struct CGPoint lastInterimPosition; // @synthesize lastInterimPosition=mLastInterimPosition;
@property(nonatomic) TSDAbstractLayout *parent; // @synthesize parent=mParent;
@property(copy, nonatomic) TSDLayoutGeometry *geometry; // @synthesize geometry=mGeometry;
- (_Bool)canRotateChildLayout:(id)arg1;
- (_Bool)supportsFlipping;
- (_Bool)supportsParentRotation;
- (_Bool)supportsRotation;
- (_Bool)supportsInspectorPositioning;
- (_Bool)supportsResize;
- (struct CGPoint)positionInRootForAttachmentPositioner;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint)arg1 interimPositionXSet:(_Bool)arg2 interimPositionYSet:(_Bool)arg3;
- (void)fixTransformFromLastInterimPosition;
- (void)fixTransformFromInterimPosition;
@property(nonatomic) double interimPositionY;
@property(nonatomic) double interimPositionX;
- (_Bool)shouldSnapWhileResizing;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;
- (struct CGRect)frameForCulling;
- (void)addLayoutsInRect:(struct CGRect)arg1 toArray:(id)arg2 deep:(_Bool)arg3;
- (void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)removeFromParent;
@property(copy, nonatomic) NSArray *children;
@property(readonly, nonatomic) TSDAbstractLayout *root;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)parentLayoutForProvidingGuides;
- (_Bool)providesGuidesForChildLayouts;
- (_Bool)isRootLayoutForInspectorGeometry;
- (_Bool)isAxisAlignedUnflippedInRoot;
- (struct CGRect)clippedRectInRoot:(struct CGRect)arg1;
- (struct CGRect)clipRect;
- (struct CGRect)rectInRoot:(struct CGRect)arg1;
- (struct CGRect)rectInParent:(struct CGRect)arg1;
- (struct CGRect)frameInRoot;
- (struct CGRect)frameInParent;
- (struct CGRect)insertionFrame;
- (struct CGRect)frame;
- (struct CGAffineTransform)transformInRoot;
- (struct CGAffineTransform)transformInParent;
- (struct CGAffineTransform)transform;
- (id)visibleGeometries;
- (id)geometryForTransforming;
- (id)geometryInRoot:(id)arg1;
- (id)geometryInRoot;
- (id)geometryInParent;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) TPPageLayout *pageLayout;
@property(readonly, nonatomic) unsigned int pageIndex;

@end

