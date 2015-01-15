//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPStyleContents : PBCodable <NSCopying>
{
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(retain, nonatomic) NSMutableArray *zooms; // @synthesize zooms=_zooms;
@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)zoomsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomsCount;
- (void)addZooms:(id)arg1;
- (void)clearZooms;
@property(readonly, nonatomic) _Bool hasProperties;
- (void)dealloc;

@end

