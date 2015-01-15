//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOStorageRouteRequestStorage, NSString;

__attribute__((visibility("hidden")))
@interface DirectionsPlan : PBCodable <NSCopying>
{
    double _arrivalTime;
    unsigned long long _currentRouteIndex;
    unsigned long long _currentRouteStep;
    double _departureTime;
    NSString *_destinationString;
    int _displayMethod;
    NSString *_originString;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    struct {
        unsigned int arrivalTime:1;
        unsigned int currentRouteIndex:1;
        unsigned int currentRouteStep:1;
        unsigned int departureTime:1;
        unsigned int displayMethod:1;
    } _has;
}

@property(nonatomic) int displayMethod; // @synthesize displayMethod=_displayMethod;
@property(nonatomic) unsigned long long currentRouteStep; // @synthesize currentRouteStep=_currentRouteStep;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
@property(nonatomic) double arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(nonatomic) double departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) NSString *originString; // @synthesize originString=_originString;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
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
@property(nonatomic) _Bool hasDisplayMethod;
@property(nonatomic) _Bool hasCurrentRouteStep;
@property(nonatomic) _Bool hasCurrentRouteIndex;
@property(nonatomic) _Bool hasArrivalTime;
@property(nonatomic) _Bool hasDepartureTime;
@property(readonly, nonatomic) _Bool hasDestinationString;
@property(readonly, nonatomic) _Bool hasOriginString;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end
