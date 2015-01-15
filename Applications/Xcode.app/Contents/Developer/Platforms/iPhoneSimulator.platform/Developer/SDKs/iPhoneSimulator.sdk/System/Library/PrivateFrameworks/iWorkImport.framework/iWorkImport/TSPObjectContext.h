//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSPDocumentResourceDownloader.h"
#import "TSPFileCoordinatorDelegate.h"
#import "TSPLazyReferenceDelegate.h"
#import "TSPObjectDelegate.h"
#import "TSPPassphraseConsumer.h"
#import "TSPSupportDirectoryDelegate.h"

@class NSData, NSHashTable, NSMapTable, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSProgress, NSRecursiveLock, NSString, NSURL, NSUUID, SFUCryptoKey, TSPComponentManager, TSPDataManager, TSPDocumentProperties, TSPDocumentResourceDataProvider, TSPDocumentResourceManager, TSPDocumentRevision, TSPDocumentSaveOperationState, TSPObject, TSPObjectContainer, TSPObjectUUIDMap, TSPPackage, TSPPackageWriteCoordinator, TSPSupportManager, TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer>
{
    long long _lastObjectIdentifier;
    long long _modifyObjectToken;
    int _modifyObjectCount;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    NSURL *_supportURL;
    TSPDocumentProperties *_documentProperties;
    NSMapTable *_objects;
    TSPObjectUUIDMap *_objectUUIDMap;
    TSPDocumentRevision *_documentRevision;
    long long _preferredPackageType;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversForKnownObjectQueue;
    NSObject<OS_dispatch_queue> *_documentResourceDataProviderQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    TSPDocumentResourceDataProvider *_documentResourceDataProvider;
    NSProgress *_nextSaveProgress;
    TSPDocumentSaveOperationState *_saveOperationState;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
    NSHashTable *_objectModifyDelegates;
    _Bool _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct hash_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    TSPObject *_supportObject;
    TSPPackageWriteCoordinator *_supportWriteCoordinator;
    NSString *_savedPassphrase;
    _Bool _shouldSavePassphrase;
    struct {
        unsigned int delegateRespondsToAdditionalDocumentPropertiesForWrite:1;
        unsigned int delegateRespondsToDocumentPasswordHintForWrite:1;
        unsigned int delegateRespondsToPackageDataForWrite:1;
        unsigned int delegateRespondsToAreNewExternalReferencesToDataAllowed:1;
        unsigned int delegateRespondsToAreExternalReferencesToDataAllowedAtURL:1;
        unsigned int delegateRespondsToBaseUUIDForObjectUUID:1;
        unsigned int delegateRespondsToPreserveDocumentRevisionIdentifierForSequenceZero:1;
        unsigned int delegateRespondsToIsEstimatedDocumentDataSizeNotificationEnabled:1;
        unsigned int delegateRespondsToDidChangeEstimatedDocumentDataSize:1;
        unsigned int delegateRespondsToFilePresenter:1;
        unsigned int delegateRespondsToSupportDirectoryURL:1;
        unsigned int delegateRespondsToIgnoreDocumentSupport:1;
        unsigned int delegateRespondsToIsDocumentSupportTemporary:1;
    } _flags;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id <TSPObjectContextDelegate> _delegate;
    TSPDocumentResourceDataProvider *_gilligan_documentResourceDataProvider;
    TSPDocumentResourceManager *_documentResourceManager;
    TSPComponentManager *_componentManager;
    TSPDataManager *_dataManager;
    TSPSupportManager *_supportManager;
    TSPPackage *_documentPackage;
    TSPPackage *_supportPackage;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    unsigned long long _saveToken;
    NSData *_passwordVerifier;
}

