//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    struct {
        unsigned int componentIndex:1;
        unsigned int componentValueIndex:1;
    } _has;
}

@property(nonatomic) unsigned int componentValueIndex; // @synthesize componentValueIndex=_componentValueIndex;
@property(nonatomic) unsigned int componentIndex; // @synthesize componentIndex=_componentIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasComponentValueIndex;
@property(nonatomic) _Bool hasComponentIndex;

@end

