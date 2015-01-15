//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlaceRequest, NSString;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;
    GEOPDPlaceRequest *_request;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) GEOPDPlaceRequest *request; // @synthesize request=_request;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasRequest;
- (void)dealloc;

@end

