//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSXcodebuildIntegrationStep.h"

__attribute__((visibility("hidden")))
@interface XCSBuildIntegrationStep : XCSXcodebuildIntegrationStep
{
    BOOL _hasStartedTesting;
}

@property(nonatomic) BOOL hasStartedTesting; // @synthesize hasStartedTesting=_hasStartedTesting;
- (id)integrateArguments;
- (void)xcodebuildDidPostTestProgressNotification:(id)arg1;
- (id)processXcodeBuildTerminationStatus:(int)arg1 terminationReason:(long long)arg2;
- (id)buildIntegration;
- (id)checkForExistingPaths;
- (void)enqueueOperations;
- (long long)integrationStepType;

@end

