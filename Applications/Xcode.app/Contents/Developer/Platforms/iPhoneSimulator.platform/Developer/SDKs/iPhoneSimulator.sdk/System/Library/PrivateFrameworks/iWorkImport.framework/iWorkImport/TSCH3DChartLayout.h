//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH2DChartLayout.h>

@class TSCH3DChartSceneAreaLayoutItem, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DChartLayout : TSCH2DChartLayout
{
}

+ (id)propertiesThatInvalidateLayout;
+ (id)p_propertiesThatInvalidateShadows;
+ (id)p_allScaleProperties;
+ (id)p_propertiesThatResetSeriesStorage;
+ (id)p_propertiesThatResetSceneProperties;
+ (void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(_Bool)arg2 willModifyBlock:(CDUnknownBlockType)arg3;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (void)modelInvalidated:(id)arg1;
- (void)processChanges:(id)arg1;
- (void)p_resetSeriesStorage;
- (void)p_resetSceneProperties;
@property(readonly, nonatomic) TSCH3DScene *scene;
@property(readonly, nonatomic) const struct ChartProjectedBoundsSpaces *projectedBounds;
- (id)infoChartScale;
- (id)containingViewportVector;
@property(readonly, nonatomic) _Bool hasProjectedBounds;
@property(readonly, nonatomic) TSCH3DChartSceneAreaLayoutItem *areaItem;
- (void)layoutForResizingSize:(struct CGSize)arg1;
- (struct CGRect)boundsForResize;
- (void)p_ensureValidForInwardLayout;
- (void)setLayoutSettings:(CDStruct_9aa9521f)arg1;
- (_Bool)p_shouldClearSceneForLayoutSettings:(CDStruct_9aa9521f)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

