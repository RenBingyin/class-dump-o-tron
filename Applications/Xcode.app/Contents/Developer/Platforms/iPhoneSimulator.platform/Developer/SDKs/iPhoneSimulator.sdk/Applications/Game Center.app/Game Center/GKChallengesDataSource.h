//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionViewDataSource.h"

@class GKGame, GKPlayer, NSMutableDictionary, NSMutableOrderedSet;

@interface GKChallengesDataSource : GKCollectionViewDataSource
{
    GKGame *_game;
    GKPlayer *_player;
    NSMutableOrderedSet *_games;
    NSMutableDictionary *_bundleIDsToChallenges;
}

+ (id)challengesDataSourceForPlayer:(id)arg1 inGame:(id)arg2;
+ (id)challengesDataSourceForPlayer:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsToChallenges; // @synthesize bundleIDsToChallenges=_bundleIDsToChallenges;
@property(retain, nonatomic) NSMutableOrderedSet *games; // @synthesize games=_games;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)_evaluateChallenge:(id)arg1 withOldChallenges:(id)arg2 newChallenges:(id)arg3 oldSection:(unsigned long long)arg4 newSection:(unsigned long long)arg5;
- (void)_evaluateGame:(id)arg1 withOldOrder:(id)arg2 newOrder:(id)arg3 oldLookup:(id)arg4 newLookup:(id)arg5;
- (id)itemsForLookup:(id)arg1 order:(id)arg2;
- (id)gameForSection:(unsigned long long)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 game:(id)arg2;

@end

