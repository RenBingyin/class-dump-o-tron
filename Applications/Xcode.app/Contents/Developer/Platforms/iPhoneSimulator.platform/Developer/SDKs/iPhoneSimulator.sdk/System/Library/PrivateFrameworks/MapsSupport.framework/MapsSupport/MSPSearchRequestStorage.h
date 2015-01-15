//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MSPDirectionsSearch, MSPQuerySearch, NSString, PBUnknownFields;

@interface MSPSearchRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPQuerySearch *_querySearch;
    int _searchType;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int searchType:1;
    } _has;
}

@property(retain, nonatomic) MSPDirectionsSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(retain, nonatomic) MSPQuerySearch *querySearch; // @synthesize querySearch=_querySearch;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDirectionsSearch;
@property(readonly, nonatomic) _Bool hasQuerySearch;
@property(nonatomic) _Bool hasPosition;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasSearchType;

@end

