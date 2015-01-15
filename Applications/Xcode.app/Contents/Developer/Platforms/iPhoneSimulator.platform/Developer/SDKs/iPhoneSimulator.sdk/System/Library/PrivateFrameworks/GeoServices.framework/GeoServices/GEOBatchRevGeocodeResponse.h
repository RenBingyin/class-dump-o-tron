//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableArray;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying>
{
    double _timestamp;
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int timestamp:1;
        unsigned int statusCode:1;
        unsigned int ttl:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;
@property(retain, nonatomic) NSMutableArray *batchPlaceResults; // @synthesize batchPlaceResults=_batchPlaceResults;
@property(retain, nonatomic) NSMutableArray *clusters; // @synthesize clusters=_clusters;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasVersion;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) unsigned int ttl; // @synthesize ttl=_ttl;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)batchPlaceResultsCount;
- (void)addBatchPlaceResult:(id)arg1;
- (void)clearBatchPlaceResults;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (unsigned long long)clustersCount;
- (void)addCluster:(id)arg1;
- (void)clearClusters;
@property(nonatomic) _Bool hasStatusCode;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *httpHeaders;

@end

