//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFindingGenerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DYGLExpertCoarseGPUFindingGenerator : DYGLExpertFindingGenerator
{
    NSMutableArray *_stageTimings;
    float _relativeError;
}

- (void).cxx_destruct;
- (id)_gpuStageToString:(int)arg1;
- (void)_adjustFindingSeverity:(id)arg1 whichSlowest:(unsigned int)arg2;
- (float)_stageFindingConfidence:(unsigned int)arg1;
- (int)_findingKindForStage:(int)arg1;
- (id)_generateGPULimitedGeneralFinding;
- (id)_generateStageFinding:(unsigned int)arg1 stage:(int)arg2 stageTime:(unsigned long long)arg3;
- (void)_addStageTimingWithStageType:(int)arg1 withTime:(unsigned long long)arg2;
- (unsigned int)execute;

@end

