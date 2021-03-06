//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface XCArchivedApplicationManager : NSObject
{
    NSMutableSet *_archivedBuilds;
    NSMutableSet *_archivedApplications;
}

+ (id)appArchiverForPlatform:(id)arg1;
+ (Class)appArchiveClassForPlatform:(id)arg1;
+ (id)appArchiveClasses;
+ (id)appArchiverExtensionForPlatform:(id)arg1;
+ (id)appArchiverExtensions;
+ (id)preferedArchivedApplicationsDirectory;
+ (id)archivedApplicationsSearchPaths;
+ (id)appArchiverExtensionPoint;
+ (id)sharedArchivedApplicationManager;
- (void)removeArchivedBuilds:(id)arg1;
- (void)removeArchivedBuildsObject:(id)arg1;
- (void)addArchivedBuilds:(id)arg1;
- (void)addArchivedBuildsObject:(id)arg1;
- (void)setArchivedBuilds:(id)arg1;
- (void)_updateSynthesizedArchivedApplications;
- (id)_applicationForBuild:(id)arg1;
@property(readonly, copy) NSSet *archivedBuilds;
@property(readonly) NSMutableSet *mutableBuilds;
- (void)removeArchivedApplications:(id)arg1;
- (void)removeArchivedApplicationsObject:(id)arg1;
- (void)addArchivedApplications:(id)arg1;
- (void)addArchivedApplicationsObject:(id)arg1;
- (void)setArchivedApplications:(id)arg1;
@property(readonly, copy) NSSet *archivedApplications;
- (id)mutableArchivedApplications;
- (void)scanForArchivedApplications;
- (void)_noteAddedBuild:(id)arg1;
- (id)init;

@end

