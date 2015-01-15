//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    unsigned long long _animationID;
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    int _localSearchProviderID;
    int _resultIndex;
    struct {
        unsigned int animationID:1;
        unsigned int businessID:1;
        unsigned int placeID:1;
        unsigned int searchResponseRelativeTimestamp:1;
        unsigned int localSearchProviderID:1;
        unsigned int resultIndex:1;
    } _has;
}

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
@property(nonatomic) unsigned long long animationID; // @synthesize animationID=_animationID;
@property(nonatomic) int resultIndex; // @synthesize resultIndex=_resultIndex;
@property(nonatomic) double searchResponseRelativeTimestamp; // @synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(nonatomic) long long placeID; // @synthesize placeID=_placeID;
@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAnimationID;
@property(nonatomic) _Bool hasResultIndex;
@property(nonatomic) _Bool hasSearchResponseRelativeTimestamp;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) _Bool hasPlaceID;
@property(nonatomic) _Bool hasBusinessID;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;

@end

