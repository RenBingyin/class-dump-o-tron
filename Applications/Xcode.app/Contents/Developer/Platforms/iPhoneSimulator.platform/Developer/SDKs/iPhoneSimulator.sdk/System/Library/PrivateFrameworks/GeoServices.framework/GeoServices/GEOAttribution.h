//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOAttribution : PBCodable <NSCopying>
{
    NSString *_badge;
    NSString *_badgeChecksum;
    NSString *_logo;
    NSString *_logoChecksum;
    NSString *_name;
    NSString *_url;
}

@property(retain, nonatomic) NSString *logoChecksum; // @synthesize logoChecksum=_logoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum; // @synthesize badgeChecksum=_badgeChecksum;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLogoChecksum;
@property(readonly, nonatomic) _Bool hasBadgeChecksum;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLogo;
@property(readonly, nonatomic) _Bool hasBadge;
- (void)dealloc;

@end

