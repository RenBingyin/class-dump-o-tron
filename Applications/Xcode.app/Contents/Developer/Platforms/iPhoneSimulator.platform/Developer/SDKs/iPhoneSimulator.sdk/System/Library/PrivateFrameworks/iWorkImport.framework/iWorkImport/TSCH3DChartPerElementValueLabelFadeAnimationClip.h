//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartAnimationClip.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartPerElementValueLabelFadeAnimationClip : TSCH3DChartAnimationClip
{
    box_e9f23397 mLabelRange;
}

@property(nonatomic) box_e9f23397 labelRange; // @synthesize labelRange=mLabelRange;
- (id).cxx_construct;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute *)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg3 timeSlice:(id)arg4 context:(id)arg5;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4;

@end

