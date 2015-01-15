//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCacheReader.h"

@class NSString;

@interface GKFriendsCacheReader : GKCacheReader
{
    _Bool _shouldFilter;
    NSString *_localPlayerID;
}

+ (id)readerWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(_Bool)arg3;
@property(nonatomic) _Bool shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 withPlayer:(id)arg2;
- (id)getExpirationDateStatement;
- (id)getFriendPlayerGCIDsStatement;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(_Bool)arg3;

@end

