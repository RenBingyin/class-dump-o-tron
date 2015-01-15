//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBCLIServerPersona.h"

@interface IBCLIImageCatalogToolPersona : IBCLIServerPersona
{
}

+ (void)configureSharedProcessState;
- (int)runSingleInvocation:(id)arg1 outputtingToFileHandle:(id)arg2 andVerifyingEnvironment:(char *)arg3;
- (void)invokeArguments:(id)arg1 outputDictionary:(id)arg2;
- (void)printIssues:(unsigned long long)arg1 fromCatalogs:(id)arg2 buildIssues:(id)arg3 outputDictionary:(id)arg4 arguments:(id)arg5;
- (void)printImageCatalogCollection:(id)arg1 outputDictionary:(id)arg2;
- (void)printCompiledFilesResults:(id)arg1 outputDictionary:(id)arg2;
- (void)compileImageCatalogCollection:(id)arg1 withPlatformAdapter:(id)arg2 arguments:(id)arg3 outputDictionary:(id)arg4 populatingBuildIssues:(id)arg5;
- (id)toolName;
- (id)produceHumanReadableOutputForOutputEntry:(id)arg1 key:(id)arg2 args:(id)arg3;
- (id)orderedHumanReadableOutputKeys;
- (id)init;

@end
