//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDispatchLock, DVTSDK, NSArray, NSString, XCCommandLineToolSpecificationRegistry, XCPlatformSpecification;

@interface XCSDKPackage : NSObject
{
    NSArray *_defaultMacroDefinitionTables;
    NSArray *_customMacroDefinitionTables;
    NSArray *_preprocessorDefinitions;
    NSString *_propertyConditionFamily;
    XCPlatformSpecification *_platform;
    DVTSDK *_underlyingSDK;
    NSString *_systemVersionPlistPath;
    NSString *_digest;
    XCCommandLineToolSpecificationRegistry *_commandLineToolSpecificationRegistry;
    DVTDispatchLock *_lock;
}

+ (BOOL)sdkPackageForBootSystemRequiresSpecialTreatment;
+ (id)sdkPackageForBootSystem;
+ (id)fallbackCustomMacros;
+ (id)fallbackDefaultMacros;
+ (id)systemSDKContainingAbsolutePath:(id)arg1;
+ (id)localizedSDKNameForCanonicalName:(id)arg1;
+ (id)localizedFamilyNameForCanonicalName:(id)arg1;
+ (id)sdkVersionForCanonicalName:(id)arg1;
+ (id)systemSdksOrderedByFamilyName;
+ (id)systemSdkFamilyNames;
+ (id)systemSdksForFamilyName:(id)arg1;
+ (id)systemSdkNames;
+ (id)sdkPackageForNameOrPath:(id)arg1;
+ (id)sdkPackageForNameOrPath:(id)arg1 withBasePath:(id)arg2;
+ (id)sdkPackageForNameOrPath:(id)arg1 withBasePath:(id)arg2 forceCreate:(BOOL)arg3;
+ (id)systemSdkForName:(id)arg1;
+ (id)sdkPackageForAbsolutePath:(id)arg1;
+ (id)sdkPackageForAbsolutePath:(id)arg1 forceCreate:(BOOL)arg2;
+ (id)absolutePathForSDKPathString:(id)arg1;
+ (id)sdkPackageForUnderlyingSDK:(id)arg1;
+ (id)loadSdkPackagesForPlatform:(id)arg1;
+ (void)_loadFallbackSettingsIfNeeded;
+ (void)initialize;
@property(readonly) DVTDispatchLock *lock; // @synthesize lock=_lock;
@property(readonly) DVTSDK *underlyingSDK; // @synthesize underlyingSDK=_underlyingSDK;
@property(readonly) XCCommandLineToolSpecificationRegistry *commandLineToolSpecificationRegistry; // @synthesize commandLineToolSpecificationRegistry=_commandLineToolSpecificationRegistry;
@property(retain) NSString *digest; // @synthesize digest=_digest;
@property(readonly) NSString *systemVersionPlistPath; // @synthesize systemVersionPlistPath=_systemVersionPlistPath;
- (void).cxx_destruct;
- (id)description;
- (id)compilerSpecificationForIdentifier:(id)arg1;
- (id)commandLineToolSpecificationForIdentifier:(id)arg1;
- (void)enumerateCommandLineToolSpecificationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allCommandLineToolSpecifications;
- (void)createCommandLineToolSpecificationRegistry;
- (id)platformDomain;
- (id)macroExpansionScopeByAddingMacroDefinitionTablesToScope:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSArray *toolchainNames;
- (id)copyDefaultDeploymentVersionDict;
- (id)supportedBuildToolComponents;
- (id)libraries;
- (id)commandLineToolSearchPath;
@property(readonly, getter=isBaseSDK) BOOL baseSDK;
- (id)supportedDeviceFamilies;
- (void)setPlatform:(id)arg1;
- (id)platform;
- (id)propertyConditionFamily;
- (id)propertyConditionName;
- (id)customMacroDefinitionTables;
- (id)defaultMacroDefinitionTables;
- (id)preprocessorDefinitions;
- (id)infoDictionary;
- (id)versionInfo;
- (id)sdkPath;
- (id)settingsPlistPath;
- (id)alternateSDK;
- (id)localizedDisplayName;
- (id)minimalDisplayName;
- (id)displayName;
- (id)canonicalName;
- (id)version;
- (BOOL)exists;
- (id)unresolvedPath;
- (id)path;
- (id)initWithUnderlyingSDK:(id)arg1;

@end

