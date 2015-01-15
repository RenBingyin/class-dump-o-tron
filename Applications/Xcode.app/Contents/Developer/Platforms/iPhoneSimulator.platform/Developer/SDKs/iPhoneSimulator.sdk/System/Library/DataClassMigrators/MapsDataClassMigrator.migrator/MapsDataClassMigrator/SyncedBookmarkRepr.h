//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface SyncedBookmarkRepr : PBCodable <NSCopying>
{
    unsigned long long _businessID;
    double _latitude;
    double _longitude;
    double _regionLatitude;
    double _regionLatitudeDelta;
    double _regionLongitude;
    double _regionLongitudeDelta;
    NSString *_contactIdentifier;
    int _directionsMode;
    NSMutableArray *_places;
    unsigned int _providerID;
    NSString *_singleLineAddress;
    NSString *_title;
    int _type;
    struct {
        unsigned int businessID:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int regionLatitude:1;
        unsigned int regionLatitudeDelta:1;
        unsigned int regionLongitude:1;
        unsigned int regionLongitudeDelta:1;
        unsigned int directionsMode:1;
        unsigned int providerID:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *places; // @synthesize places=_places;
@property(nonatomic) int directionsMode; // @synthesize directionsMode=_directionsMode;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) unsigned int providerID; // @synthesize providerID=_providerID;
@property(nonatomic) double regionLongitudeDelta; // @synthesize regionLongitudeDelta=_regionLongitudeDelta;
@property(nonatomic) double regionLatitudeDelta; // @synthesize regionLatitudeDelta=_regionLatitudeDelta;
@property(nonatomic) double regionLongitude; // @synthesize regionLongitude=_regionLongitude;
@property(nonatomic) double regionLatitude; // @synthesize regionLatitude=_regionLatitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *singleLineAddress; // @synthesize singleLineAddress=_singleLineAddress;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)placesAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)addPlaces:(id)arg1;
- (void)clearPlaces;
@property(nonatomic) _Bool hasDirectionsMode;
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(nonatomic) _Bool hasBusinessID;
@property(nonatomic) _Bool hasProviderID;
@property(nonatomic) _Bool hasRegionLongitudeDelta;
@property(nonatomic) _Bool hasRegionLatitudeDelta;
@property(nonatomic) _Bool hasRegionLongitude;
@property(nonatomic) _Bool hasRegionLatitude;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(readonly, nonatomic) _Bool hasSingleLineAddress;
@property(readonly, nonatomic) _Bool hasTitle;

@end

