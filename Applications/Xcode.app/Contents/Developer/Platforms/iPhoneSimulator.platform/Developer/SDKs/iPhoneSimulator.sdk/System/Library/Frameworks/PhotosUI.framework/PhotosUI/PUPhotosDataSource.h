//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUPhotoLibraryUIChangeObserver.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSPredicate, NSSet, NSString, PHFetchResult, PUPhotosDataSourceSectionCache;

@interface PUPhotosDataSource : NSObject <PUPhotoLibraryUIChangeObserver>
{
    NSHashTable *_observers;
    PUPhotosDataSourceSectionCache *__sectionCache;
    PUPhotosDataSourceSectionCache *__preparedSectionCache;
    NSMutableDictionary *_resultsForAssetCollection;
    NSMutableSet *_inaccurateAssetCollections;
    NSMutableDictionary *_infoForAssetCollection;
    _Bool _backgroundFetchOriginSectionChanged;
    _Bool _needToStartBackgroundFetch;
    _Bool _isBackgroundFetching;
    _Bool _interruptBackgroundFetch;
    NSMutableDictionary *_pendingResultsForAssetCollection;
    NSObject<OS_dispatch_queue> *_pendingResultsIsolationQueue;
    _Bool _processAndPublishScheduledOnRunloop;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableOrderedSet *_queuedAssetCollectionsToFetch;
    _Bool _slowBackgroundFetch;
    PHFetchResult *_collectionListFetchResult;
    long long _backgroundFetchOriginSection;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    unsigned long long __previousCollectionsCount;
}

@property(nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property(readonly, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) long long backgroundFetchOriginSection; // @synthesize backgroundFetchOriginSection=_backgroundFetchOriginSection;
@property(retain, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (void)_didFinishBackgroundFetching;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (void)_cancelBackgroundFetchIfNeeded;
- (void)_startBackgroundFetchIfNeeded;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)_areFiltersDisabledForAssetCollection:(id)arg1;
- (void)setDisableFilters:(_Bool)arg1 forAssetCollection:(id)arg2;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)clearResultsForAssetCollection:(id)arg1;
- (id)approximateAssetsAtIndexPaths:(id)arg1 consolidatingFetches:(_Bool)arg2;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)infoForAssetCollection:(id)arg1;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (id)assetCollectionForSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)_sectionCache;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
@property(readonly, nonatomic) long long estimatedVideosCount;
@property(readonly, nonatomic) long long estimatedPhotosCount;
- (void)_interruptBackgroundFetch;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishChange:(id)arg1;
- (void)_publishWillChange;
- (void)_publishReloadChange;
- (id)_createFilteredFetchResultForAssetCollection:(id)arg1 calledOnMainQueue:(_Bool)arg2;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (_Bool)_isAssetCollectionAccurate:(id)arg1;
- (_Bool)_allSectionsAccurate;
- (void)dealloc;
- (id)initWithCollectionListFetchResult:(id)arg1 filterPredicate:(id)arg2 allowedUUIDs:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

