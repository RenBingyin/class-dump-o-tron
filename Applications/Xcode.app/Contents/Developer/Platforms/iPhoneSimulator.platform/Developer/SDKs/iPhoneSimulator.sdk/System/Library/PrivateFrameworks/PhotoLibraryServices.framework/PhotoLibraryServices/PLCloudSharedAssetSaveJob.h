//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, MSASAssetCollection, NSArray, NSDictionary, NSString;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    _Bool _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    _Bool _isVideo;
    NSString *_currentFilePath;
    NSString *_currentCloudAssetGUID;
    unsigned long long _currentCloudAssetMediaAssetType;
    NSString *_cloudAlbumGUID;
    NSString *_cloudPersonID;
    MSASAssetCollection *_currentCloudAssetCollection;
    NSArray *_assetCollectionInfos;
    NSArray *_cloudAssetGUIDsToDelete;
    long long _jobType;
    NSDictionary *_mstreamdInfoDictionary;
}

+ (id)placeholderImageProperties;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;
+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (_Bool)_lightweightReimportCacheDirectoryExists;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollectionWithGUID:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(_Bool)arg7;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
@property(retain, nonatomic) NSArray *cloudAssetGUIDsToDelete; // @synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSArray *assetCollectionInfos; // @synthesize assetCollectionInfos=_assetCollectionInfos;
@property(retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection; // @synthesize currentCloudAssetCollection=_currentCloudAssetCollection;
@property(retain, nonatomic) NSString *cloudPersonID; // @synthesize cloudPersonID=_cloudPersonID;
@property(retain, nonatomic) NSString *cloudAlbumGUID; // @synthesize cloudAlbumGUID=_cloudAlbumGUID;
@property(nonatomic) unsigned long long currentCloudAssetMediaAssetType; // @synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType;
@property(retain, nonatomic) NSString *currentCloudAssetGUID; // @synthesize currentCloudAssetGUID=_currentCloudAssetGUID;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (short)attemptLightweightReimportAssetData;
- (void)saveJobAssetWithPlaceholderKind:(short)arg1;
- (_Bool)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (_Bool)_parseISO6709String:(id)arg1 outLatitude:(double *)arg2 outLongitude:(double *)arg3;
- (_Bool)_createPlaceHolderInSharedAlbum:(id)arg1;
- (void)executeDaemonOperationSaveAssetJobType;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1;
- (_Bool)isProcessingThumbnail;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

