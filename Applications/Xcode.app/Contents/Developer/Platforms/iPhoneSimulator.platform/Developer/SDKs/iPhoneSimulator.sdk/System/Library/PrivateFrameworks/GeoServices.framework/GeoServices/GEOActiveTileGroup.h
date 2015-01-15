//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOVersionManifest, NSMutableArray, NSString;

@interface GEOActiveTileGroup : PBCodable <NSCopying>
{
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_forwardGeocoderURL;
    unsigned int _identifier;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSString *_regionalResourcesURL;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    NSString *_usageURL;
    GEOVersionManifest *_versionManifest;
}

@property(retain, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property(retain, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property(retain, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property(retain, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property(retain, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property(retain, nonatomic) NSString *problemNotificationAvailabilityURL; // @synthesize problemNotificationAvailabilityURL=_problemNotificationAvailabilityURL;
@property(retain, nonatomic) NSString *usageURL; // @synthesize usageURL=_usageURL;
@property(retain, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property(retain, nonatomic) NSString *reverseGeocoderVersionsURL; // @synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL;
@property(retain, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property(retain, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property(retain, nonatomic) NSString *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property(retain, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property(retain, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property(retain, nonatomic) NSString *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
@property(retain, nonatomic) NSString *mapMatchURL; // @synthesize mapMatchURL=_mapMatchURL;
@property(retain, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property(retain, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property(retain, nonatomic) NSString *locationShiftURL; // @synthesize locationShiftURL=_locationShiftURL;
@property(retain, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property(retain, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property(retain, nonatomic) NSString *forwardGeocoderURL; // @synthesize forwardGeocoderURL=_forwardGeocoderURL;
@property(retain, nonatomic) NSString *reverseGeocoderURL; // @synthesize reverseGeocoderURL=_reverseGeocoderURL;
@property(retain, nonatomic) NSString *autocompleteURL; // @synthesize autocompleteURL=_autocompleteURL;
@property(retain, nonatomic) NSString *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;
@property(retain, nonatomic) NSString *searchURL; // @synthesize searchURL=_searchURL;
@property(retain, nonatomic) NSString *regionalResourcesURL; // @synthesize regionalResourcesURL=_regionalResourcesURL;
@property(retain, nonatomic) NSMutableArray *regionalResourceRegions; // @synthesize regionalResourceRegions=_regionalResourceRegions;
@property(retain, nonatomic) NSMutableArray *regionalResourceTiles; // @synthesize regionalResourceTiles=_regionalResourceTiles;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasVersionManifest;
@property(readonly, nonatomic) _Bool hasProblemOptInURL;
@property(readonly, nonatomic) _Bool hasDispatcherURL;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)clearAnnouncementsSupportedLanguages;
@property(readonly, nonatomic) _Bool hasAnnouncementsURL;
@property(readonly, nonatomic) _Bool hasProblemNotificationAvailabilityURL;
@property(readonly, nonatomic) _Bool hasUsageURL;
@property(readonly, nonatomic) _Bool hasProblemCategoriesURL;
@property(readonly, nonatomic) _Bool hasReverseGeocoderVersionsURL;
@property(readonly, nonatomic) _Bool hasProblemStatusURL;
@property(readonly, nonatomic) _Bool hasProblemSubmissionURL;
@property(readonly, nonatomic) _Bool hasPolyLocationShiftURL;
@property(readonly, nonatomic) _Bool hasAddressCorrectionUpdateURL;
@property(readonly, nonatomic) _Bool hasAddressCorrectionInitURL;
@property(readonly, nonatomic) _Bool hasSimpleETAURL;
@property(readonly, nonatomic) _Bool hasResourcesURL;
@property(readonly, nonatomic) _Bool hasMapMatchURL;
@property(readonly, nonatomic) _Bool hasReleaseInfo;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocoderURL;
@property(readonly, nonatomic) _Bool hasLocationShiftURL;
@property(readonly, nonatomic) _Bool hasEtaURL;
@property(readonly, nonatomic) _Bool hasDirectionsURL;
@property(readonly, nonatomic) _Bool hasForwardGeocoderURL;
@property(readonly, nonatomic) _Bool hasReverseGeocoderURL;
@property(readonly, nonatomic) _Bool hasAutocompleteURL;
@property(readonly, nonatomic) _Bool hasSearchAttributionManifestURL;
@property(readonly, nonatomic) _Bool hasSearchURL;
@property(readonly, nonatomic) _Bool hasRegionalResourcesURL;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceRegionsCount;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)clearRegionalResourceRegions;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceTilesCount;
- (void)addRegionalResourceTile:(id)arg1;
- (void)clearRegionalResourceTiles;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
- (void)dealloc;
- (id)regionalResourceRegionsForMapRect:(CDStruct_02837cd9)arg1;
- (id)flatRegionalResourceTilesForMapRect:(CDStruct_02837cd9)arg1;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey *)arg1;
- (void)_resetBestLanguages;
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey *)arg1 useStatusCodes:(_Bool *)arg2;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;

@end

