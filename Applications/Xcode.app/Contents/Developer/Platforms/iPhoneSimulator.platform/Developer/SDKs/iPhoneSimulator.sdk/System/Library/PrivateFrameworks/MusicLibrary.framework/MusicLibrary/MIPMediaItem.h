//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPMovie, MIPPodcast, MIPSong, MIPTVShow, NSMutableArray, NSString;

@interface MIPMediaItem : PBCodable <NSCopying>
{
    long long _accountId;
    long long _creationDateTime;
    long long _duration;
    long long _fileSize;
    long long _modificationDateTime;
    long long _purchaseHistoryId;
    long long _releaseDateTime;
    long long _sagaId;
    long long _storeId;
    long long _storefrontId;
    int _artworkId;
    int _contentRating;
    NSString *_copyright;
    NSMutableArray *_libraryIdentifiers;
    NSString *_longDescription;
    int _mediaType;
    MIPMovie *_movie;
    MIPPodcast *_podcast;
    NSString *_purchaseHistoryRedownloadParams;
    int _purchaseHistoryToken;
    NSString *_sagaRedownloadParams;
    NSString *_shortDescription;
    MIPSong *_song;
    NSString *_sortTitle;
    NSString *_title;
    MIPTVShow *_tvShow;
    _Bool _explicitContent;
    struct {
        unsigned int accountId:1;
        unsigned int creationDateTime:1;
        unsigned int duration:1;
        unsigned int fileSize:1;
        unsigned int modificationDateTime:1;
        unsigned int purchaseHistoryId:1;
        unsigned int releaseDateTime:1;
        unsigned int sagaId:1;
        unsigned int storeId:1;
        unsigned int storefrontId:1;
        unsigned int artworkId:1;
        unsigned int contentRating:1;
        unsigned int mediaType:1;
        unsigned int purchaseHistoryToken:1;
        unsigned int explicitContent:1;
    } _has;
}

@property(retain, nonatomic) MIPPodcast *podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) MIPTVShow *tvShow; // @synthesize tvShow=_tvShow;
@property(retain, nonatomic) MIPMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) MIPSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSString *sagaRedownloadParams; // @synthesize sagaRedownloadParams=_sagaRedownloadParams;
@property(nonatomic) long long sagaId; // @synthesize sagaId=_sagaId;
@property(retain, nonatomic) NSString *purchaseHistoryRedownloadParams; // @synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams;
@property(nonatomic) int purchaseHistoryToken; // @synthesize purchaseHistoryToken=_purchaseHistoryToken;
@property(nonatomic) long long purchaseHistoryId; // @synthesize purchaseHistoryId=_purchaseHistoryId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long storefrontId; // @synthesize storefrontId=_storefrontId;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSMutableArray *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(nonatomic) int artworkId; // @synthesize artworkId=_artworkId;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(nonatomic) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(nonatomic) int contentRating; // @synthesize contentRating=_contentRating;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long modificationDateTime; // @synthesize modificationDateTime=_modificationDateTime;
@property(nonatomic) long long creationDateTime; // @synthesize creationDateTime=_creationDateTime;
@property(nonatomic) long long releaseDateTime; // @synthesize releaseDateTime=_releaseDateTime;
@property(retain, nonatomic) NSString *sortTitle; // @synthesize sortTitle=_sortTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPodcast;
@property(readonly, nonatomic) _Bool hasTvShow;
@property(readonly, nonatomic) _Bool hasMovie;
@property(readonly, nonatomic) _Bool hasSong;
@property(readonly, nonatomic) _Bool hasSagaRedownloadParams;
@property(nonatomic) _Bool hasSagaId;
@property(readonly, nonatomic) _Bool hasPurchaseHistoryRedownloadParams;
@property(nonatomic) _Bool hasPurchaseHistoryToken;
@property(nonatomic) _Bool hasPurchaseHistoryId;
@property(nonatomic) _Bool hasAccountId;
@property(nonatomic) _Bool hasStorefrontId;
@property(nonatomic) _Bool hasStoreId;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
@property(nonatomic) _Bool hasArtworkId;
@property(readonly, nonatomic) _Bool hasCopyright;
@property(readonly, nonatomic) _Bool hasLongDescription;
@property(readonly, nonatomic) _Bool hasShortDescription;
@property(nonatomic) _Bool hasExplicitContent;
@property(nonatomic) _Bool hasContentRating;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasFileSize;
@property(nonatomic) _Bool hasModificationDateTime;
@property(nonatomic) _Bool hasCreationDateTime;
@property(nonatomic) _Bool hasReleaseDateTime;
@property(readonly, nonatomic) _Bool hasSortTitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasMediaType;

@end

