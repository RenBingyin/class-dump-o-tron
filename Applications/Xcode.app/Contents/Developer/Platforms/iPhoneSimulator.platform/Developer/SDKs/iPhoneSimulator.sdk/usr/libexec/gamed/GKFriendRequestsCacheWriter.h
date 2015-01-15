//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKDataWriter.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRequestsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;
}

+ (id)writerWithDatabaseConnection:(id)arg1;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;
- (void)bindParametersForRequestStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;
- (id)requestDetailsUpdateSQL;
- (id)requestDetailsInsertSQL;
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;
- (id)requestRelationshipUpdateSQL;
- (id)requestRelationshipInsertSQL;
- (void)bindParametersForRequestingPlayerStatement:(struct sqlite3_stmt *)arg1 player:(id)arg2;
- (id)requestingPlayerInsertSQL;
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;
- (id)listExpirationDateUpdateSQL;
- (id)listExpirationDateInsertSQL;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

