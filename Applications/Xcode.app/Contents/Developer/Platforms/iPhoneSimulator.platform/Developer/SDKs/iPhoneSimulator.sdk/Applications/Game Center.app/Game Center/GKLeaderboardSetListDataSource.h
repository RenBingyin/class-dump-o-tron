//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBasicCollectionViewDataSource.h"

@class GKGameRecord, GKPlayer;

@interface GKLeaderboardSetListDataSource : GKBasicCollectionViewDataSource
{
    GKGameRecord *_game;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGameRecord *game; // @synthesize game=_game;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)configureCollectionView:(id)arg1;
- (id)sectionTitle;
- (void)dealloc;
- (id)initWithGame:(id)arg1 player:(id)arg2;

@end

