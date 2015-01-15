//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PLRevGeoPlace : NSObject
{
    NSMutableDictionary *_placeTypeInfoMap;
    _Bool _isHome;
}

+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
- (unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2;
- (id)description;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (id)placeInfoSetForOrderType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSMutableDictionary *placeTypeInfoMap;
- (void)removePlacesInPlaceInfoSet:(id)arg1 fromOrderType:(unsigned long long)arg2;
- (void)addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3 updateExisting:(_Bool)arg4;
- (void)mergeGEOMapItem:(id)arg1 updateExisting:(_Bool)arg2;
- (void)mergeCommonDataForGEOMapItem:(id)arg1 updateExisting:(_Bool)arg2;
- (id)initWithGEOMapItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