+ (void)waitForPendingEndSaveGroup:(id)arg1;
+ (_Bool)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (id)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2;
+ (_Bool)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 usingDataProvider:(id)arg3;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (id)supportBundleURLForUUID:(id)arg1 delegate:(id)arg2;
+ (id)supportURLForDocumentURL:(id)arg1 coordinateRead:(_Bool)arg2 delegate:(id)arg3 error:(id *)arg4;
+ (void)removeDefaultSupportDirectory;
+ (_Bool)isTangierEditingFormatURL:(id)arg1;
+ (_Bool)isNativeDirectoryFormatURL:(id)arg1;
+ (_Bool)isNativeOrTangierEditingFormatURL:(id)arg1;
@property(readonly, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(retain, nonatomic) TSPObjectContainer *supportObjectContainer; // @synthesize supportObjectContainer=_supportObjectContainer;
@property(retain, nonatomic) TSPObjectContainer *documentObjectContainer; // @synthesize documentObjectContainer=_documentObjectContainer;
@property(readonly, nonatomic) TSPPackage *supportPackage; // @synthesize supportPackage=_supportPackage;
@property(readonly, nonatomic) TSPPackage *documentPackage; // @synthesize documentPackage=_documentPackage;
@property(readonly, nonatomic) TSPSupportManager *supportManager; // @synthesize supportManager=_supportManager;
@property(readonly, nonatomic) TSPDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) TSPComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(readonly, nonatomic) TSPDocumentResourceManager *documentResourceManager; // @synthesize documentResourceManager=_documentResourceManager;
@property(retain, nonatomic) TSPDocumentResourceDataProvider *gilligan_documentResourceDataProvider; // @synthesize gilligan_documentResourceDataProvider=_gilligan_documentResourceDataProvider;
@property(nonatomic) __weak id <TSPObjectContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property(readonly, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (long long)updateModifyObjectToken;
- (id)objectUUIDMap;
- (id)newObjectUUIDForObject:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
@property(nonatomic) long long lastObjectIdentifier;
- (long long)newObjectIdentifier;
- (id)baseUUIDForObjectUUID;
@property(readonly, nonatomic) NSUUID *versionUUID;
- (_Bool)updateDocumentUUIDPreserveOriginalDocumentSupport:(_Bool)arg1 preserveShareUUID:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSUUID *documentUUID;
- (void)didReadDocumentObject:(id)arg1;
- (void)setDocumentObject:(id)arg1;
@property(readonly, nonatomic) _Bool ignoreDocumentResourcesWhileReading;
@property(readonly, nonatomic) _Bool ignoreVersionCheckingWhileReading;
@property(readonly, nonatomic) _Bool ignoreUnknownContentWhileReading;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (id)peekNextVersionUUID;
- (id)supportDirectoryURL;
- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2;
- (long long)modifyObjectTokenForNewObject;
@property(readonly, nonatomic) TSPObjectContext *context;
- (void)performReadUsingAccessorImpl:(CDUnknownBlockType)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2;
- (void)prepareForDocumentReplacement;
- (void)waitForSaveToFinishIfNeeded;
- (id)initForQuickLookWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3 passphrase:(id)arg4;
- (id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)didAddData:(id)arg1;
- (void)notifyEstimatedDocumentDataSizeChanged;
- (void)removeObjectModifyDelegate:(id)arg1;
- (void)addObjectModifyDelegate:(id)arg1;
- (_Bool)containsDataConformingToUTI:(id)arg1;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) _Bool isPasswordProtected;
- (void)cancelDownloads;
- (id)downloadWithDelegate:(id)arg1 description:(id)arg2;
@property(readonly, nonatomic) _Bool isEstimatedDownloadSizePrecise;
@property(readonly, nonatomic) long long estimatedDownloadSize;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)enumerateDocumentResourcesUsingBlock:(CDUnknownBlockType)arg1;
- (void)didFinishUsingDocumentResourceDataProvider:(id)arg1 withSuccess:(_Bool)arg2;
- (id)newDocumentResourceDataProvider;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
- (_Bool)areExternalReferencesSupported;
- (_Bool)readObjectForIdentifier:(long long)arg1 isWeakReference:(_Bool)arg2 rootObjectComponent:(id)arg3 object:(id *)arg4 error:(id *)arg5;
- (id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(_Bool)arg2 componentIdentifier:(long long)arg3;
- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (_Bool)readComponent:(id)arg1 isWeakReference:(_Bool)arg2 rootObject:(id *)arg3 allObjects:(id *)arg4 error:(id *)arg5;
- (_Bool)readComponent:(id)arg1 isWeakReference:(_Bool)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id *)arg5 allObjects:(id *)arg6 error:(id *)arg7;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)prepareToReadSupportObjectWithDocumentResourceDataProvider:(id)arg1 areExternalDataReferencesAllowed:(_Bool)arg2 accessor:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isSupportModified;
@property(readonly, nonatomic) _Bool isDocumentModified;
- (void)setSupportObjectImpl:(id)arg1;
@property(retain, nonatomic) TSPObject *supportObject;
@property long long preferredPackageType;
- (void)resetDocumentRevision;
- (id)incrementDocumentRevisionWithIdentifier:(id)arg1;
@property(retain) TSPDocumentRevision *documentRevision;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (id)dataWithContentsOfPackagePath:(id)arg1;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (id)temporaryDirectory;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (_Bool)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3;
- (_Bool)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id *)arg3 error:(id *)arg4 readCompletion:(CDUnknownBlockType)arg5;
- (_Bool)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id *)arg2;
- (_Bool)continueReadingDocumentObjectFromPackageURL:(id)arg1 documentResourceDataProvider:(id)arg2 areExternalDataReferencesAllowed:(_Bool)arg3 error:(id *)arg4;
- (_Bool)readDocumentObjectFromPackageURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long estimatedDocumentDataSize;
- (unsigned long long)estimatedDocumentSize;
@property(readonly, nonatomic) long long packageType;
@property(readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property(readonly, nonatomic) NSString *passphraseHint;
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSData *keychainGenericItem;
- (_Bool)setPassphrase:(id)arg1;
- (_Bool)setDecryptionKey:(id)arg1;
- (void)endAssertOnModify;
- (void)beginAssertOnModify;
- (void)replaceDocumentObject:(id)arg1;
- (_Bool)saveToURL:(id)arg1 packageType:(long long)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id *)arg5;
- (void)endSaveWithSuccess:(_Bool)arg1;
- (_Bool)endWriteWithSuccess:(_Bool)arg1 error:(id *)arg2;
- (id)currentPackageDataWriter;
- (_Bool)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;
- (_Bool)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2;
- (void)beginWriteWithOriginalURL:(id)arg1;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 documentUUID:(id)arg4;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (id)prepareSaveProgress;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)endWriteOperation;
- (void)beginWriteOperation;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 documentResourceManager:(id)arg3 mode:(unsigned int)arg4 error:(id *)arg5 passphrase:(id)arg6;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned int)arg3 error:(id *)arg4 passphrase:(id)arg5;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3 passphrase:(id)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDelegate:(id)arg1 documentResourceManager:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2;
- (id)objectWithUUIDPath:(id)arg1;
- (id)objectWithUUID:(id)arg1;
- (id)documentRoot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

