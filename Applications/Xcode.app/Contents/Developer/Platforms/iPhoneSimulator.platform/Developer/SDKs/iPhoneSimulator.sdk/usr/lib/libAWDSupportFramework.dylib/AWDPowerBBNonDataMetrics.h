//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _aPWakeCacheFlushCnt;
    unsigned int _idlePowerMicroWatt;
    unsigned int _oOSPowerMicroWatt;
    unsigned int _registrationPowerMicroWatt;
    unsigned int _scanPowerMicroWatt;
    unsigned int _voicePowerMicroWatt;
    struct {
        unsigned int timestamp:1;
        unsigned int aPWakeCacheFlushCnt:1;
        unsigned int idlePowerMicroWatt:1;
        unsigned int oOSPowerMicroWatt:1;
        unsigned int registrationPowerMicroWatt:1;
        unsigned int scanPowerMicroWatt:1;
        unsigned int voicePowerMicroWatt:1;
    } _has;
}

@property(nonatomic) unsigned int aPWakeCacheFlushCnt; // @synthesize aPWakeCacheFlushCnt=_aPWakeCacheFlushCnt;
@property(nonatomic) unsigned int voicePowerMicroWatt; // @synthesize voicePowerMicroWatt=_voicePowerMicroWatt;
@property(nonatomic) unsigned int idlePowerMicroWatt; // @synthesize idlePowerMicroWatt=_idlePowerMicroWatt;
@property(nonatomic) unsigned int registrationPowerMicroWatt; // @synthesize registrationPowerMicroWatt=_registrationPowerMicroWatt;
@property(nonatomic) unsigned int oOSPowerMicroWatt; // @synthesize oOSPowerMicroWatt=_oOSPowerMicroWatt;
@property(nonatomic) unsigned int scanPowerMicroWatt; // @synthesize scanPowerMicroWatt=_scanPowerMicroWatt;
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
@property(nonatomic) _Bool hasAPWakeCacheFlushCnt;
@property(nonatomic) _Bool hasVoicePowerMicroWatt;
@property(nonatomic) _Bool hasIdlePowerMicroWatt;
@property(nonatomic) _Bool hasRegistrationPowerMicroWatt;
@property(nonatomic) _Bool hasOOSPowerMicroWatt;
@property(nonatomic) _Bool hasScanPowerMicroWatt;
@property(nonatomic) _Bool hasTimestamp;

@end
