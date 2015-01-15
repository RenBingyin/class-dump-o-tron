//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTCustomDataSpecifier, DVTStackBacktrace, IDEAnalyzeSchemeAction, IDEArchiveSchemeAction, IDEBuildSchemeAction, IDEContainer<IDECustomDataStoring>, IDEEntityIdentifier, IDEInstallSchemeAction, IDEIntegrateSchemeAction, IDELaunchSchemeAction, IDEProfileSchemeAction, IDERunContextManager, IDERunnable, IDETestSchemeAction, NSArray, NSData, NSError, NSNumber, NSString;

@interface IDEScheme : NSObject <DVTInvalidation>
{
    IDEBuildSchemeAction *_buildSchemeAction;
    IDETestSchemeAction *_testSchemeAction;
    IDELaunchSchemeAction *_launchSchemeAction;
    IDEArchiveSchemeAction *_archiveSchemeAction;
    IDEProfileSchemeAction *_profileSchemeAction;
    IDEAnalyzeSchemeAction *_analyzeSchemeAction;
    IDEInstallSchemeAction *_installSchemeAction;
    IDEIntegrateSchemeAction *_integrateSchemeAction;
    NSString *_lastUpgradeVersion;
    NSString *_cachedLastUpgradeVersion;
    BOOL _hasRunUpgradeCheck;
    BOOL _wasUpgraded;
    IDERunnable *_oldFormatArchivedRunnable;
    IDERunContextManager *_runContextManager;
    IDEContainer<IDECustomDataStoring> *_customDataStoreContainer;
    DVTCustomDataSpecifier *_customDataSpecifier;
    NSArray *_availableRunDestinations;
    BOOL _isShown;
    unsigned long long _orderHint;
    BOOL _dataStoreClosed;
    BOOL _deferredSaveScheduled;
    BOOL _registeredForIsBuildableNotifications;
    NSNumber *_isArchivable;
    id _isArchivableNotificationToken;
    NSNumber *_isInstallable;
    id _isInstallableNotificationToken;
    id _buildablesToken;
    BOOL _hasUnsupportedArchiveData;
    BOOL _transient;
    BOOL _wasCreatedForAppExtension;
    IDEEntityIdentifier *_schemeIdentifier;
    NSError *_loadError;
}

