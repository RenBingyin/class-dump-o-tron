//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, RadioGetHistoryRequest;

@interface RUHistoryDataSource : NSObject <ADBannerViewDelegate>
{
    NSMutableDictionary *_adIdentifierToAdTrack;
    NSMutableDictionary *_adIdentifierToPendingBannerView;
    NSObject<OS_dispatch_source> *_adLoadTimeoutTimerSource;
    NSMutableArray *_bannerViewsPendingRemoval;
    NSMutableArray *_bannerViewsPendingLoad;
    RadioGetHistoryRequest *_historyRequest;
    NSArray *_pendingHistoryCategories;
    id <RUHistoryDataSourceDelegate> _delegate;
    NSArray *_historyCategories;
}

@property(readonly, copy, nonatomic) NSArray *historyCategories; // @synthesize historyCategories=_historyCategories;
@property(nonatomic) __weak id <RUHistoryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_scheduleAdLoadTimeout;
- (void)_removePendingBannerView:(id)arg1;
- (void)_finalizePendingHistoryCategoryIfPossible;
- (void)_reloadWithHistoryCategories:(id)arg1;
- (void)_handleAdLoadTimeout;
- (void)_cancelAdLoadTimeout;
- (id)_arrayByRemovingItemsWithAdIdentifier:(id)arg1 inHistoryCategories:(id)arg2;
- (id)_adIdentifierForHistoryItem:(id)arg1;
- (void)refreshHistory;
- (id)adTrackForHistoryItem:(id)arg1;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

