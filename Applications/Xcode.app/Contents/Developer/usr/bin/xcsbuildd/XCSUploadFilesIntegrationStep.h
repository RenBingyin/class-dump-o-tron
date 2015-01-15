//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSIntegrationStep.h"

@class XCSIntegrationAssets;

__attribute__((visibility("hidden")))
@interface XCSUploadFilesIntegrationStep : XCSIntegrationStep
{
    BOOL _shouldCleanOutput;
    XCSIntegrationAssets *_assets;
}

@property(nonatomic) BOOL shouldCleanOutput; // @synthesize shouldCleanOutput=_shouldCleanOutput;
@property(retain, nonatomic) XCSIntegrationAssets *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (id)cleanOutputDirectory;
- (id)updateIntegrationWithAssets;
- (id)zipDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)findOutputFileMatchingRegularExpression:(id)arg1;
- (id)uploadAssetsMatchingPredicate:(id)arg1 description:(id)arg2;
- (id)uploadAdditionalAssets;
- (id)copyRelevantCrashLogs;
- (id)relevantCrashLogsPredicate;
- (id)uploadTriggerLogs;
- (id)uploadProductAndArchive;
- (id)uploadFileWithKey:(id)arg1 relativePath:(id)arg2 progress:(double)arg3 asset:(id *)arg4;
- (id)uploadFilesWithKeysAndPaths:(id)arg1 totalCount:(long long)arg2;
- (id)humanReadableDescriptions;
- (void)enqueueOperations;
- (long long)integrationStepType;
- (id)initWithBuildingIntegration:(id)arg1;

@end

