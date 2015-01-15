//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying>
{
    CDStruct_95bda58d _rssiHistorys;
    unsigned long long _timestamp;
    unsigned int _akmSuites;
    unsigned int _capabilities;
    unsigned int _channel;
    unsigned int _channelWidth;
    unsigned int _flags;
    unsigned int _htASel;
    unsigned int _htAmpduParams;
    unsigned int _htExtended;
    unsigned int _htInfo;
    NSData *_htSupportedMcsSet;
    unsigned int _htTxBf;
    unsigned int _mcastCipher;
    NSData *_oui;
    unsigned int _phyMode;
    unsigned int _reason;
    unsigned int _securityType;
    unsigned int _subreason;
    unsigned int _ucastCipher;
    unsigned int _vhtInfo;
    NSData *_vhtSupportedMcsSet;
    unsigned int _wpaProtocol;
    _Bool _isInVol;
    _Bool _isLinkUp;
    struct {
        unsigned int timestamp:1;
        unsigned int akmSuites:1;
        unsigned int capabilities:1;
        unsigned int channel:1;
        unsigned int channelWidth:1;
        unsigned int flags:1;
        unsigned int htASel:1;
        unsigned int htAmpduParams:1;
        unsigned int htExtended:1;
        unsigned int htInfo:1;
        unsigned int htTxBf:1;
        unsigned int mcastCipher:1;
        unsigned int phyMode:1;
        unsigned int reason:1;
        unsigned int securityType:1;
        unsigned int subreason:1;
        unsigned int ucastCipher:1;
        unsigned int vhtInfo:1;
        unsigned int wpaProtocol:1;
        unsigned int isInVol:1;
        unsigned int isLinkUp:1;
    } _has;
}

@property(retain, nonatomic) NSData *vhtSupportedMcsSet; // @synthesize vhtSupportedMcsSet=_vhtSupportedMcsSet;
@property(nonatomic) unsigned int vhtInfo; // @synthesize vhtInfo=_vhtInfo;
@property(retain, nonatomic) NSData *htSupportedMcsSet; // @synthesize htSupportedMcsSet=_htSupportedMcsSet;
@property(nonatomic) unsigned int htAmpduParams; // @synthesize htAmpduParams=_htAmpduParams;
@property(nonatomic) unsigned int htASel; // @synthesize htASel=_htASel;
@property(nonatomic) unsigned int htTxBf; // @synthesize htTxBf=_htTxBf;
@property(nonatomic) unsigned int htExtended; // @synthesize htExtended=_htExtended;
@property(nonatomic) unsigned int htInfo; // @synthesize htInfo=_htInfo;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) unsigned int akmSuites; // @synthesize akmSuites=_akmSuites;
@property(nonatomic) unsigned int ucastCipher; // @synthesize ucastCipher=_ucastCipher;
@property(nonatomic) unsigned int mcastCipher; // @synthesize mcastCipher=_mcastCipher;
@property(nonatomic) unsigned int wpaProtocol; // @synthesize wpaProtocol=_wpaProtocol;
@property(nonatomic) unsigned int securityType; // @synthesize securityType=_securityType;
@property(retain, nonatomic) NSData *oui; // @synthesize oui=_oui;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int phyMode; // @synthesize phyMode=_phyMode;
@property(nonatomic) unsigned int channelWidth; // @synthesize channelWidth=_channelWidth;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int subreason; // @synthesize subreason=_subreason;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool isInVol; // @synthesize isInVol=_isInVol;
@property(nonatomic) _Bool isLinkUp; // @synthesize isLinkUp=_isLinkUp;
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
@property(readonly, nonatomic) _Bool hasVhtSupportedMcsSet;
@property(nonatomic) _Bool hasVhtInfo;
@property(readonly, nonatomic) _Bool hasHtSupportedMcsSet;
@property(nonatomic) _Bool hasHtAmpduParams;
@property(nonatomic) _Bool hasHtASel;
@property(nonatomic) _Bool hasHtTxBf;
@property(nonatomic) _Bool hasHtExtended;
@property(nonatomic) _Bool hasHtInfo;
@property(nonatomic) _Bool hasCapabilities;
@property(nonatomic) _Bool hasAkmSuites;
@property(nonatomic) _Bool hasUcastCipher;
@property(nonatomic) _Bool hasMcastCipher;
@property(nonatomic) _Bool hasWpaProtocol;
@property(nonatomic) _Bool hasSecurityType;
@property(readonly, nonatomic) _Bool hasOui;
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) _Bool hasPhyMode;
@property(nonatomic) _Bool hasChannelWidth;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasSubreason;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasIsInVol;
@property(nonatomic) _Bool hasIsLinkUp;
- (void)setRssiHistorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (void)addRssiHistory:(int)arg1;
- (void)clearRssiHistorys;
@property(readonly, nonatomic) int *rssiHistorys;
@property(readonly, nonatomic) unsigned long long rssiHistorysCount;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

