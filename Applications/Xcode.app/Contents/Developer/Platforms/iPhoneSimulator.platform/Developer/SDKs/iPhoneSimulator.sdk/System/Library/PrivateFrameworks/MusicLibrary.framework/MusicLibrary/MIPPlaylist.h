//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying>
{
    long long _storeId;
    NSMutableArray *_childPlaylists;
    NSMutableArray *_items;
    NSString *_name;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _type;
    _Bool _hidden;
    struct {
        unsigned int storeId:1;
        unsigned int type:1;
        unsigned int hidden:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *childPlaylists; // @synthesize childPlaylists=_childPlaylists;
@property(retain, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo; // @synthesize smartPlaylistInfo=_smartPlaylistInfo;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)childPlaylistsAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlaylistsCount;
- (void)addChildPlaylists:(id)arg1;
- (void)clearChildPlaylists;
@property(readonly, nonatomic) _Bool hasSmartPlaylistInfo;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasStoreId;
@property(readonly, nonatomic) _Bool hasName;

@end

