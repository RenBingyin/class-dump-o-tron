//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKTurnBasedInviteViewController, NSError, NSString;

@protocol GKTurnBasedInviteViewControllerDelegate <NSObject>
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didCreateMatchID:(NSString *)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(GKTurnBasedInviteViewController *)arg1;
@end

