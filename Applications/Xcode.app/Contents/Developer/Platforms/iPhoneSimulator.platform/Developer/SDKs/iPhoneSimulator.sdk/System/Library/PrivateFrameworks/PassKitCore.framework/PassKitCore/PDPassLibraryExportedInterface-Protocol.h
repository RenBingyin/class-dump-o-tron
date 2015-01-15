//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CLLocation, NSArray, NSData, NSSet, NSString, PKCatalog, PKDisplayProfile;

@protocol PDPassLibraryExportedInterface
- (void)hasInAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(_Bool))arg2;
- (void)inAppPaymentPassesForNetworks:(NSSet *)arg1 withHandler:(void (^)(NSSet *))arg2;
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)countPassesOfType:(unsigned long long)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)logDelayExitReasons;
- (void)librarySuspended;
- (void)libraryResumed;
- (void)sendPassbookUIServiceLaunched;
- (void)sendUserEditedCatalog:(PKCatalog *)arg1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(void (^)(NSSet *, PKCatalog *))arg3;
- (void)getManifestHashAndSettingsForPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(NSData *, long long))arg3;
- (void)shuffleGroups:(int)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)noteAccountDeletedWithHandler:(void (^)(void))arg1;
- (void)noteAccountChangedWithHandler:(void (^)(void))arg1;
- (void)migrateDataWithHandler:(void (^)(_Bool))arg1;
- (void)getDiffForPassBulletinWithRecordID:(NSString *)arg1 handler:(void (^)(PKDiff *))arg2;
- (void)updateObjectWithUniqueID:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)getImageSetForUniqueID:(NSString *)arg1 ofType:(long long)arg2 displayProfile:(PKDisplayProfile *)arg3 handler:(void (^)(PKImageSet *))arg4;
- (void)getContentForUniqueID:(NSString *)arg1 handler:(void (^)(PKContent *))arg2;
- (void)getRouteRelevantPassesForLocation:(CLLocation *)arg1 handler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)getPassWithPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)getArchivedObjectWithUniqueID:(NSString *)arg1 handler:(void (^)(NSData *))arg2;
- (void)getPassWithUniqueID:(NSString *)arg1 handler:(void (^)(PKPass *))arg2;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forPassWithUniqueID:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)getPassesOfType:(unsigned long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)isPaymentPassActivationAvailableWithHandler:(void (^)(_Bool))arg1;
- (void)getPassesWithHandler:(void (^)(NSSet *))arg1;
- (void)noteObjectSharedWithUniqueID:(NSString *)arg1;
- (void)updateSettings:(long long)arg1 forObjectWithUniqueID:(NSString *)arg2;
- (void)ingestPassDatas:(NSArray *)arg1 settings:(NSArray *)arg2 handler:(void (^)(void))arg3;
- (void)removePassesOfType:(unsigned long long)arg1 handler:(void (^)(void))arg2;
- (void)removePassWithUniqueID:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)addPassesWithData:(NSSet *)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)replacePassWithPassData:(NSData *)arg1 handler:(void (^)(_Bool))arg2;
@end

