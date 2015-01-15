//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFContextProvider.h"
#import "MCDNowPlayingViewControllerDataSource.h"
#import "MCDNowPlayingViewControllerDelegate.h"

@class MCDButton, MCDNowPlayingViewController, MPAVController, MPMediaQuery, NSArray, NSString, UIAlertController, UIImage, UILabel;

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate>
{
    id <MCDCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MCDNowPlayingViewController *_nowPlayingViewController;
    MPMediaQuery *_albumQuery;
    NSString *_nowPlayingTitle;
    NSString *_nowPlayingArtist;
    NSString *_nowPlayingAlbum;
    UIImage *_nowPlayingAlbumArt;
    MCDButton *_wishlistButton;
    UILabel *_rightTitleLabel;
    UIAlertController *_actionSheetAlertController;
    _Bool _isLive;
    _Bool _isExplicitTrack;
    int _viewMode;
    NSArray *_controlPages;
    unsigned long long _currentPageIndex;
}

@property(nonatomic) int viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSArray *controlPages; // @synthesize controlPages=_controlPages;
- (void).cxx_destruct;
- (id)newPresentationNavigationController;
- (void)_presentNowPlayingInfo;
- (void)_setPlayerRepeatType:(unsigned long long)arg1;
- (void)updateTrackInformation;
- (void)_updatePlaymodesForRadio;
- (void)_updateWishlistString;
- (void)_wishlistPressed:(id)arg1;
- (void)_playerTick:(id)arg1;
- (void)_playbackContentsChanged:(id)arg1;
- (void)_itemStoreIDDidChangeNotification:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)nowPlayingViewControllerCreate:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (_Bool)nowPlayingViewControllerCanCreate:(id)arg1;
- (_Bool)nowPlayingViewControllerCanRepeat:(id)arg1;
- (_Bool)nowPlayingViewControllerCanShuffle:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (_Bool)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2;
- (_Bool)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 tinted:(out _Bool *)arg4;
- (_Bool)nowPlayingViewControllerShouldUseWishlist:(id)arg1;
- (id)repeatStringForNowPlayingViewController:(id)arg1;
- (unsigned long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (id)shuffleStringForNowPlayingViewController:(id)arg1;
- (unsigned long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (_Bool)nowPlayingViewControllerIsPlaying:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double *)arg2;
- (_Bool)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)getCurrentContext;
- (_Bool)allowContextProvider:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)setTitle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRadioStation:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithGeniusMixPlaylist:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithQuery:(id)arg1 startingAtIndex:(unsigned long long)arg2 player:(id)arg3 serviceProvider:(id)arg4;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

