//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPShareIdentifier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPShareParticipantUpdateRequest : PBRequest <NSCopying>
{
    NSMutableArray *_participants;
    CKDPShareIdentifier *_shareId;
}

+ (id)options;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
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
- (id)participantAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
@property(readonly, nonatomic) _Bool hasShareId;

@end

