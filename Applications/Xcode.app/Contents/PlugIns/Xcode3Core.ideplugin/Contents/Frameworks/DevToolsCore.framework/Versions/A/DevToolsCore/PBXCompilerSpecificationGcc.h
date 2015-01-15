//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCCompilerSpecification.h>

@class NSString, NSString<DVTMacroExpansion>;

@interface PBXCompilerSpecificationGcc : XCCompilerSpecification
{
    NSString *_rawGccVersionString;
    NSString<DVTMacroExpansion> *_executionDescriptionForPrecompileCommands;
    NSString<DVTMacroExpansion> *_progressDescriptionForPrecompileCommands;
}

+ (id)effectiveCompilerSpecificationForIdentifierStem:(id)arg1 requestedVersion:(id)arg2 forSDK:(id)arg3;
+ (id)effectiveCompilerSpecificationForIdentifierStem:(id)arg1 requestedVersion:(id)arg2 platformDomain:(id)arg3;
+ (id)defaultCompilerVersionStringForSDK:(id)arg1;
+ (id)defaultCompilerVersionStringForMacroExpansionScope:(id)arg1;
- (void).cxx_destruct;
- (id)progressDescriptionForPrecompileCommands;
- (id)executionDescriptionForPrecompileCommands;
- (id)computeDependenciesForInputNodes:(id)arg1 ofType:(id)arg2 variant:(id)arg3 architecture:(id)arg4 outputDirectory:(id)arg5 withMacroExpansionScope:(id)arg6;
- (void)rememberCompilerDriverForLinkingWithMacroExpansionScope:(id)arg1;
- (void)addIdentifierToListOfCompilersUsedWithMacroExpansionScope:(id)arg1;
- (id)compileSourceCodeFileAtPath:(id)arg1 ofType:(id)arg2 toOutputDirectory:(id)arg3 withMacroExpansionScope:(id)arg4;
- (id)precompileHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toPrecompPath:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)effectiveCompilerSpecificationForFileType:(id)arg1 withMacroExpansionScope:(id)arg2 forSDK:(id)arg3;
- (id)builtinMacroDefinitionsWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinFrameworkSearchPathsWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinBracketSearchPathsWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (id)builtinQuoteSearchPathsWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (id)compilerDriverRawVersionString;
- (id)compilerDriverTargetStringWithMacroExpansionScope:(id)arg1;
- (id)compilerDriverVersionStringWithMacroExpansionScope:(id)arg1;
- (id)discoveredCompilerDriverInfoWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (id)executablePathWithMacroExpansionScope:(id)arg1;
- (id)executablePathWithMacroExpansionScope:(id)arg1 forLanguageDialect:(id)arg2;
- (void)_addPerToolOverridingMacrosToMacroDefinitionTable:(id)arg1;
- (id)name;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (CDUnknownBlockType)processDependencyInfoFileIfNecessaryForCommand:(id)arg1 commandInvocationSucceeded:(BOOL)arg2;

@end

