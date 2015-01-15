//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AWDPowerAppBBMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_appPowers;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSMutableArray *appPowers; // @synthesize appPowers=_appPowers;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)appPowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)appPowersCount;
- (void)addAppPower:(id)arg1;
- (void)clearAppPowers;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

