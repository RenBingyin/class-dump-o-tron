//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCloudAssetDownloadSessionIdentifier, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPCloudAssetDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_downloadSessions;
    _Bool _downloadSessionsPaused;
    MPCloudAssetDownloadSessionIdentifier *_prioritizedDownloadSessionIdentifier;
}

+ (id)sharedAssetDownloadController;
- (void).cxx_destruct;
- (id)_urlConnectionRequestForContext:(id)arg1;
- (void)_stopDownloadsBasedOnCurrentNetworkIfNeeded;
- (void)_resumedPausedDownloadSessionsForCompletedSessionWithIdentifier:(id)arg1;
- (void)_removeNotificationObserversForDownloadSession:(id)arg1;
- (void)_prioritizeDownloadSession:(id)arg1;
- (id)_newAVAssetForPurchaseResponseDictionary:(id)arg1 context:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)_newAVAssetForContext:(id)arg1;
- (id)_newAssetForExistingDownloadSession:(id)arg1 context:(id)arg2;
- (_Bool)_downloadExistsWithSessionIdentifier:(id)arg1;
- (id)_lowBitrateCachedAssetDestinationDirectory;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (_Bool)_canPlayCachedAssetAtPath:(id)arg1;
- (void)_cancelDownloadSessionWithIdentifier:(id)arg1;
- (id)_cachedAssetDestinationDirectory;
- (void)_cancelDownloadSessionIfInappropriateForCurrentNetwork:(id)arg1;
- (void)cancelSessionForContext:(id)arg1;
- (void)resumeAllDownloadSessions;
- (void)prioritizeDownloadSessionForContext:(id)arg1;
- (void)pauseAllDownloadSessions;
- (id)_assetForExistingDownloadSession:(id)arg1 context:(id)arg2 downloadSessionID:(id)arg3 wantingHighQuality:(_Bool)arg4 returningShouldAttemptFurtherLoad:(out _Bool *)arg5;
- (id)assetForContext:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_matchCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)_downloadSucceededNotification:(id)arg1;
- (void)_downloadFileSizeAvailableNotification:(id)arg1;
- (void)_downloadFailedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

