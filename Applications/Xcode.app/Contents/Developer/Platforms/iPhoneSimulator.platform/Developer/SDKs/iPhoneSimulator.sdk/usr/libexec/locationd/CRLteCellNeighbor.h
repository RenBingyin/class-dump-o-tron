//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CRLteCellNeighbor : PBCodable <NSCopying>
{
    int _ecn0;
    int _pid;
    int _rscp;
    int _rssi;
    int _uarfcn;
    struct {
        unsigned int ecn0:1;
        unsigned int pid:1;
        unsigned int rscp:1;
        unsigned int rssi:1;
        unsigned int uarfcn:1;
    } _has;
}

@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
@property(nonatomic) _Bool hasRssi;
@property(nonatomic) _Bool hasPid;
@property(nonatomic) _Bool hasUarfcn;

@end

