//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBulletinMultiplayerInvite.h"

@interface GKBulletinMultiplayerInviteInitiate : GKBulletinMultiplayerInvite
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;
- (void)handleDeclineAction;
- (void)handleAcceptAction;
- (void)handleAction:(id)arg1;
- (void)assembleBulletin;

@end

