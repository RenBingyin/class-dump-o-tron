//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBThumbnailSizeConstraints, NSDictionary, NSNumber, NSSet, NSString;

@protocol BBRemoteDataProviderClientProxy <NSObject>
- (void)deliverMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (void)attachmentAspectRatioForRecordID:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)deliverBulletinActionResponse:(BBActionResponse *)arg1;
- (void)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2 completion:(void (^)(id, NSError *))arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(NSNumber *)arg1 lastClearedInfo:(BBSectionInfo *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)dataProviderDidLoad;
@end

