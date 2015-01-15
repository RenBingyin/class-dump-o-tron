//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDViewportInfo, NSString;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying>
{
    unsigned int _maxResults;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_6c9bcd7c _has;
}

@property(retain, nonatomic) GEOLatLng *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSearchLocation;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(readonly, nonatomic) _Bool hasSearchString;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) _Bool hasSortOrder;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
- (void)dealloc;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3;

@end

