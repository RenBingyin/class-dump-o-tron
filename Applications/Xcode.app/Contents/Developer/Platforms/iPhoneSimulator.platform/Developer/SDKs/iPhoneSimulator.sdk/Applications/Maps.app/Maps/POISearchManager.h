//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSCache, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface POISearchManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSCache *_poiCache;
    NSMapTable *_completionHandlers;
    NSMutableDictionary *_canShowActivityIndicatorForBusinessIDs;
    NSMutableDictionary *_loadingForBusinessIDs;
    NSMutableDictionary *_loadingTokensForBusinessIDs;
}

- (void).cxx_destruct;
- (void)didReceiveRAPNotification;
- (void)searchForBusinessID:(unsigned long long)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchForBusinessID:(unsigned long long)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 searchResultType:(unsigned int)arg4;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_cacheAndHandleSearchResult:(id)arg1 businessID:(unsigned long long)arg2 completionHandlers:(id)arg3;
- (id)searchResultForBusinessID:(unsigned long long)arg1;
- (void)_setLoading:(_Bool)arg1 forBusinessID:(unsigned long long)arg2;
- (void)setCanShowActivityIndicator:(_Bool)arg1 forBusinessID:(unsigned long long)arg2;
- (void)_updateActivityIndicatorForBusinessID:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

