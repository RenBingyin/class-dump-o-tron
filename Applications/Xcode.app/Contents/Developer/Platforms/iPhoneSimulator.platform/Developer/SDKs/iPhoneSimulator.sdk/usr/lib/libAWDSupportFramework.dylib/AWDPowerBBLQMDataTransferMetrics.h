//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _lQMTransitionCntBuckets;
    unsigned long long _timestamp;
    NSMutableArray *_lQMBytes;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSMutableArray *lQMBytes; // @synthesize lQMBytes=_lQMBytes;
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
- (void)setLQMTransitionCntBuckets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)lQMTransitionCntBucketsAtIndex:(unsigned long long)arg1;
- (void)addLQMTransitionCntBuckets:(unsigned int)arg1;
- (void)clearLQMTransitionCntBuckets;
@property(readonly, nonatomic) unsigned int *lQMTransitionCntBuckets;
@property(readonly, nonatomic) unsigned long long lQMTransitionCntBucketsCount;
- (id)lQMBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)lQMBytesCount;
- (void)addLQMBytes:(id)arg1;
- (void)clearLQMBytes;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

