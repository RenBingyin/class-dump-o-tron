//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlaceGlobalResult, NSMutableArray;

@interface GEOPDPlaceResponse : PBCodable <NSCopying>
{
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_placeResults;
    int _requestType;
    int _status;
    struct {
        unsigned int requestType:1;
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(retain, nonatomic) GEOPDPlaceGlobalResult *globalResult; // @synthesize globalResult=_globalResult;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
@property(readonly, nonatomic) _Bool hasGlobalResult;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) _Bool hasStatus;
- (void)dealloc;
- (id)_disambiguationLabels;
- (id)initWithGeocoderPlace:(id)arg1;

@end

