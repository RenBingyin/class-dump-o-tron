//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKServiceViewController.h"

#import "GKGameCenterViewControllerDelegate.h"
#import "GKGameProfileCollectionViewControllerServiceDelegate.h"

@class GKGame, GKLeaderboard, NSArray, NSString;

@interface GameCenterUIServiceViewController : GKServiceViewController <GKGameProfileCollectionViewControllerServiceDelegate, GKGameCenterViewControllerDelegate>
{
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    NSArray *_allLeaderboardIdentifiers;
    GKLeaderboard *_aggregateLeaderboard;
    GKLeaderboard *_currentLeaderboard;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(retain, nonatomic) GKLeaderboard *currentLeaderboard; // @synthesize currentLeaderboard=_currentLeaderboard;
@property(retain, nonatomic) GKLeaderboard *aggregateLeaderboard; // @synthesize aggregateLeaderboard=_aggregateLeaderboard;
@property(retain, nonatomic) NSArray *allLeaderboardIdentifiers; // @synthesize allLeaderboardIdentifiers=_allLeaderboardIdentifiers;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)loadLeaderboardIdentifiers;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setAPIControllerFlags:(CDStruct_b31ca263)arg1;
- (void)gameProfileCollectionViewController:(id)arg1 didSelectLeaderboardTimeScope:(long long)arg2;
- (void)gameProfileCollectionViewController:(id)arg1 didSelectLeaderboardIdentifier:(id)arg2;
- (void)gameProfileCollectionViewController:(id)arg1 didChangeToViewState:(long long)arg2;
- (id)observedKeyPaths;
- (void)setIntialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)configureChildView;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

