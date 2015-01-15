//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAirPlayScreenSessionStartedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    unsigned int _clientBonjourMs;
    unsigned int _clientConfigMs;
    unsigned int _clientConnectMs;
    NSString *_clientModel;
    unsigned int _clientPrepareMs;
    NSString *_clientVersion;
    unsigned int _serverAcceptTime;
    unsigned int _serverConfigTime;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int clientBonjourMs:1;
        unsigned int clientConfigMs:1;
        unsigned int clientConnectMs:1;
        unsigned int clientPrepareMs:1;
        unsigned int serverAcceptTime:1;
        unsigned int serverConfigTime:1;
        unsigned int status:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) unsigned int serverConfigTime; // @synthesize serverConfigTime=_serverConfigTime;
@property(nonatomic) unsigned int serverAcceptTime; // @synthesize serverAcceptTime=_serverAcceptTime;
@property(nonatomic) unsigned int clientConfigMs; // @synthesize clientConfigMs=_clientConfigMs;
@property(nonatomic) unsigned int clientConnectMs; // @synthesize clientConnectMs=_clientConnectMs;
@property(nonatomic) unsigned int clientBonjourMs; // @synthesize clientBonjourMs=_clientBonjourMs;
@property(nonatomic) unsigned int clientPrepareMs; // @synthesize clientPrepareMs=_clientPrepareMs;
@property(nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientModel; // @synthesize clientModel=_clientModel;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasServerConfigTime;
@property(nonatomic) _Bool hasServerAcceptTime;
@property(nonatomic) _Bool hasClientConfigMs;
@property(nonatomic) _Bool hasClientConnectMs;
@property(nonatomic) _Bool hasClientBonjourMs;
@property(nonatomic) _Bool hasClientPrepareMs;
@property(nonatomic) _Bool hasAudioCompressionType;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientModel;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

