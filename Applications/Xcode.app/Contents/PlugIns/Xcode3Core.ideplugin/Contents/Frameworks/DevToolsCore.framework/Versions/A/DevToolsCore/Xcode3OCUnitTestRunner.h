//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEOCUnitTestRunner.h"

@interface Xcode3OCUnitTestRunner : IDEOCUnitTestRunner
{
}

- (id)workingDirectoryForWorkspace:(id)arg1;
- (id)defaultTestEnvironmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (id)testOperationsForExecutionEnvironment:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 testOperationErrorBlock:(CDUnknownBlockType)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)testOperationsForExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 runDestination:(id)arg4 workspace:(id)arg5 error:(id *)arg6 launchParametersBlock:(CDUnknownBlockType)arg7;
- (id)hostWithBuildParameters:(id)arg1 workspace:(id)arg2;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (BOOL)treatMissingBaselinesAsTestFailuresForBuildParameters:(id)arg1;
- (id)launchNameForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)testRunIdentifiersForBuildParameters:(id)arg1 runDestination:(id)arg2;

@end

