//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewController.h>

#import "MPUCompletionFooterViewDelegate.h"
#import "MPUCompletionQueryDataSourceDelegate.h"
#import "MusicViewControllerKeepLocalContainer.h"

@class MPUCompletionQueryDataSource, NSOperationQueue, NSString;

@interface MusicAlbumsDetailViewController : MusicTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate, MusicViewControllerKeepLocalContainer>
{
    _Bool _hasEverReceivedWillAppear;
    _Bool _useDownloadAllArtistCellConfig;
    NSOperationQueue *_downloadabilityOperationQueue;
    _Bool _isTransitioning;
    _Bool _isDownloading;
    double _maximumDurationWidth;
    long long _downloadableSongCount;
}

+ (Class)_albumsDetailTableHeaderViewClass;
+ (id)actionCellConfigurationClasses;
+ (_Bool)shouldShowCMC;
+ (_Bool)shouldPushNowPlayingOnSelection;
@property(readonly, nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(readonly, nonatomic) long long downloadableSongCount; // @synthesize downloadableSongCount=_downloadableSongCount;
- (void).cxx_destruct;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_downloadAllButtonAction:(id)arg1;
- (void)_updateTitle;
- (void)_updateVisibleHeadersCloudRightInset;
- (void)_updateVisibleHeadersCloudDownloadStates;
- (long long)_footerStyleForSection:(long long)arg1;
- (void)_configureFooterView:(id)arg1 forSection:(long long)arg2 offer:(id)arg3;
- (void)_applyCloudDownloadStateForHeaderView:(id)arg1 withAlbum:(id)arg2;
- (_Bool)_getCollectionPersistentID:(long long *)arg1 groupingType:(long long *)arg2;
- (long long)_collectionGroupingForProperty:(id)arg1;
- (void)_MusicAlbumsDetailViewController_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_MusicAlbumsDetailViewController_defaultsDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) double maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
- (_Bool)isCollectionKeptLocalForMediaItem:(id)arg1 inSection:(long long)arg2;
- (void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2;
- (void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2;
- (void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(long long)arg3;
- (void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(long long)arg2;
- (void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (_Bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (void)contentSizeCategoryDidChange;
- (id)_createTableView;
@property(readonly, nonatomic) MPUCompletionQueryDataSource *completionDataSource;
- (void)setDataSource:(id)arg1;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

