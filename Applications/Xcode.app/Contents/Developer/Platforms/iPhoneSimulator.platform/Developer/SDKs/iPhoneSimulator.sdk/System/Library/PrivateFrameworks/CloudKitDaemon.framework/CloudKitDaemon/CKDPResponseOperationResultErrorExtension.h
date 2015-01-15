//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString *_extensionName;
    unsigned int _typeCode;
    struct {
        unsigned int typeCode:1;
    } _has;
}

@property(nonatomic) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
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
@property(nonatomic) _Bool hasTypeCode;
@property(readonly, nonatomic) _Bool hasExtensionName;

@end

