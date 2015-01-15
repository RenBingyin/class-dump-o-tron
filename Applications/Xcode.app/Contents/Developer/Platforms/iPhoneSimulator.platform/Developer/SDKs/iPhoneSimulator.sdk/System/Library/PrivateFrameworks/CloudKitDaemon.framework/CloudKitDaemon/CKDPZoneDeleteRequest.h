//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordZoneIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPZoneDeleteRequest : PBRequest <NSCopying>
{
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _userPurge;
    struct {
        unsigned int userPurge:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool userPurge; // @synthesize userPurge=_userPurge;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUserPurge;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

