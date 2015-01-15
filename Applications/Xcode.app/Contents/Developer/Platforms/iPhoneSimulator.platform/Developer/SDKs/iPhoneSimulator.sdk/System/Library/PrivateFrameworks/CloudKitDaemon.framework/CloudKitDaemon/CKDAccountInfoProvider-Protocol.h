//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainerID, CKDMescalSession, CKDServerConfiguration, CKDURLRequest, NSArray, NSBundle, NSDictionary, NSString, NSURL;

@protocol CKDAccountInfoProvider <NSObject>
- (NSString *)trafficContainerIdentifier;
- (_Bool)shouldFailAllTasks;
- (void)renewAuthTokenWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (NSString *)cloudKitAuthToken;
- (NSString *)iCloudAuthToken;
- (_Bool)canAccessAccount;
- (_Bool)accountWantsPushRegistration;
- (_Bool)isUnitTestingAccount;
- (_Bool)isAnonymousAccount;
- (NSArray *)enabledKeyboards;
- (NSString *)regionCode;
- (NSString *)languageCode;
- (NSString *)serverPreferredPushEnvironment;
- (NSString *)deviceName;
- (NSString *)hardwareID;
- (NSBundle *)applicationBundle;
- (NSString *)bundleID;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)dsid;
- (void)renewMescalSessionForRequest:(CKDURLRequest *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)resetMescalSession;
- (CKDMescalSession *)mescalSession;
- (void)fetchDeviceIDUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)fetchPublicURLUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 serverType:(long long)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (void)fetchConfigurationUsingBackgroundSession:(_Bool)arg1 allowsCellularAccess:(_Bool)arg2 withCompletionHandler:(void (^)(CKDServerConfiguration *, NSError *))arg3;
- (CKDServerConfiguration *)config;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;

@optional
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (NSDictionary *)additionalHeaderValues;
@end

