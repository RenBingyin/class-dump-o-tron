//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString, VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPStyle : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _inherits;
    NSMutableArray *_attributes;
    NSData *_contents;
    NSString *_name;
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSMutableArray *zooms; // @synthesize zooms=_zooms;
@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasContents;
- (id)zoomsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomsCount;
- (void)addZooms:(id)arg1;
- (void)clearZooms;
@property(readonly, nonatomic) _Bool hasProperties;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)addAttributes:(id)arg1;
- (void)clearAttributes;
- (void)setInherits:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)inheritAtIndex:(unsigned long long)arg1;
- (void)addInherit:(unsigned int)arg1;
- (void)clearInherits;
@property(readonly, nonatomic) unsigned int *inherits;
@property(readonly, nonatomic) unsigned long long inheritsCount;
- (void)dealloc;

@end

