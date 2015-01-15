//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGetBoundsPipeline.h>

@class TSCH3DCamera;

__attribute__((visibility("hidden")))
@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline
{
    box_80622335 mLayoutInPage;
    box_80622335 mBodyLayoutInPage;
    box_80622335 mContainingViewport;
    struct ChartProjectedBoundsSpaces mSpaces;
    TSCH3DCamera *mOriginalCamera;
    struct ChartScenePropertyAccessor *mOriginalSceneAccessor;
    box_a3bd9649 mShadowsLayoutBounds;
    box_a3bd9649 mLayoutBounds;
    box_a3bd9649 mConstantDepthBodyLayoutBounds;
    box_a3bd9649 mBodyLayoutBounds;
    box_a3bd9649 mLabelsLayoutBounds;
    box_a3bd9649 mChartBounds;
    box_a3bd9649 mOrientBounds;
    box_a3bd9649 mDrawingBounds;
    box_a3bd9649 mLabelsBounds;
    _Bool mEnableScaledDepth;
    int mLabelsMode;
}

@property(nonatomic) int labelsMode; // @synthesize labelsMode=mLabelsMode;
@property(nonatomic) _Bool enableScaledDepth; // @synthesize enableScaledDepth=mEnableScaledDepth;
@property(nonatomic) box_80622335 containingViewport; // @synthesize containingViewport=mContainingViewport;
@property(nonatomic) box_80622335 bodyLayoutInPage; // @synthesize bodyLayoutInPage=mBodyLayoutInPage;
@property(nonatomic) box_80622335 layoutInPage; // @synthesize layoutInPage=mLayoutInPage;
- (id).cxx_construct;
@property(readonly, nonatomic) const struct ChartProjectedBoundsSpaces *spaces;
- (_Bool)run;
- (void)updateBounds;
- (box_a3bd9649)p_extendLabelsBoundsToBounds:(const box_a3bd9649 *)arg1;
- (void)updateLayoutBoundsIfNecessary;
- (void)updateRenderBounds;
- (void)calculateBoundsIfNecessary;
- (void)calculateLabelsBoundsIfNecssary;
- (void)calculateBounds;
- (void)calculateLabelsBounds;
- (void)updateLayoutBounds;
- (void)calculateLayoutLabelsBounds;
- (void)calculateLayoutBounds;
- (void)calculateLayoutBoundsSkippingLayoutSceneBounds:(_Bool)arg1;
- (int)p_depthBoundsTypes;
- (id)drawingBoundsSceneObjectClasses;
- (id)labelsSceneObjectClasses;
- (id)chartSceneObjectClasses;
- (box_a3bd9649)getBoundsFromObjectBoundsForScene:(id)arg1 boundsType:(int)arg2;
- (id)updatedConstantDepthSceneFromScene:(id)arg1;
- (box_a3bd9649)boundsFromObjectBoundsOfType:(int)arg1;
- (_Bool)p_updatesLabelsOnly;
- (_Bool)p_excludesLabels;
- (void)dealloc;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

