//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPMescalSignatureResponse : PBCodable <NSCopying>
{
    NSData *_mescalHeaderData;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *mescalHeaderData; // @synthesize mescalHeaderData=_mescalHeaderData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasMescalHeaderData;

@end

