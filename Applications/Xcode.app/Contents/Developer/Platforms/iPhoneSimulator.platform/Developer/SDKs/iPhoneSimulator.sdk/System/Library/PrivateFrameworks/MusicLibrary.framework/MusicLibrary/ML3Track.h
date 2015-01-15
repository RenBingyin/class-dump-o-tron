//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity
{
}

+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (_Bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (_Bool)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;
+ (_Bool)trackValueAreInTheCloud:(id)arg1;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long *)arg4;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long *)arg3;
+ (_Bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)unsettableProperties;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (_Bool)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (_Bool)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (id)composersDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)podcastsDefaultOrderingTerms;
+ (id)genresDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)orderingTermsForITTGTrackOrder:(unsigned int)arg1 descending:(_Bool)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)_seriesProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_playbackInfoProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_genreProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_composerProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_artistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_albumProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_podcastProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_tvShowProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_movieProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)_songProtocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
- (void)updateStoreBookmarkMetadataIdentifier;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)updateCollectionCloudStatus;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (id)rawIntegrity;
- (_Bool)updateIntegrity;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)absoluteFilePath;
- (void)_createVideoSnapshotAtTime:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_screenshotArtworkDataStoredAsItemArtwork;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (_Bool)needsVideoSnapshot;
- (void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(_Bool)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (_Bool)populateArtworkCacheWithArtworkData:(id)arg1;
- (id)protocolItem;
- (id)multiverseIdentifier;

@end

