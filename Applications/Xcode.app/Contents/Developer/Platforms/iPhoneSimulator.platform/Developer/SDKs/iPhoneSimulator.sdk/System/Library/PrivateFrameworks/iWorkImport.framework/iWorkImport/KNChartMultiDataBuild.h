//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginMagicChart.h"
#import "KNChunkableBuildAnimator.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KNChartMultiDataBuild : KNAnimationEffect <KNChunkableBuildAnimator, KNAnimationPluginMagicChart>
{
    NSMutableArray *mLayersToRestore;
    NSArray *mChartAnimatedLayers;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (id)localizedMenuString:(int)arg1;
+ (_Bool)isMagicChart;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsWithContext:(id)arg1;
- (id)animationInfoForAnimatedBuild:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

