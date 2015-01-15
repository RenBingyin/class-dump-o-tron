//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPURatingControlDelegate.h"

@class MPAVItem, MPMediaItem, MusicFlipsideAlbumDetailHeaderView, NSString, UISegmentedControl, UIView;

@interface MusicFlipsideTracksViewController : UIViewController <MPURatingControlDelegate>
{
    MPMediaItem *_currentMediaItem;
    MPAVItem *_currentAVItem;
    UIView *_container;
    MusicFlipsideAlbumDetailHeaderView *_trackInfoView;
    UISegmentedControl *_segmentedControl;
    _Bool _showingRating;
    _Bool _hasPlaylist;
}

@property(nonatomic) _Bool hasPlaylist; // @synthesize hasPlaylist=_hasPlaylist;
- (void).cxx_destruct;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void)_updateMediaItem;
- (void)_selectedSegmentDidChange:(id)arg1;
- (void)_setShowingRating:(_Bool)arg1;
- (void)_performRating:(id)arg1;
- (void)_performDone:(id)arg1;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

