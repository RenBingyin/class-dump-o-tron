//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccountStore.h"

@interface ACAccountStore (GameCenter)
- (void)_gkStoreAppleID:(id)arg1 environment:(long long)arg2 token:(id)arg3 playerID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_gkForACAccount:(id)arg1 environment:(long long)arg2 getToken:(id *)arg3 getPlayerID:(id *)arg4;
- (void)_gkForAppleID:(id)arg1 environment:(long long)arg2 getToken:(id *)arg3 getPlayerID:(id *)arg4;
- (id)_gkAccountForAppleID:(id)arg1;
- (void)_gkFindAccountWithEnvironment:(long long)arg1 getUsername:(id *)arg2 getToken:(id *)arg3 getPlayerID:(id *)arg4;
@end

