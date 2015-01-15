//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BookmarkFavoritesViewController, NavigationDestination, UIActivity, WebBookmark;

@protocol BookmarkFavoritesViewControllerDelegate <NSObject>
- (struct UIEdgeInsets)contentInsetForFavoritesViewController:(BookmarkFavoritesViewController *)arg1;
- (void)didTapOutsideBookmarkFavoritesViewController:(BookmarkFavoritesViewController *)arg1;
- (void)bookmarkFavoritesViewController:(BookmarkFavoritesViewController *)arg1 didSelectFolder:(WebBookmark *)arg2;
- (void)bookmarkFavoritesViewController:(BookmarkFavoritesViewController *)arg1 didSelectNavigationDestination:(NavigationDestination *)arg2;
- (void)bookmarkFavoritesViewController:(BookmarkFavoritesViewController *)arg1 activityWasSelected:(UIActivity *)arg2;
@end

