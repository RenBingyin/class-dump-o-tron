//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSAppleEmailInterfaceListener.h"
#import "IMSystemMonitorListener.h"

@class FTMessageDelivery, NSMutableArray, NSMutableDictionary;

@interface IDSAppleIDRegistrationCenter : NSObject <IMSystemMonitorListener, IDSAppleEmailInterfaceListener>
{
    NSMutableDictionary *_queues;
    NSMutableArray *_handlers;
    FTMessageDelivery *_messageDelivery;
}

+ (id)sharedInstance;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)center:(id)arg1 foundEmail:(id)arg2 vettingToken:(id)arg3 forRegistrationInfo:(id)arg4;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (_Bool)authenticateRegistration:(id)arg1;
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;
- (_Bool)removeEmail:(id)arg1 forRegistration:(id)arg2;
- (_Bool)unlinkHandle:(id)arg1 forRegistration:(id)arg2;
- (_Bool)linkHandle:(id)arg1 vettingToken:(id)arg2 forRegistration:(id)arg3;
- (_Bool)validateEmail:(id)arg1 forRegistration:(id)arg2;
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;
- (_Bool)_sendConfirmationForEmail:(id)arg1 vettingToken:(id)arg2 registration:(id)arg3;
- (_Bool)_sendUnlinkForHandle:(id)arg1 registration:(id)arg2;
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;
- (_Bool)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;
- (_Bool)_sendValidationForEmail:(id)arg1 registration:(id)arg2;
- (_Bool)_registrationNeedsAuthentication:(id)arg1;
- (_Bool)_registrationIsAuthenticating:(id)arg1;
- (id)_displayStringForIDSRegistrationServiceType:(id)arg1;
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;
- (_Bool)__reallySendAuthentication:(id)arg1 password:(id)arg2;
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_renewTokenForRegistrationInfo:(id)arg1;
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;
- (void)_fetchPasswordForRegistrationInfo:(id)arg1;
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_processLinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_processUnlinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_processValidateHandleRequestMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_processAuthenticationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;
- (void)_handleServerResponse:(long long)arg1 registration:(id)arg2;
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_notifyEmailValidationRequestSuccess:(id)arg1 emailAddress:(id)arg2;
- (void)_notifyEmailValidationRequestFailure:(id)arg1 emailAddress:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)_notifyEmailConfirmationSuccess:(id)arg1 emailAddress:(id)arg2;
- (void)_notifyEmailConfirmationFailure:(id)arg1 emailAddress:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)_notifyHandleUnlinkSuccess:(id)arg1 handle:(id)arg2;
- (void)_notifyHandleUnlinkFailure:(id)arg1 handle:(id)arg2 error:(long long)arg3 info:(id)arg4;
- (void)_notifyAuthenticationSuccess:(id)arg1;
- (void)_notifyAuthenticationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;
- (void)_notifyRegistrationRequired:(id)arg1;
- (void)_notifyAuthenticating:(id)arg1;
- (void)_notifyRegionValidationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;
- (void)_serviceQueueForKey:(id)arg1;
- (void)_setQueue:(id)arg1 forKey:(id)arg2;
- (id)_queueForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

