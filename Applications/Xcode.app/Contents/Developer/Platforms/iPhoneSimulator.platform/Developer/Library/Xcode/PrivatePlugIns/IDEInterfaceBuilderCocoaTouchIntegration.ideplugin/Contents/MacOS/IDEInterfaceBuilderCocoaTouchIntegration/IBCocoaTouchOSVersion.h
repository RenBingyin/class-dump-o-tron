//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBScopedSingleton.h"

@class NSString;

@interface IBCocoaTouchOSVersion : NSObject <IBScopedSingleton>
{
}

+ (id)allHybridNIBPackageRuntimeFileNames;
+ (id)cocoaTouchOSVersionWithArchiveIdentifier:(id)arg1;
+ (id)iOS6AndEarlierVersion;
+ (id)iOS7XVersion;
+ (id)iOS8AndLaterVersion;
+ (id)oldestVersion;
+ (id)currentVersion;
+ (id)designatedVersionForUserInterfaceEra:(long long)arg1;
+ (id)osVersionForSystemTarget:(long long)arg1;
+ (id)versionsFromNewestToOldest;
+ (id)versionsFromOldestToNewest;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (BOOL)isAtLeast:(long long)arg1;
- (BOOL)matchesSystemTarget:(long long)arg1;
- (id)firstInapplicableSystemTarget;
- (id)firstApplicableSystemTarget;
- (id)compiledStoryboardInfoPlistFileName;
- (id)hybridNIBPackageRuntimeFileName;
- (id)displayNameForUserInterfaceStyle;
- (id)displayName;
- (long long)userInterfaceEra;
- (id)explicitArchiveIdentifier;
- (id)archiveIdentifier;
- (id)targetRuntimeIdentifierSuffix;
- (id)identifier;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

