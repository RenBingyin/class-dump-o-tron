//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>
{
}

- (_Bool)resetWithError:(id *)arg1;
- (_Bool)resetAllFinalCloudIdentifiersWithError:(id *)arg1;
- (_Bool)removeMappingForCloudIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)markAllPendingIdentifiersAsFinalWithError:(id *)arg1;
- (_Bool)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(_Bool)arg3 error:(id *)arg4;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

