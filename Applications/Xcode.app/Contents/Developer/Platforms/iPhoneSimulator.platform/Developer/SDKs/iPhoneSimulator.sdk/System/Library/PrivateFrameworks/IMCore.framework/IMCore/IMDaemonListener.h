//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSString;

@interface IMDaemonListener : NSObject
{
    NSMutableDictionary *_properties;
    NSMutableDictionary *_persistentProperties;
    NSMutableArray *_deferredChatMessages;
    NSMutableArray *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    NSDate *_myIdleSince;
    NSData *_myPicture;
    NSMutableDictionary *_contexts;
    NSString *_myStatusMessage;
    NSString *_myNowPlayingString;
    unsigned long long _myStatus;
    unsigned long long _vcCapabilities;
    _Bool _setupComplete;
    _Bool _postedSetupComplete;
    _Bool _holdingChatMessages;
    _Bool _hidingDisconnect;
    _Bool _hasPendingProcessChange;
}

@property(readonly, nonatomic) NSDictionary *persistentProperties; // @synthesize persistentProperties=_persistentProperties;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) _Bool hasPostedSetupComplete; // @synthesize hasPostedSetupComplete=_postedSetupComplete;
@property(readonly, nonatomic) _Bool shouldHoldChatMessages; // @synthesize shouldHoldChatMessages=_holdingChatMessages;
@property(readonly, nonatomic) unsigned long long vcCapabilities; // @synthesize vcCapabilities=_vcCapabilities;
@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(readonly, nonatomic) _Bool isSetupComplete; // @synthesize isSetupComplete=_setupComplete;
@property(readonly, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
@property(nonatomic, setter=_setHidingDisconnect:) _Bool _hidingDisconnect; // @synthesize _hidingDisconnect;
@property(readonly, retain, nonatomic) NSMutableDictionary *_contexts; // @synthesize _contexts;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)databaseNoLongerFull;
- (void)databaseFull;
- (void)databaseUpdated:(id)arg1;
- (void)_deferredSetup:(id)arg1;
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(_Bool)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (id)valueOfPersistentProperty:(id)arg1;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)valueOfProperty:(id)arg1;
- (id)_stampForContext:(id)arg1;
- (void)_setStamp:(id)arg1 forContext:(id)arg2;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)account:(id)arg1 blockIdleStatusChanged:(_Bool)arg2;
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(id)arg1 allowListChanged:(id)arg2;
- (void)account:(id)arg1 blockListChanged:(id)arg2;
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)standaloneFileTransferRegistered:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandDelivered:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandReceived:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(_Bool)arg5 wasCancelled:(_Bool)arg6;
- (void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5;
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(id)arg1 statusChanged:(id)arg2;
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)account:(id)arg1 defaultsChanged:(id)arg2;
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (void)releaseHeldChatMessages;
- (void)holdChatMessages;
@property(readonly, nonatomic) _Bool isHoldingChatMessages;
- (void)_deferNotification:(id)arg1;
- (void)_processDeferredInvitationDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned int myIdleTime;
@property(readonly, nonatomic) unsigned long long myStatus;
- (void)_processMyStatusChanged;
- (void)_reallyProcessMyStatusChanged;
- (id)serviceWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *allServices;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)_noteDisconnected;
- (void)dealloc;
- (id)init;

@end

