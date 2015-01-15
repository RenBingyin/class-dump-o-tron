//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppSwitcherPageView, SBAppSwitcherPageViewController, SBDisplayItem, SBDisplayLayout;

@protocol SBAppSwitcherScrollingViewDelegate <NSObject>
- (double)reachabilityOffsetForSwitcherScroller:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 updatedPeakPageOffset:(double)arg2;
- (void)switcherScrollerBeganMoving:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScrollerDidEndScrolling:(SBAppSwitcherPageViewController *)arg1;
- (_Bool)switcherScroller:(SBAppSwitcherPageViewController *)arg1 displayItemWantsToBeKeptInViewHierarchy:(SBDisplayItem *)arg2;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 displayItemWantsToBeRemoved:(SBDisplayItem *)arg2;
- (void)switcherScrollerBeganPanning:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 itemTapped:(SBDisplayLayout *)arg2;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 contentOffsetChanged:(double)arg2;
- (double)switcherScrollerDistanceBetweenItemCenters:(SBAppSwitcherPageViewController *)arg1 forOrientation:(long long)arg2;
- (struct CGSize)switcherScrollerItemSize:(SBAppSwitcherPageViewController *)arg1 forOrientation:(long long)arg2;
- (_Bool)switcherScrollerIsRelayoutBlocked:(SBAppSwitcherPageViewController *)arg1;
- (_Bool)switcherScroller:(SBAppSwitcherPageViewController *)arg1 isDisplayItemRemovable:(SBDisplayItem *)arg2;
- (SBAppSwitcherPageView *)switcherScroller:(SBAppSwitcherPageViewController *)arg1 viewForDisplayLayout:(SBDisplayLayout *)arg2;
@end
