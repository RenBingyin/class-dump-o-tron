//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKDaemonProxyDataUpdateDelegate.h"
#import "GKURLHandling.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class GKChallengesViewController, GKFriendsViewController, GKGamesViewController, GKLocalPlayerProfileViewController, GKNavigationController, GKPendingFriendRequest, GKTurnsViewController, GKUITheme, NSDictionary, NSMutableArray, NSString, NSURL, UITabBarController, UIViewController, UIWindow;

@interface AppDelegate : NSObject <UINavigationControllerDelegate, SKStoreProductViewControllerDelegate, UIApplicationDelegate, UITabBarControllerDelegate, GKURLHandling, GKDaemonProxyDataUpdateDelegate>
{
    NSDictionary *_pendingNotification;
    GKPendingFriendRequest *_pendingFriendRequest;
    _Bool _presentingAnimated;
    _Bool _handlingOpenURL;
    _Bool _didDisplayAuthUI;
    UIWindow *_window;
    UITabBarController *_tabBarController;
    GKUITheme *_theme;
    long long _friendRequestCount;
    NSMutableArray *_controllersToPresent;
    NSURL *_openURL;
    NSString *_openURLApplication;
    GKLocalPlayerProfileViewController *_currentPlayerController;
    GKFriendsViewController *_friendsController;
    GKChallengesViewController *_challengesController;
    GKTurnsViewController *_turnsController;
    GKGamesViewController *_gamesController;
    GKNavigationController *_meTabController;
    UIViewController *_friendsTabController;
    GKNavigationController *_gamesTabController;
    UIViewController *_challengesTabController;
    UIViewController *_turnsTabController;
    NSString *_lastKnownAuthenticatedPlayerID;
    NSDictionary *_restorationViewControllers;
    CDUnknownBlockType _storePageCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType storePageCompleteBlock; // @synthesize storePageCompleteBlock=_storePageCompleteBlock;
@property(nonatomic) _Bool didDisplayAuthUI; // @synthesize didDisplayAuthUI=_didDisplayAuthUI;
@property(nonatomic) _Bool handlingOpenURL; // @synthesize handlingOpenURL=_handlingOpenURL;
@property(retain, nonatomic) NSDictionary *restorationViewControllers; // @synthesize restorationViewControllers=_restorationViewControllers;
@property(retain, nonatomic) NSString *lastKnownAuthenticatedPlayerID; // @synthesize lastKnownAuthenticatedPlayerID=_lastKnownAuthenticatedPlayerID;
@property(retain, nonatomic) UIViewController *turnsTabController; // @synthesize turnsTabController=_turnsTabController;
@property(retain, nonatomic) UIViewController *challengesTabController; // @synthesize challengesTabController=_challengesTabController;
@property(retain, nonatomic) GKNavigationController *gamesTabController; // @synthesize gamesTabController=_gamesTabController;
@property(retain, nonatomic) UIViewController *friendsTabController; // @synthesize friendsTabController=_friendsTabController;
@property(retain, nonatomic) GKNavigationController *meTabController; // @synthesize meTabController=_meTabController;
@property(retain, nonatomic) GKGamesViewController *gamesController; // @synthesize gamesController=_gamesController;
@property(retain, nonatomic) GKTurnsViewController *turnsController; // @synthesize turnsController=_turnsController;
@property(retain, nonatomic) GKChallengesViewController *challengesController; // @synthesize challengesController=_challengesController;
@property(retain, nonatomic) GKFriendsViewController *friendsController; // @synthesize friendsController=_friendsController;
@property(retain, nonatomic) GKLocalPlayerProfileViewController *currentPlayerController; // @synthesize currentPlayerController=_currentPlayerController;
@property(retain, nonatomic) NSString *openURLApplication; // @synthesize openURLApplication=_openURLApplication;
@property(retain, nonatomic) NSURL *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSMutableArray *controllersToPresent; // @synthesize controllersToPresent=_controllersToPresent;
@property(nonatomic, getter=isPresentingAnimated) _Bool presentingAnimated; // @synthesize presentingAnimated=_presentingAnimated;
@property(nonatomic) long long friendRequestCount; // @synthesize friendRequestCount=_friendRequestCount;
@property(retain, nonatomic) GKPendingFriendRequest *pendingFriendRequest; // @synthesize pendingFriendRequest=_pendingFriendRequest;
@property(retain, nonatomic) NSDictionary *pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)layoutRTL;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showPlayerDetailsForFriend:(id)arg1 sender:(id)arg2;
- (void)showLocalPlayerDetails;
- (void)showFriendRequest:(id)arg1;
- (void)showLoginAlertForFriendRequest:(id)arg1;
- (void)showAddEmailAddressAlertForFriendRequest:(id)arg1;
- (void)localPlayerDidAuthenticate;
- (void)authenticationChanged:(id)arg1;
- (void)tabBarBadgeWasReset:(id)arg1;
- (void)updateTabBarEnabledState;
- (_Bool)tabBarShouldBeEnabled;
- (void)showAuthenticateViewController:(id)arg1;
- (void)setupTopLevelViewControllers;
- (id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
- (void)invalidateViewRestorationDictionary;
- (id)turnsNavController;
- (id)challengesNavController;
- (id)friendsNavController;
- (void)setupCurrentPlayerViewController;
- (void)setupTurnsViewController;
- (void)setupChallengesViewController;
- (void)setupGamesViewController;
- (void)setupFriendsViewController;
- (void)setupRootViewControllerWithTabBar;
- (void)setupTabBarController;
- (void)setupRootViewControllerWithoutTabBar;
- (void)setupNavigationControllersForTabs;
- (id)splitViewControllerForRootController:(id)arg1 restorationIdentifierForSplitView:(id)arg2 restorationIdentifierForRootController:(id)arg3;
- (void)handleOpenURL:(id)arg1 fromApplication:(id)arg2;
- (void)showSandboxSignOutAlert;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)fixupRestorationClassForViewController:(id)arg1;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (void)markAllBadgesViewedForType:(unsigned long long)arg1;
- (void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (void)_setTabBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)presentStoreProductPageForURL:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (_Bool)dispatchURL:(id)arg1;
- (void)displayScoreForLeaderboardWithID:(id)arg1 orAchievementWithID:(id)arg2 forGameWithBundleID:(id)arg3 forPlayerWithID:(id)arg4;
- (void)displayAchievementWithID:(id)arg1 forGameWithBundleID:(id)arg2 forPlayerWithID:(id)arg3;
- (void)displayScoreForLeaderboardWithID:(id)arg1 forGameWithBundleID:(id)arg2 forPlayerWithID:(id)arg3;
- (void)displayPlayerWithID:(id)arg1;
- (void)displayLocalPlayer;
- (void)handleFriendRequestWithQueryDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

