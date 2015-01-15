//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "PQLBindable.h"
#import "PQLResultSetInitializer.h"

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLBindable, PQLResultSetInitializer, NSCopying>
{
    NSString *_etag;
    _Bool _knownToServer;
    _Bool _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) _Bool wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) _Bool knownToServer; // @synthesize knownToServer=_knownToServer;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasEtag;
@property(nonatomic) _Bool hasWasCached;
@property(nonatomic) _Bool hasKnownToServer;
- (void)dealloc;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)initWithSqlite3Value:(struct Mem *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