+ (BOOL)automaticallyNotifiesObserversOfOrderHint;
+ (BOOL)automaticallyNotifiesObserversOfIsShown;
+ (id)keyPathsForValuesAffectingDisambiguatedName;
+ (BOOL)automaticallyNotifiesObserversOfCustomDataStoreContainer;
+ (id)keyPathsForValuesAffectingIntegratable;
+ (id)keyPathsForValuesAffectingTestable;
+ (id)keyPathsForValuesAffectingAnalyzable;
+ (id)keyPathsForValuesAffectingProfilable;
+ (id)keyPathsForValuesAffectingRunnable;
+ (void)initialize;
+ (id)schemeFromXMLData:(id)arg1 withRunContextManager:(id)arg2 customDataStoreContainer:(id)arg3 customDataSpecifier:(id)arg4 isShown:(BOOL)arg5 orderHint:(unsigned long long)arg6 error:(id *)arg7;
+ (id)schemeWithRunContextManager:(id)arg1 customDataStoreContainer:(id)arg2 customDataSpecifier:(id)arg3;
@property BOOL wasCreatedForAppExtension; // @synthesize wasCreatedForAppExtension=_wasCreatedForAppExtension;
@property(retain) NSError *loadError; // @synthesize loadError=_loadError;
@property(copy, nonatomic) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(readonly) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(retain, nonatomic) IDEContainer<IDECustomDataStoring> *customDataStoreContainer; // @synthesize customDataStoreContainer=_customDataStoreContainer;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
@property(getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property BOOL wasUpgraded; // @synthesize wasUpgraded=_wasUpgraded;
@property BOOL hasRunUpgradeCheck; // @synthesize hasRunUpgradeCheck=_hasRunUpgradeCheck;
@property(copy) NSString *lastUpgradeVersion; // @synthesize lastUpgradeVersion=_lastUpgradeVersion;
@property(copy) NSString *cachedLastUpgradeVersion; // @synthesize cachedLastUpgradeVersion=_cachedLastUpgradeVersion;
@property(retain) IDEInstallSchemeAction *installSchemeAction; // @synthesize installSchemeAction=_installSchemeAction;
@property(retain) IDEIntegrateSchemeAction *integrateSchemeAction; // @synthesize integrateSchemeAction=_integrateSchemeAction;
@property(retain) IDEAnalyzeSchemeAction *analyzeSchemeAction; // @synthesize analyzeSchemeAction=_analyzeSchemeAction;
@property(retain) IDEProfileSchemeAction *profileSchemeAction; // @synthesize profileSchemeAction=_profileSchemeAction;
@property(retain) IDEArchiveSchemeAction *archiveSchemeAction; // @synthesize archiveSchemeAction=_archiveSchemeAction;
@property(retain) IDELaunchSchemeAction *launchSchemeAction; // @synthesize launchSchemeAction=_launchSchemeAction;
@property(retain) IDETestSchemeAction *testSchemeAction; // @synthesize testSchemeAction=_testSchemeAction;
@property(retain) IDEBuildSchemeAction *buildSchemeAction; // @synthesize buildSchemeAction=_buildSchemeAction;
- (void).cxx_destruct;
- (void)addBuildableProductRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPathRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLaunchPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addTestPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addArchiveAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addInstallAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addIntegrateAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAnalyzeAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addProfileAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLaunchAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addTestAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setWasCreatedForAppExtensionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLastUpgradeVersionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) NSData *xmlData;
- (BOOL)_executionActionsNeedCurrentArchiveVersion;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)_groupAndImposeDependenciesForOrderedOperations:(id)arg1;
- (id)_buildOperationGroupForExecutionEnvironment:(id)arg1 buildConfiguration:(id)arg2 buildPurpose:(int)arg3 buildCommand:(int)arg4 schemeCommand:(id)arg5 overridingProperties:(id)arg6 destination:(id)arg7 buildLog:(id)arg8 filePath:(id)arg9 restorePersistedBuildResults:(BOOL)arg10 schemeActionRecord:(id)arg11 overridingBuildables:(id)arg12 error:(id *)arg13;
- (id)_executionOperationForExecutionEnvironment:(id)arg1 build:(BOOL)arg2 onlyBuild:(BOOL)arg3 buildPurpose:(int)arg4 buildCommand:(int)arg5 schemeCommand:(id)arg6 title:(id)arg7 overridingProperties:(id)arg8 destination:(id)arg9 buildLog:(id)arg10 filePath:(id)arg11 overridingBuildConfiguration:(id)arg12 restorePersistedBuildResults:(BOOL)arg13 invocationRecord:(id)arg14 overridingTestingSpecifiers:(id)arg15 error:(id *)arg16 actionCallbackBlock:(CDUnknownBlockType)arg17;
- (id)integrateWithExecutionContext:(id)arg1 destination:(id)arg2 overridingProperties:(id)arg3 schemeCommand:(id)arg4 commandName:(id)arg5 invocationRecord:(id)arg6 error:(id *)arg7;
- (id)integrateOperationWithExecutionContext:(id)arg1 destination:(id)arg2 overridingProperties:(id)arg3 schemeCommand:(id)arg4 invocationRecord:(id)arg5 error:(id *)arg6 buildLogCreationBlock:(CDUnknownBlockType)arg7 actionCallbackBlock:(CDUnknownBlockType)arg8;
- (id)installWithExecutionContext:(id)arg1 onlyBuild:(BOOL)arg2 destination:(id)arg3 overridingProperties:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7 error:(id *)arg8;
- (id)archiveWithExecutionContext:(id)arg1 onlyBuild:(BOOL)arg2 destination:(id)arg3 overridingProperties:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7 error:(id *)arg8;
- (id)archiveOperationWithExecutionContext:(id)arg1 onlyBuild:(BOOL)arg2 destination:(id)arg3 overridingProperties:(id)arg4 schemeCommand:(id)arg5 buildLog:(id)arg6 overridingBuildConfiguration:(id)arg7 invocationRecord:(id)arg8 name:(id)arg9 title:(id)arg10 error:(id *)arg11 actionCallbackBlock:(CDUnknownBlockType)arg12;
- (id)testWithExecutionContext:(id)arg1 buildIfNeeded:(BOOL)arg2 onlyBuild:(BOOL)arg3 destination:(id)arg4 overridingProperties:(id)arg5 schemeCommand:(id)arg6 commandName:(id)arg7 overridingTestingSpecifiers:(id)arg8 buildLog:(id)arg9 invocationRecord:(id)arg10 error:(id *)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (id)testOperationWithExecutionContext:(id)arg1 buildIfNeeded:(BOOL)arg2 onlyBuild:(BOOL)arg3 destination:(id)arg4 overridingProperties:(id)arg5 overridingTestingSpecifiers:(id)arg6 schemeCommand:(id)arg7 buildLog:(id)arg8 overridingBuildConfiguration:(id)arg9 restorePersistedBuildResults:(BOOL)arg10 invocationRecord:(id)arg11 name:(id)arg12 title:(id)arg13 error:(id *)arg14 actionCallbackBlock:(CDUnknownBlockType)arg15;
- (id)profileWithExecutionContext:(id)arg1 buildIfNeeded:(BOOL)arg2 onlyBuild:(BOOL)arg3 destination:(id)arg4 overridingProperties:(id)arg5 schemeCommand:(id)arg6 commandName:(id)arg7 overridingTestingSpecifiers:(id)arg8 invocationRecord:(id)arg9 error:(id *)arg10;
- (id)profileWithExecutionContext:(id)arg1 buildIfNeeded:(BOOL)arg2 onlyBuild:(BOOL)arg3 destination:(id)arg4 overridingProperties:(id)arg5 schemeCommand:(id)arg6 commandName:(id)arg7 invocationRecord:(id)arg8 error:(id *)arg9;
- (id)runWithExecutionContext:(id)arg1 buildIfNeeded:(BOOL)arg2 onlyBuild:(BOOL)arg3 destination:(id)arg4 overridingProperties:(id)arg5 schemeCommand:(id)arg6 commandName:(id)arg7 invocationRecord:(id)arg8 error:(id *)arg9;
- (id)analyzeWithExecutionContext:(id)arg1 onlyBuild:(BOOL)arg2 destination:(id)arg3 overridingProperties:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7 error:(id *)arg8;
- (id)analyzeOperationWithExecutionContext:(id)arg1 onlyBuild:(BOOL)arg2 destination:(id)arg3 overridingProperties:(id)arg4 buildLog:(id)arg5 overridingBuildConfiguration:(id)arg6 restorePersistedBuildResults:(BOOL)arg7 invocationRecord:(id)arg8 name:(id)arg9 title:(id)arg10 error:(id *)arg11;
- (id)cleanWithExecutionContext:(id)arg1 destination:(id)arg2 overridingProperties:(id)arg3 schemeCommand:(id)arg4 commandName:(id)arg5 invocationRecord:(id)arg6 error:(id *)arg7;
- (void)_reportExecutionOperationNamed:(id)arg1 shouldBuild:(BOOL)arg2 onlyBuild:(BOOL)arg3 buildPurpose:(int)arg4;
- (id)buildWithPurpose:(int)arg1 buildCommand:(int)arg2 schemeCommand:(id)arg3 executionContext:(id)arg4 destination:(id)arg5 overridingProperties:(id)arg6 commandName:(id)arg7 filePath:(id)arg8 invocationRecord:(id)arg9 title:(id)arg10 error:(id *)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (id)buildOperationWithPurpose:(int)arg1 buildCommand:(int)arg2 schemeCommand:(id)arg3 executionContext:(id)arg4 destination:(id)arg5 overridingProperties:(id)arg6 filePath:(id)arg7 buildLog:(id)arg8 overridingBuildConfiguration:(id)arg9 restorePersistedBuildResults:(BOOL)arg10 invocationRecord:(id)arg11 title:(id)arg12 error:(id *)arg13 completionBlock:(CDUnknownBlockType)arg14;
- (id)_addActionRecordToInvocationRecord:(id)arg1 shouldBuild:(BOOL)arg2 onlyBuild:(BOOL)arg3 schemeCommand:(id)arg4 runDestination:(id)arg5 title:(id)arg6;
- (void)_updateOrderHint:(unsigned long long)arg1;
@property unsigned long long orderHint;
- (void)_updateIsShown:(BOOL)arg1;
@property BOOL isShown;
@property BOOL isShared;
@property(readonly) NSString *disambiguatedName;
@property(copy) NSString *name;
- (void)_primitiveSetCustomDataStoreContainer:(id)arg1;
- (void)_updateCustomDataStoreContainer:(id)arg1 andSpecifier:(id)arg2;
- (void)_invalidateAvailableRunDestinations;
@property(readonly) NSArray *availableRunDestinations;
- (void)buildConfigurationDidChange:(id)arg1;
- (id)buildParametersForSchemeCommand:(id)arg1 destination:(id)arg2;
- (id)buildConfigurationForSchemeCommand:(id)arg1;
- (id)buildablesForSchemeCommand:(id)arg1;
- (id)runnablePathForSchemeCommand:(id)arg1 destination:(id)arg2;
- (id)schemeActionForSchemeCommand:(id)arg1;
@property(readonly, getter=isInstallable) BOOL installable;
@property(readonly, getter=isIntegratable) BOOL integratable;
@property(readonly, getter=isArchivable) BOOL archivable;
@property(readonly, getter=isTestable) BOOL testable;
@property(readonly, getter=isAnalyzable) BOOL analyzable;
@property(readonly, getter=isProfilable) BOOL profilable;
@property(readonly, getter=isRunnable) BOOL runnable;
@property(readonly, getter=isBuildable) BOOL buildable;
- (void)primitiveInvalidate;
@property(readonly) BOOL isClosed;
- (void)customDataStoreContainerClosing:(id)arg1;
- (void)performDelayedSave:(id)arg1;
- (void)markSchemeDirty;
- (void)resolveBuildablesFromImport;
@property(readonly, copy) NSString *description;
- (id)initFromUnarchiver:(BOOL)arg1 runContextManager:(id)arg2 customDataStoreContainer:(id)arg3 customDataSpecifier:(id)arg4 isShown:(BOOL)arg5 orderHint:(unsigned long long)arg6;
- (void)_createDefaultSchemeActions;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

