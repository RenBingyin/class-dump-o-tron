//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying>
{
    NSString *_addressID;
    int _correctionStatus;
    NSMutableArray *_significantLocations;
    struct {
        unsigned int correctionStatus:1;
    } _has;
}

@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) NSMutableArray *significantLocations; // @synthesize significantLocations=_significantLocations;
@property(nonatomic) int correctionStatus; // @synthesize correctionStatus=_correctionStatus;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAddressID;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)significantLocationsCount;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSignificantLocations;
@property(nonatomic) _Bool hasCorrectionStatus;
- (void)dealloc;

@end

