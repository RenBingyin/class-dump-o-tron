//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PersistentAddressBookAddress, PersistentDirectionsHistoryItem, PersistentSearchRequestHistoryItem, PersistentSearchResultHistoryItem;

@interface PersistentHistoryItem : PBCodable <NSCopying>
{
    PersistentAddressBookAddress *_addressBookItem;
    PersistentDirectionsHistoryItem *_directionsHistoryItem;
    PersistentSearchRequestHistoryItem *_searchRequestHistoryItem;
    PersistentSearchResultHistoryItem *_searchResultHistoryItem;
}

@property(retain, nonatomic) PersistentDirectionsHistoryItem *directionsHistoryItem; // @synthesize directionsHistoryItem=_directionsHistoryItem;
@property(retain, nonatomic) PersistentSearchResultHistoryItem *searchResultHistoryItem; // @synthesize searchResultHistoryItem=_searchResultHistoryItem;
@property(retain, nonatomic) PersistentSearchRequestHistoryItem *searchRequestHistoryItem; // @synthesize searchRequestHistoryItem=_searchRequestHistoryItem;
@property(retain, nonatomic) PersistentAddressBookAddress *addressBookItem; // @synthesize addressBookItem=_addressBookItem;
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
@property(readonly, nonatomic) _Bool hasDirectionsHistoryItem;
@property(readonly, nonatomic) _Bool hasSearchResultHistoryItem;
@property(readonly, nonatomic) _Bool hasSearchRequestHistoryItem;
@property(readonly, nonatomic) _Bool hasAddressBookItem;
- (_Bool)isEmpty;
- (void)setItem:(id)arg1;
- (id)item;

@end

