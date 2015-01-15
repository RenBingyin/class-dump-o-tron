//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface CKDPInvitationRecipient : PBCodable <NSCopying>
{
    NSString *_emailAddress;
    CKDPIdentifier *_userId;
}

@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
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
@property(readonly, nonatomic) _Bool hasEmailAddress;
@property(readonly, nonatomic) _Bool hasUserId;

@end

