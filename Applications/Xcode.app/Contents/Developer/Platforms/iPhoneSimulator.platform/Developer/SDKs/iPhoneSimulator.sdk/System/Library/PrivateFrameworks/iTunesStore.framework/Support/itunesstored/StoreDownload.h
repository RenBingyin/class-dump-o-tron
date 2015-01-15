//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDownloadMetadata.h"

@class NSArray, NSData, NSNumber;

@interface StoreDownload : SSDownloadMetadata
{
    NSData *_epubRightsSinfData;
}

- (_Bool)_patchPackageDictionary:(id)arg1 matchesInstallApplication:(id)arg2;
- (id)_newPrimaryAssetsWithAssetDictionary:(id)arg1 assetType:(id)arg2;
- (id)_newDeltaPackageAssetsWithAssetDictionary:(id)arg1;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (id)_newAssetPropertiesWithStoreDictionary:(id)arg1 assetType:(id)arg2;
- (id)_epubRightsSinfData;
- (id)_copySinfValueFromEpubRightsDataWithField:(long long)arg1;
- (id)_copySinfValueWithField:(long long)arg1;
- (id)_copyPinfValueWithField:(long long)arg1;
- (id)newDownloadProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly) NSNumber *familyAccountIdentifier;
@property(readonly) NSNumber *downloaderAccountIdentifier;
@property(readonly) NSNumber *purchaserAccountIdentifier;
@property(readonly) NSNumber *redownloadedStatus;
@property(readonly) NSNumber *matchedStatus;
@property(readonly) NSArray *assets;
- (void)dealloc;
- (id)initWithDownload:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

