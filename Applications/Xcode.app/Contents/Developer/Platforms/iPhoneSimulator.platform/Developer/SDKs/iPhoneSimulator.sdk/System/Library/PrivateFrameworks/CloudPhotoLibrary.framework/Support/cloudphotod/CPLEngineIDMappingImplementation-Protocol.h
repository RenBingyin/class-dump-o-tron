//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class NSArray, NSString;

@protocol CPLEngineIDMappingImplementation <CPLEngineStorageImplementation>
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)resetAllFinalCloudIdentifiersWithError:(id *)arg1;
- (_Bool)removeMappingForCloudIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)markAllPendingIdentifiersAsFinalWithError:(id *)arg1;
- (_Bool)setFinalCloudIdentifier:(NSString *)arg1 forPendingCloudIdentifier:(NSString *)arg2 error:(id *)arg3;
- (_Bool)addCloudIdentifier:(NSString *)arg1 forLocalIdentifier:(NSString *)arg2 isFinal:(_Bool)arg3 error:(id *)arg4;
- (NSString *)localIdentifierForCloudIdentifier:(NSString *)arg1 isFinal:(_Bool *)arg2;
- (NSString *)cloudIdentifierForLocalIdentifier:(NSString *)arg1 isFinal:(_Bool *)arg2;

@optional
- (id <NSFastEnumeration>)mappingEnumeratorForCloudIdentifiers:(NSArray *)arg1 constructor:(CPLIDMapping * (^)(NSString *, NSString *, _Bool))arg2;
- (id <NSFastEnumeration>)mappingEnumeratorForLocalIdentifiers:(NSArray *)arg1 constructor:(CPLIDMapping * (^)(NSString *, NSString *, _Bool))arg2;
@end

