//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"

@class CPLChangeSession, CPLConfiguration, CPLPlatformObject, CPLStatus, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLLibraryManager : NSObject <CPLAbstractObject>
{
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    _Bool _sizeOfResourcesToUploadIsSet;
    long long _configurationOnce;
    long long _statusOnce;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    NSString *_libraryVersion;
    unsigned long long _sizeOfResourcesToUpload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfVideosToUpload;
    unsigned long long _numberOfOtherItemsToUpload;
    id <CPLLibraryManagerDelegate> _delegate;
    id <CPLResourceProgressDelegate> _resourceProgressDelegate;
    unsigned long long _status;
    NSError *_statusError;
    unsigned long long _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoDaemonImplementation;
@property(copy, nonatomic) NSString *effectiveClientBundleIdentifier; // @synthesize effectiveClientBundleIdentifier=_effectiveClientBundleIdentifier;
@property(copy, nonatomic) NSString *userOverride; // @synthesize userOverride=_userOverride;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSError *statusError; // @synthesize statusError=_statusError;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <CPLResourceProgressDelegate> resourceProgressDelegate; // @synthesize resourceProgressDelegate=_resourceProgressDelegate;
@property(nonatomic) __weak id <CPLLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long numberOfOtherItemsToUpload; // @synthesize numberOfOtherItemsToUpload=_numberOfOtherItemsToUpload;
@property(readonly, nonatomic) unsigned long long numberOfVideosToUpload; // @synthesize numberOfVideosToUpload=_numberOfVideosToUpload;
@property(readonly, nonatomic) unsigned long long numberOfImagesToUpload; // @synthesize numberOfImagesToUpload=_numberOfImagesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload; // @synthesize sizeOfResourcesToUpload=_sizeOfResourcesToUpload;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)addInfoToLog:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool diagnosticsEnabled;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (id)addSubscriberUsingPublishingHandler:(CDUnknownBlockType)arg1;
- (void)startSyncSession;
- (void)resetStatus;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 numberOfImages:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfOtherItems:(unsigned long long)arg4;
- (_Bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDownloadForResource:(id)arg1 highPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setLibraryVersion:(id)arg1;
- (void)_setCurrentSession:(id)arg1;
- (void)discardCurrentSession;
- (id)currentSession;
- (void)removeCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CPLStatus *syncStatus;
- (void)_statusDidChange;
@property(readonly, nonatomic) CPLConfiguration *configuration;
- (void)_configurationDidChange;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_closeDeactivating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)barrier;
- (id)initForManagement;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

