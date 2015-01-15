//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKDataWriter.h"

@class GKDatabaseConnection, NSString;

@interface GKPlayerProfileCacheWriter : NSObject <GKDataWriter>
{
    int _familiarity;
    NSString *_localPlayerID;
    NSString *_language;
    GKDatabaseConnection *_connection;
}

+ (id)writerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
@property(nonatomic) int familiarity; // @synthesize familiarity=_familiarity;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;
- (id)relationshipUpdateSQL;
- (id)relationshipInsertSQL;
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;
- (id)profileUpdateSQLForResource:(id)arg1;
- (id)profileInsertSQL;
- (void)bindParametersForEmailStatement:(struct sqlite3_stmt *)arg1 email:(id)arg2 ofPlayer:(id)arg3;
- (id)emailUpdateSQL;
- (id)emailInsertSQL;
- (void)dealloc;
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

