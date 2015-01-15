//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDPowerApMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _apAwakeDuration;
    unsigned int _cpuPowerMicroWatt;
    unsigned int _dramPowerMicroWatt;
    unsigned int _gpuPowerMicroWatt;
    unsigned int _socPowerMicroWatt;
    struct {
        unsigned int timestamp:1;
        unsigned int apAwakeDuration:1;
        unsigned int cpuPowerMicroWatt:1;
        unsigned int dramPowerMicroWatt:1;
        unsigned int gpuPowerMicroWatt:1;
        unsigned int socPowerMicroWatt:1;
    } _has;
}

@property(nonatomic) unsigned int apAwakeDuration; // @synthesize apAwakeDuration=_apAwakeDuration;
@property(nonatomic) unsigned int dramPowerMicroWatt; // @synthesize dramPowerMicroWatt=_dramPowerMicroWatt;
@property(nonatomic) unsigned int gpuPowerMicroWatt; // @synthesize gpuPowerMicroWatt=_gpuPowerMicroWatt;
@property(nonatomic) unsigned int socPowerMicroWatt; // @synthesize socPowerMicroWatt=_socPowerMicroWatt;
@property(nonatomic) unsigned int cpuPowerMicroWatt; // @synthesize cpuPowerMicroWatt=_cpuPowerMicroWatt;
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
@property(nonatomic) _Bool hasApAwakeDuration;
@property(nonatomic) _Bool hasDramPowerMicroWatt;
@property(nonatomic) _Bool hasGpuPowerMicroWatt;
@property(nonatomic) _Bool hasSocPowerMicroWatt;
@property(nonatomic) _Bool hasCpuPowerMicroWatt;
@property(nonatomic) _Bool hasTimestamp;

@end

