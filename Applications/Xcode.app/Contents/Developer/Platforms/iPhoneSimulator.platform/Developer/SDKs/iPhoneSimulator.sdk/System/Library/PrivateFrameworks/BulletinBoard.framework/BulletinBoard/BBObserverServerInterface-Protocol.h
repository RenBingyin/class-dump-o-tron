//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BBResponse, BBThumbnailSizeConstraints, NSArray, NSSet, NSString;

@protocol BBObserverServerInterface
- (void)getBulletinsForPublisherBulletinIDs:(NSArray *)arg1 sectionID:(NSString *)arg2 withHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getUniversalSectionIDForSectionID:(NSString *)arg1 withHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getPrivilegedSenderTypesWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getAttachmentAspectRatioForBulletinID:(NSString *)arg1 withHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)getAttachmentPNGDataForBulletinID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2 withHandler:(void (^)(NSData *, NSError *))arg3;
- (void)getSectionParametersForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionParameters *, NSError *))arg2;
- (void)getSortDescriptorsForSectionID:(NSString *)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getSectionOrderRuleWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)requestFutureBulletinsForSectionID:(NSString *)arg1;
- (void)requestTodayBulletinsForSectionID:(NSString *)arg1;
- (void)requestNoticesBulletinsForSectionID:(NSString *)arg1;
- (void)removeBulletins:(NSSet *)arg1 inSection:(NSString *)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(NSSet *)arg1 inSection:(NSString *)arg2;
- (void)clearSection:(NSString *)arg1;
- (void)finishedWithBulletinID:(NSString *)arg1 transactionID:(unsigned long long)arg2;
- (void)handleResponse:(BBResponse *)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(NSString *)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(NSString *)arg2;
@end

