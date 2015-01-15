//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMapTable, NSArray, NSDictionary, NSSet, NSString, TSPropertyListDictionary, XCCommandLineFragmentGenerator, XCPropertyDomainSpecification, XCPropertyMacroExpression;

@interface XCPropertyDefinition : NSObject
{
    NSString *_name;
    _Bool _isUserDefined;
    _Bool _hasResolvedFileTypes;
    _Bool _uiShouldRemoveIfEmpty;
    _Bool _isAppleInternalOnly;
    _Bool _isBasic;
    id <XCPropertyTypes> _uiType;
    NSArray *_allowedValues;
    id <DVTMacroExpansion> _defaultValue;
    NSSet *_supportedArchs;
    DVTMapTable *_supportedArchsByDomain;
    NSSet *_supportedFileTypes;
    XCPropertyDomainSpecification *_domain;
    NSSet *_conditionFlavors;
    id _commandLineArgs;
    XCPropertyMacroExpression *_conditionExpression;
    NSDictionary *_additionalLinkerArgs;
    NSDictionary *_additionalLibrarianArgs;
    NSString *_categoryName;
    NSString *_nameOfOptionToPrecedeOnCL;
    NSString *_nameOfOptionToSucceedOnCL;
    NSString *_nameOfOptionToPrecedeInUI;
    NSString *_nameOfOptionToSucceedInUI;
    NSDictionary *_additionalBuildSettings;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSArray *_localizedAllowedValues;
    NSString *_defLocDesc;
    TSPropertyListDictionary *_properties;
    _Bool _uiShouldStripMacroDefinition;
    XCCommandLineFragmentGenerator *_commandLineFragmentGenerator;
}

+ (id)stringRepresentationFromPropertyValue:(id)arg1 error:(id *)arg2;
+ (id)propertyValueFromStringRepresentation:(id)arg1 error:(id *)arg2;
+ (BOOL)isListType;
+ (id)identifier;
+ (BOOL)unregisterPropertyTypeForPropertyNamed:(id)arg1;
+ (BOOL)registerPropertyType:(id)arg1 forPropertyNamed:(id)arg2;
+ (id)typeOfPropertyNamed:(id)arg1;
+ (id)baseDefinitionsForAllPropertyDefinitionsInAllSpecificationDomains;
+ (id)allPropertyDefinitionsInSpecificationDomain:(id)arg1;
+ (id)allPropertyDefinitionsInAllSpecificationDomains;
+ (void)_addPropertyDefinitionsInSpecificationDomain:(id)arg1 toDictionary:(id)arg2;
+ (void)enumeratePropertyDefinitionsInSpecificationDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)enumerationPropertyDefinitionWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3;
+ (id)booleanPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)pathListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)propertyDefinitionFromPListDictionary:(id)arg1;
+ (id)_parsedDefaultValueForString:(id)arg1;
+ (id)dbgAllPropertyDefinitions;
@property(readonly) XCCommandLineFragmentGenerator *commandLineFragmentGenerator; // @synthesize commandLineFragmentGenerator=_commandLineFragmentGenerator;
@property(readonly) _Bool uiShouldStripMacroDefinition; // @synthesize uiShouldStripMacroDefinition=_uiShouldStripMacroDefinition;
- (void).cxx_destruct;
- (void)printToStdout;
- (id)description;
- (id)generateArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)argumentGenerationInfoProvidersForValue:(id)arg1;
- (id)generatedCommandLineArgumentsForValue:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)_generatedCommandLineArgumentsFromInstrux:(id)arg1 forValue:(id)arg2 withMacroExpansionScope:(id)arg3;
- (BOOL)propertyIsEnabledWithMacroExpansionScope:(id)arg1;
- (id)localizedAllowedValues;
- (id)localizedDescription;
- (id)localizedName;
- (void)setDefinitionLocationDescription:(id)arg1;
- (id)definitionLocationDescription;
- (id)valueForUndefinedKey:(id)arg1;
- (id)properties;
- (void)setUserDefined:(BOOL)arg1;
- (BOOL)isUserDefined;
- (BOOL)uiShouldRemoveIfEmptyValue;
- (id)nameOfOptionToSucceedInUserInterface;
- (id)nameOfOptionToPrecedeInUserInterface;
- (id)nameOfOptionToSucceedOnCommandLine;
- (id)nameOfOptionToPrecedeOnCommandLine;
- (id)categoryNameForUserInterface;
- (void)setCategory:(id)arg1;
- (id)category;
- (BOOL)isBasic;
- (BOOL)isAppleInternalOnly;
- (id)conditionExpression;
- (id)commandArgumentGenerationInfo;
- (BOOL)canGenerateCommandLineArguments;
- (id)conditionFlavors;
- (void)setPropertyDomain:(id)arg1;
- (id)propertyDomain;
- (BOOL)supportsFileType:(id)arg1;
- (id)supportedFileTypes;
- (BOOL)supportsArchitecture:(id)arg1 inDomain:(id)arg2;
- (id)supportedArchitecturesInDomain:(id)arg1;
- (id)supportedArchitectures;
- (id)additionalBuildSettings;
- (id)defaultValue;
- (id)allowedValues;
- (id)uiTypeString;
- (id)uiType;
- (BOOL)isListType;
- (id)typeString;
- (id)type;
- (id)name;
- (id)init;
- (id)initFromPListDictionary:(id)arg1;
- (void)_loadLocalizationsFromPropertyListDictionary:(id)arg1 stringsDictionary:(id)arg2;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3 isAppleInternalOnly:(BOOL)arg4 isBasic:(BOOL)arg5 commandLineArguments:(id)arg6;
- (id)initWithName:(id)arg1 uiType:(id)arg2 allowedValues:(id)arg3 defaultValue:(id)arg4 isAppleInternalOnly:(BOOL)arg5 isBasic:(BOOL)arg6 commandLineArguments:(id)arg7;

@end

