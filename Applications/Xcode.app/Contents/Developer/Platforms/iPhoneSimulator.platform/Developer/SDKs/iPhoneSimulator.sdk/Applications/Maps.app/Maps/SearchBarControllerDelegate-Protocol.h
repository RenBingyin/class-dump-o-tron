//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CollectionsViewControllerDelegate.h"
#import "NSObject.h"

@class GEOMapServiceTraits, NSString, SearchBar, SearchBarController, SearchFieldItem;

@protocol SearchBarControllerDelegate <NSObject, CollectionsViewControllerDelegate>
- (int)searchMode;
- (id <SearchBarDelegate>)searchBarController:(SearchBarController *)arg1 delegateForSearchBar:(SearchBar *)arg2;
- (GEOMapServiceTraits *)searchBarControllerTraits:(SearchBarController *)arg1;
- (void)searchBarControllerDidEndEditing:(SearchBarController *)arg1;
- (void)searchBarControllerDidBeginEditing:(SearchBarController *)arg1;
- (void)searchBarController:(SearchBarController *)arg1 didSelectHistoryItem:(id <HistoryItem>)arg2 completedQuery:(NSString *)arg3;
- (void)searchBarControllerDidClear:(SearchBarController *)arg1;
- (void)searchBarController:(SearchBarController *)arg1 didSearchForItem:(SearchFieldItem *)arg2 source:(int)arg3;
@end

