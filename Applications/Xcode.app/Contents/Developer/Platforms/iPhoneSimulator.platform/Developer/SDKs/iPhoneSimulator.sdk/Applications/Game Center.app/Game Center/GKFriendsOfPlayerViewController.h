//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionViewController.h"

#import "UICollectionViewDelegate.h"

@class GKFriendsOfPlayerDataSource, GKPlayer, GKSectionMetrics, NSString;

@interface GKFriendsOfPlayerViewController : GKCollectionViewController <UICollectionViewDelegate>
{
    GKPlayer *_player;
    GKFriendsOfPlayerDataSource *_sharedFriendsDataSource;
    GKFriendsOfPlayerDataSource *_otherFriendsDataSource;
    GKSectionMetrics *_otherFriendsSectionMetrics;
}

@property(retain, nonatomic) GKSectionMetrics *otherFriendsSectionMetrics; // @synthesize otherFriendsSectionMetrics=_otherFriendsSectionMetrics;
@property(retain, nonatomic) GKFriendsOfPlayerDataSource *otherFriendsDataSource; // @synthesize otherFriendsDataSource=_otherFriendsDataSource;
@property(retain, nonatomic) GKFriendsOfPlayerDataSource *sharedFriendsDataSource; // @synthesize sharedFriendsDataSource=_sharedFriendsDataSource;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)selectPlayer:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateMetrics;
- (void)updateFooterMetrics;
- (void)configureSectionFoooter:(id)arg1;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

