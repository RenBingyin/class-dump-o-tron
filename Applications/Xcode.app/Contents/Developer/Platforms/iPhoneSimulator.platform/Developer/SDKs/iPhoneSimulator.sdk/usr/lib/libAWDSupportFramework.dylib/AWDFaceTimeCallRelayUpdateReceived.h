//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDFaceTimeCallRelayUpdateReceived : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_guid;
    unsigned int _isVideo;
    unsigned int _onLockScreen;
    CDStruct_8254a500 _has;
}

@property(nonatomic) unsigned int onLockScreen; // @synthesize onLockScreen=_onLockScreen;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOnLockScreen;
@property(nonatomic) _Bool hasIsVideo;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end

