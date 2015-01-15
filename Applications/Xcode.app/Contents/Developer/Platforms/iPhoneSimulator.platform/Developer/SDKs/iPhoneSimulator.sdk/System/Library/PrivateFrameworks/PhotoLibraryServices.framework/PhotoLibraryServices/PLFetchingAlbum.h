//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

@class NSArray, NSData, NSFetchRequest, NSOrderedSet, NSPredicate, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum
{
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
    NSPredicate *_ALAssetsGroupFilterPredicate;
    unsigned long long _batchSize;
}

+ (id)sortDescriptorsForAlbumKind:(int)arg1;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)_panoramasAlbumPredicate;
+ (_Bool)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (_Bool)contextShouldIgnoreChangesForFetchRequest;
+ (_Bool)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (_Bool)contextShouldIgnoreChangesForFetchedAssets;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate; // @synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate;
- (_Bool)mayHaveAssetsInCommon:(id)arg1;
- (id)fastPointerAccessSetForAssets:(id)arg1;
@property(readonly, nonatomic) _Bool hasAssetsCache;
- (void)updateSnapshotAndClearCaches:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (id)tertiaryKeyAsset;
- (id)secondaryKeyAsset;
- (id)keyAsset;
- (id)_cachedKeyAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (_Bool)isEmpty;
- (unsigned long long)approximateCount;
- (unsigned long long)count;
- (id)mutableAssets;
- (void)setAssets:(id)arg1;
- (id)assets;
- (id)_performFetchWithRequest:(id)arg1;
- (id)primitiveAssets;
@property(readonly, retain, nonatomic) NSPredicate *extraFilterPredicate;
@property(retain, nonatomic) NSFetchRequest *fetchRequest;
- (void)setupFetchRequest;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSData *customQueryParameters; // @dynamic customQueryParameters;
@property(retain, nonatomic) NSString *customQueryType; // @dynamic customQueryType;
@property(retain, nonatomic) NSOrderedSet *fetchedAssets; // @dynamic fetchedAssets;

@end

