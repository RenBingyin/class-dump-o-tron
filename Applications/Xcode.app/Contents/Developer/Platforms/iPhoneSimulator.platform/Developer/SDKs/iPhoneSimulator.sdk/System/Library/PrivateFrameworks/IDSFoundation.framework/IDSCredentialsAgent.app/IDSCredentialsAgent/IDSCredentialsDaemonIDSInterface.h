//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSMutableDictionary, NSString;

@interface IDSCredentialsDaemonIDSInterface : NSObject <IDSServiceDelegate>
{
    IDSService *_idsService;
    NSMutableDictionary *_uniqueIDToCompletionBlockMap;
}

+ (id)sharedInstance;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_handleSendIDSLocalDeviceInfoResponse:(id)arg1;
- (void)_handleSendIDSLocalDeviceInfoRequest:(id)arg1;
- (void)_handleSendiCloudSignOutMessageResponse:(id)arg1;
- (void)_handleSendiCloudSignOutMessage:(id)arg1;
- (void)_handleSendiCloudSignInMessageResponse:(id)arg1;
- (void)_handleSendiCloudSignInMessage:(id)arg1;
- (void)_handleFetchFaceTimeAndiMessageInfoMessageResponse:(id)arg1;
- (void)_handleFetchFaceTimeAndiMessageInfoMessage:(id)arg1;
- (void)_handleFetchiCloudIDMessageResponse:(id)arg1;
- (void)_handleFetchiCloudIDMessage:(id)arg1;
- (void)_handleRequestAuthTokenResponseMessage:(id)arg1;
- (void)_handleRequestAuthTokenMessage:(id)arg1;
- (void)_handleRequestPasswordResponseMessage:(id)arg1;
- (void)_handleRequestPasswordMessage:(id)arg1;
- (void)_handleFetchAuthTokenResponseMessage:(id)arg1;
- (void)_handleFetchAuthTokenMessage:(id)arg1;
- (void)_handleFetchPasswordResponseMessage:(id)arg1;
- (void)_handleFetchPasswordMessage:(id)arg1;
- (void)forwardIPCRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_sendIDSMessage:(id)arg1;
- (void)_sendIDSLocalDeviceInfoRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendiCloudSignOutRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendiCloudSignInRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendFetchIMFTRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendFetchiCloudIDRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendRequestAuthTokenRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendRequestPasswordRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendFetchAuthTokenRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_sendFetchPasswordRequestToIDS:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isLocalDevicePresent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

