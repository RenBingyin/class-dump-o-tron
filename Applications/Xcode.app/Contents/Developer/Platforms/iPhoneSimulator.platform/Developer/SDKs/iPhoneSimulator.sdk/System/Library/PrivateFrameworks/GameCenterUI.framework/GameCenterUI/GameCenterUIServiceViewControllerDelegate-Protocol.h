//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKServiceViewControllerDelegate.h"

@class GKChallengeInternal, NSNumber, NSString;

@protocol GameCenterUIServiceViewControllerDelegate <GKServiceViewControllerDelegate>
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(void (^)(NSArray *, NSError *))arg1;
- (void)playPressedForChallenge:(GKChallengeInternal *)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(NSNumber *)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(NSString *)arg1;
- (void)remoteControllerDidChangeViewState:(NSNumber *)arg1;
@end

