//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSURL;

@interface MIGlobalConfiguration : NSObject
{
    NSURL *_homePath;
    NSURL *_rootPath;
    NSURL *_carrierBundlesDir;
    NSURL *_stagingRoot;
    NSURL *_systemAppsDir;
    NSURL *_internalAppsDir;
    NSURL *_developerAppsDir;
    NSURL *_factoryMountDir;
    NSURL *_systemFrameworksRootDirectory;
    NSURL *_internalFrameworksRootDirectory;
    NSURL *_developerFrameworksRootDirectory;
    NSURL *_dataDir;
    NSURL *_archiveDir;
    NSURL *_cachesDir;
    NSSet *_allFrameworksDirectories;
    NSDictionary *_systemAppBundleIDToInfoMap;
    NSDictionary *_internalAppBundleIDToInfoMap;
    _Bool _lowerInstallPriority;
    _Bool _skipDeviceFamilyCheck;
    _Bool _allowPatchWithoutSinf;
    unsigned int _uid;
    unsigned int _gid;
}

+ (id)sharedInstance;
@property(readonly) unsigned int gid; // @synthesize gid=_gid;
@property(readonly) unsigned int uid; // @synthesize uid=_uid;
@property(readonly) _Bool allowPatchWithoutSinf; // @synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf;
@property(readonly) _Bool skipDeviceFamilyCheck; // @synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck;
@property(readonly) _Bool lowerInstallPriority; // @synthesize lowerInstallPriority=_lowerInstallPriority;
- (void).cxx_destruct;
- (id)diskImageApplicationsDirectories;
@property(readonly) NSDictionary *diskImageAppBundleIDToInfoMap;
- (void)reScanInternalApps;
- (void)reScanSystemApps;
@property(readonly) NSDictionary *internalAppBundleIDToInfoMap;
@property(readonly) NSDictionary *systemAppBundleIDToInfoMap;
@property(readonly) NSSet *builtInApplicationBundleIDs;
- (id)_bundleIDMapForAppsInDirectory:(id)arg1;
@property(readonly) NSSet *installationBlacklist;
@property(readonly) NSArray *appUserDataItemNames;
@property(readonly) NSArray *appBundleMetadataItemNames;
@property(readonly) NSURL *archiveDirectory;
@property(readonly) NSURL *cachesDirectory;
@property(readonly) NSURL *dataDirectory;
@property(readonly) NSSet *allFrameworksDirectories;
@property(readonly) NSURL *developerFrameworksRootDirectory;
@property(readonly) NSURL *internalFrameworksRootDirectory;
@property(readonly) NSURL *systemFrameworksRootDirectory;
@property(readonly) NSURL *homeDirectory;
@property(readonly) NSURL *factoryMountDirectory;
@property(readonly) NSURL *developerAppsDirectory;
@property(readonly) NSURL *internalAppsDirectory;
@property(readonly) NSURL *systemAppsDirectory;
@property(readonly) NSURL *logDirectory;
@property(readonly) NSURL *stagingRoot;
@property(readonly) NSURL *carrierBundlesDirectory;
@property(readonly) NSURL *oldGroupContainersPath;
@property(readonly) NSURL *oldInstallMapPath;
@property(readonly) NSURL *oldContainerPath;
- (id)init;

@end

