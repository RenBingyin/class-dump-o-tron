//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKProfileViewController.h"

@class GKPlayer, GKPlayerProfileHeaderView, GKValueWithCaptionBubbleControl;

@interface GKPlayerProfileBubbleViewController : GKProfileViewController
{
    GKPlayer *_player;
    GKPlayerProfileHeaderView *_headerView;
    GKValueWithCaptionBubbleControl *_gamesBubble;
    GKValueWithCaptionBubbleControl *_pointsBubble;
    GKValueWithCaptionBubbleControl *_friendsBubble;
    struct CGSize _sizeToWhichViewIsTransitioning;
}

+ (Class)headerViewClass;
@property(nonatomic) struct CGSize sizeToWhichViewIsTransitioning; // @synthesize sizeToWhichViewIsTransitioning=_sizeToWhichViewIsTransitioning;
@property(readonly, retain) GKValueWithCaptionBubbleControl *friendsBubble; // @synthesize friendsBubble=_friendsBubble;
@property(readonly, retain) GKValueWithCaptionBubbleControl *pointsBubble; // @synthesize pointsBubble=_pointsBubble;
@property(readonly, retain) GKValueWithCaptionBubbleControl *gamesBubble; // @synthesize gamesBubble=_gamesBubble;
@property(retain, nonatomic) GKPlayerProfileHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)didTouchPointsBubble;
- (void)didTouchFriendsBubble;
- (void)didTouchGamesBubble;
- (void)configureControlForBubble:(id)arg1;
- (void)didUpdateModel;
- (void)_updateTextForBubbleOfType:(long long)arg1;
- (void)setAccentColor:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

