//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDShapeLayout.h>

#import "TSWPColumnMetrics.h"
#import "TSWPLayoutParent.h"
#import "TSWPStorageObserver.h"

@class TSDWrapPolygon, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>
{
    TSDWrapPolygon *_cachedInteriorWrapPolygon;
    _Bool _observingStorage;
    TSWPLayout *_containedLayout;
    id <TSWPShapeLayoutDelegate> _delegate;
}

@property id <TSWPShapeLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSWPLayout *containedLayout; // @synthesize containedLayout=_containedLayout;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (id)pathSource;
- (struct CGPoint)autosizePositionOffsetForFixedWidth:(_Bool)arg1 height:(_Bool)arg2;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1;
- (struct CGAffineTransform)autosizedTransform;
- (struct CGAffineTransform)computeLayoutTransform;
- (id)dependentLayouts;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)supportsRotation;
- (_Bool)textLayoutShouldLayoutVertically:(id)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
@property(readonly, nonatomic) _Bool autosizes;
- (unsigned int)cropLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2;
- (id)interiorClippingPath;
- (id)textWrapper;
- (id)interiorWrapPath;
- (id)interiorWrapPolygon;
- (void)updateChildrenFromInfo;
- (void)createContainedLayoutForEditing;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)childSearchTargets;
- (_Bool)isInvisibleAutosizingShape;
- (id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2;
- (void)createContainedLayoutForInstructionalText;
- (void)destroyContainedLayoutForInstructionalText;
- (void)invalidatePath;
- (void)invalidateSize;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)children;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

