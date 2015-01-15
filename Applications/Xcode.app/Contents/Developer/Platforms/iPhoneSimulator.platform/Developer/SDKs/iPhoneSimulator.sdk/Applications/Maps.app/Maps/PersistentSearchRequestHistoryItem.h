//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HistoryItem.h"
#import "NSCopying.h"

@class GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

__attribute__((visibility("hidden")))
@interface PersistentSearchRequestHistoryItem : PBCodable <HistoryItem, NSCopying>
{
    double _latitude;
    double _latitudeSpan;
    double _longitude;
    double _longitudeSpan;
    double _position;
    double _timestamp;
    NSString *_displayLocation;
    NSString *_displayQuery;
    GEOPlaceSearchRequest *_request;
    GEOPlaceSearchResponse *_response;
    NSString *_syncIdentifier;
    struct {
        unsigned int latitude:1;
        unsigned int latitudeSpan:1;
        unsigned int longitude:1;
        unsigned int longitudeSpan:1;
        unsigned int position:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(retain, nonatomic) GEOPlaceSearchResponse *response; // @synthesize response=_response;
@property(nonatomic) double longitudeSpan; // @synthesize longitudeSpan=_longitudeSpan;
@property(nonatomic) double latitudeSpan; // @synthesize latitudeSpan=_latitudeSpan;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *displayLocation; // @synthesize displayLocation=_displayLocation;
@property(retain, nonatomic) NSString *displayQuery; // @synthesize displayQuery=_displayQuery;
@property(retain, nonatomic) GEOPlaceSearchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasSyncIdentifier;
@property(readonly, nonatomic) _Bool hasResponse;
@property(nonatomic) _Bool hasLongitudeSpan;
@property(nonatomic) _Bool hasLatitudeSpan;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(readonly, nonatomic) _Bool hasDisplayLocation;
@property(readonly, nonatomic) _Bool hasDisplayQuery;
@property(readonly, nonatomic) _Bool hasRequest;
- (int)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

