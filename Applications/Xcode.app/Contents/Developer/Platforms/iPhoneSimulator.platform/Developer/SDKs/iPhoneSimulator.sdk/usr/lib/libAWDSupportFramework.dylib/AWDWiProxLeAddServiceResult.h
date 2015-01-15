//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _result;
    NSString *_resultString;
    NSString *_serviceUUID;
    NSString *_sessionId;
    CDStruct_04e1f385 _has;
}

@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(retain, nonatomic) NSString *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasResultString;
@property(readonly, nonatomic) _Bool hasServiceUUID;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

