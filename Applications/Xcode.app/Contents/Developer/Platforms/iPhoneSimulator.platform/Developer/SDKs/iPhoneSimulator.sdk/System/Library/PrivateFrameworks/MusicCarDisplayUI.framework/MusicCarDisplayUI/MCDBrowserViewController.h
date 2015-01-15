//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UITabBarControllerDelegate.h"

@class MPAVController, NSMapTable, NSString, UIButton, UITabBarController;

@interface MCDBrowserViewController : UINavigationController <UITabBarControllerDelegate>
{
    _Bool _viewHasAppeared;
    _Bool _libraryHasSongs;
    UITabBarController *_tabBarController;
    UIButton *_nowPlayingButton;
    NSMapTable *_noContentViews;
    MPAVController *_player;
    id <MCDCarDisplayServiceProvider> _serviceProvider;
    UITabBarController *_hostTabBarController;
}

@property(nonatomic) __weak UITabBarController *hostTabBarController; // @synthesize hostTabBarController=_hostTabBarController;
@property(nonatomic) __weak id <MCDCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_accountsDidChangeNotification:(id)arg1;
- (void)_reloadHostTabs;
- (void)_nowPlayingButtonTouchUpInside:(id)arg1;
- (void)music_pushNowPlayingViewControllerAnimated:(_Bool)arg1;
- (id)nowPlayingButton;
- (void)_updateNowPlayingVisibility;
- (_Bool)_isNowPlayingAvailable;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)_tabBarDidChangeViewControllers:(id)arg1;
- (void)_mediaLibraryDidChange:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)refreshNavigationPath;
- (void)pushNowPlaying:(_Bool)arg1;
- (void)reloadWithTabs:(id)arg1 forceReload:(_Bool)arg2;
- (id)_createViewControllerForIdentifier:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithHostTabBarController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

