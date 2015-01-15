//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSPSupportDirectoryDelegate.h"

@class NSArray, NSDictionary, NSError, NSSet, NSString, NSURL, NSUUID, TSPData, TSPObjectContext;

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional
@property(readonly, nonatomic) _Bool preserveDocumentRevisionIdentifierForSequenceZero;
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, nonatomic) _Bool canUpgradeDocumentSupport;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)gilligan_data:(TSPData *)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(NSString *)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(NSString *)arg5;
- (_Bool)gilligan_isRemoteData:(TSPData *)arg1;
- (void)context:(TSPObjectContext *)arg1 didChangeEstimatedDocumentDataSize:(unsigned long long)arg2;
- (_Bool)isEstimatedDocumentDataSizeNotificationEnabledForContext:(TSPObjectContext *)arg1;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSArray *)arg2 failedOrCancelledDocumentResources:(NSArray *)arg3 error:(NSError *)arg4;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (NSString *)documentPasswordHintForWrite;
- (NSDictionary *)additionalDocumentPropertiesForWrite;
- (NSDictionary *)packageDataForWrite;
- (_Bool)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1;
- (void)didLoadDocumentWrittenByPreviousVersion;
- (void)makeDocumentReadOnly;
- (void)addPersistenceWarnings:(NSSet *)arg1;
- (void)presentPersistenceError:(NSError *)arg1;
@end

