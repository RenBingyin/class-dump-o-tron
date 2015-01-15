//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXCompilerSpecificationGcc.h>

@class NSArray<DVTMacroExpansion>;

@interface PBXCompilerSpecificationGcc2_95_2 : PBXCompilerSpecificationGcc
{
    NSArray<DVTMacroExpansion> *_dependencyInfoArgs;
}

+ (id)headerSearchPathFlagsWithMacroExpansionScope:(id)arg1 dashIFlagAcceptsHeadermaps:(BOOL)arg2 supportsSeparateUserHeaderPaths:(BOOL)arg3;
- (void).cxx_destruct;
- (unsigned long long)concurrentExecutionCountWithMacroExpansionScope:(id)arg1;
- (id)compileSourceCodeFileAtPath:(id)arg1 ofType:(id)arg2 toOutputDirectory:(id)arg3 withMacroExpansionScope:(id)arg4;
- (void)addSDKDepenenciesForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)moduleMapForCompiler:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)symbolizeHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toSymbolSeparationRepositoryPath:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)precompileHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toPrecompPath:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)hashStringForCommandLineComponents:(id)arg1 inputFilePaths:(id)arg2 withMacroExpansionScope:(id)arg3;
- (id)subprocessCommandLineForPreprocessingBehaviorWithCommand:(id)arg1 commandLine:(id)arg2;
- (id)symrepFileNameForHeaderPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)removeFlagsThatDoNotAffectPrecompValidityFromMutableArray:(id)arg1;
- (id)flagsForIncludingPrecompiledPrefixHeaderAtPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)precompFileNameForHeaderPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)precompFileExtension;
- (id)otherFlagsWithMacroExpansionScope:(id)arg1;
- (id)standardFlagsWithMacroExpansionScope:(id)arg1;
- (id)additionalEnvironmentEntriesWithMacroExpansionScope:(id)arg1;
@property(readonly, nonatomic) NSArray<DVTMacroExpansion> *dependencyInfoArgs;

@end

