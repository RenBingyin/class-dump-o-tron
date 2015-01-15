//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDWiFiMetricsManagerWatchdogEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _available;
    unsigned int _deviceIdentifierMap;
    unsigned int _flags;
    int _reason;
    unsigned int _subreason;
    unsigned int _version;
    struct {
        unsigned int timestamp:1;
        unsigned int available:1;
        unsigned int deviceIdentifierMap:1;
        unsigned int flags:1;
        unsigned int reason:1;
        unsigned int subreason:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) unsigned int deviceIdentifierMap; // @synthesize deviceIdentifierMap=_deviceIdentifierMap;
@property(nonatomic) unsigned int subreason; // @synthesize subreason=_subreason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int available; // @synthesize available=_available;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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
@property(nonatomic) _Bool hasDeviceIdentifierMap;
@property(nonatomic) _Bool hasSubreason;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasAvailable;
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasTimestamp;

@end

