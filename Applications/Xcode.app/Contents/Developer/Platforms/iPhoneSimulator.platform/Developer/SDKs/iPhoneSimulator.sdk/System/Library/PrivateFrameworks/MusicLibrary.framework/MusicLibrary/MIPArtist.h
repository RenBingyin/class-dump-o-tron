//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface MIPArtist : PBCodable <NSCopying>
{
    long long _storeId;
    NSString *_artworkId;
    NSString *_name;
    NSString *_sortName;
    CDStruct_9ea45725 _has;
}

@property(retain, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasArtworkId;
@property(readonly, nonatomic) _Bool hasSortName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasStoreId;

@end

