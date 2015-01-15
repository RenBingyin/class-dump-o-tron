//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDVPNSession : PBCodable <NSCopying>
{
    unsigned long long _inBytes;
    unsigned long long _outBytes;
    unsigned long long _timestamp;
    unsigned int _disconnectReason;
    unsigned int _duration;
    unsigned int _ipv4Installed;
    unsigned int _ipv6Installed;
    NSString *_protocol;
    unsigned int _reassertCount;
    unsigned int _systemAuthenMethod;
    unsigned int _triggerTrafficClass;
    unsigned int _triggerType;
    unsigned int _userAuthenMethod;
    _Bool _appVpnUsed;
    _Bool _connectFailed;
    _Bool _proxyInstalled;
    struct {
        unsigned int inBytes:1;
        unsigned int outBytes:1;
        unsigned int timestamp:1;
        unsigned int disconnectReason:1;
        unsigned int duration:1;
        unsigned int ipv4Installed:1;
        unsigned int ipv6Installed:1;
        unsigned int reassertCount:1;
        unsigned int systemAuthenMethod:1;
        unsigned int triggerTrafficClass:1;
        unsigned int triggerType:1;
        unsigned int userAuthenMethod:1;
        unsigned int appVpnUsed:1;
        unsigned int connectFailed:1;
        unsigned int proxyInstalled:1;
    } _has;
}

@property(nonatomic) unsigned long long outBytes; // @synthesize outBytes=_outBytes;
@property(nonatomic) unsigned long long inBytes; // @synthesize inBytes=_inBytes;
@property(nonatomic) unsigned int reassertCount; // @synthesize reassertCount=_reassertCount;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool connectFailed; // @synthesize connectFailed=_connectFailed;
@property(nonatomic) unsigned int disconnectReason; // @synthesize disconnectReason=_disconnectReason;
@property(nonatomic) unsigned int userAuthenMethod; // @synthesize userAuthenMethod=_userAuthenMethod;
@property(nonatomic) unsigned int systemAuthenMethod; // @synthesize systemAuthenMethod=_systemAuthenMethod;
@property(nonatomic) _Bool appVpnUsed; // @synthesize appVpnUsed=_appVpnUsed;
@property(nonatomic) _Bool proxyInstalled; // @synthesize proxyInstalled=_proxyInstalled;
@property(nonatomic) unsigned int ipv6Installed; // @synthesize ipv6Installed=_ipv6Installed;
@property(nonatomic) unsigned int ipv4Installed; // @synthesize ipv4Installed=_ipv4Installed;
@property(nonatomic) unsigned int triggerTrafficClass; // @synthesize triggerTrafficClass=_triggerTrafficClass;
@property(nonatomic) unsigned int triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
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
@property(nonatomic) _Bool hasOutBytes;
@property(nonatomic) _Bool hasInBytes;
@property(nonatomic) _Bool hasReassertCount;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasConnectFailed;
@property(nonatomic) _Bool hasDisconnectReason;
@property(nonatomic) _Bool hasUserAuthenMethod;
@property(nonatomic) _Bool hasSystemAuthenMethod;
@property(nonatomic) _Bool hasAppVpnUsed;
@property(nonatomic) _Bool hasProxyInstalled;
@property(nonatomic) _Bool hasIpv6Installed;
@property(nonatomic) _Bool hasIpv4Installed;
@property(nonatomic) _Bool hasTriggerTrafficClass;
@property(nonatomic) _Bool hasTriggerType;
@property(readonly, nonatomic) _Bool hasProtocol;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
