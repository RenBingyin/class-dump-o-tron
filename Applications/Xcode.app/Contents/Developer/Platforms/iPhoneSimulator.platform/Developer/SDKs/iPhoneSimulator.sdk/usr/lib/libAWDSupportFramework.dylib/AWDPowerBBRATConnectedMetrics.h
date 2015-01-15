//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AWDPowerBBRATConnectedMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_rATPowers;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSMutableArray *rATPowers; // @synthesize rATPowers=_rATPowers;
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
- (id)rATPowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)rATPowersCount;
- (void)addRATPower:(id)arg1;
- (void)clearRATPowers;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

