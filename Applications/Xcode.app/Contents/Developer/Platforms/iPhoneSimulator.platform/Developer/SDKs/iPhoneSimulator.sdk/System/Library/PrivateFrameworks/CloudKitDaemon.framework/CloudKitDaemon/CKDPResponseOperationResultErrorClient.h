//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying>
{
    CKDPOplockFailure *_oplockFailure;
    int _type;
    CKDPUniqueFieldFailure *_uniqueFieldFailure;
    CDStruct_f953fb60 _has;
}

@property(nonatomic) int type; // @synthesize type=_type;
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
@property(nonatomic) _Bool hasType;
@property(retain, nonatomic) CKDPOplockFailure *oplockFailure;
@property(readonly, nonatomic) _Bool hasOplockFailure;
@property(retain, nonatomic) CKDPUniqueFieldFailure *uniqueFieldFailure;
@property(readonly, nonatomic) _Bool hasUniqueFieldFailure;
- (id)_prettyDictionaryRepresentation;

@end

